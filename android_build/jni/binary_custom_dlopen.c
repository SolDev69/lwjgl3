// From https://gist.github.com/twaik/751561fd04972adb83d211117743dee3
// Modified version

#include <dlfcn.h>
#include <cstring>
#include <android/dlext.h>

#include "binary_custom_dlopen.h"
#include "log.h" // LOGE, LOGW, etc...

bool (*_android_init_namespaces)(const char* public_ns_sonames, const char* anon_ns_library_path) = nullptr;
bool __unused android_init_namespaces(const char* public_ns_sonames, const char* anon_ns_library_path) {
	if (!_android_init_namespaces) {
		void *libdl_handle;
		char *error;
		libdl_handle = dlopen ("libdl.so", RTLD_NOW);
		if (!libdl_handle) {
			LOGE ("%s", dlerror());
			return false;
		}
		_android_init_namespaces = (bool (*)(const char*, const char*)) 
									dlsym(libdl_handle, "android_init_namespaces");
		if ((error = dlerror()) != nullptr)  {
			LOGE ("%s", error);
			return false;
		}
	}
	return _android_init_namespaces(public_ns_sonames, anon_ns_library_path);
}

static struct android_namespace_t* (*_create_namespace)(const char* name,
                                              const char* ld_library_path,
                                              const char* default_library_path,
                                              uint64_t type,
                                              const char* permitted_when_isolated_path,
                                              struct android_namespace_t* parent_namespace) = nullptr;
static struct android_namespace_t* create_namespace(const char* name,
                                              const char* ld_library_path,
                                              const char* default_library_path,
                                              uint64_t type,
                                              const char* permitted_when_isolated_path,
                                              struct android_namespace_t* parent_namespace) {
	if (!_create_namespace) {
		void *libdl_handle;
		char *error;
		libdl_handle = dlopen ("libdl.so", RTLD_NOW);
		if (!libdl_handle) {
			LOGE ("error opening libdl.so: %s", dlerror());
			return nullptr;
		}
		_create_namespace = (struct android_namespace_t* (*)(const char*, const char*, const char*,
								uint64_t, const char*, struct android_namespace_t* )) 
									dlsym(libdl_handle, "android_create_namespace");
		if (_create_namespace == nullptr)  {
		    if ((error = dlerror()) != nullptr && strcmp(error, "undefined symbol") < 0)
                 LOGE("error opening android_create_namespace in libdl.so: %s\n",  error);
		    else LOGE("error opening android_create_namespace in libdl.so");
			return nullptr;
		}
	}
	LOGV("Creating namespace");
	return _create_namespace(name, ld_library_path, default_library_path, type, permitted_when_isolated_path, parent_namespace);
}

// static char *ld_library_path = (char*)"/system/lib:/vendor/lib:/system/vendor/lib/hw/:/vendor/lib/hw";
static struct android_namespace_t *ns = nullptr;
static void* (*_dlopen_ext)(const char* filename, int flags, const android_dlextinfo* extinfo) = nullptr;
void* dlopen_ext(const char* ld_library_path, const char* filename, int flags) {
	if (!_dlopen_ext) {
		void *libdl_handle;
		char *error;
		libdl_handle = dlopen ("libdl.so", RTLD_NOW);
		if (!libdl_handle) {
			LOGE ("Error dlopening libdl.so: %s", dlerror());
            LOGV("Dlopening using default dlopen");
            return dlopen (filename, flags);
		}
		_dlopen_ext = (void* (*)(const char*, int, const android_dlextinfo*)) dlsym(libdl_handle, "android_dlopen_ext");
		if (!_dlopen_ext)  {
		    error = dlerror();
		    LOGE ("Error opening dlopen_ext in libdl.so ( %s )", (error)?error:"");
            LOGV("Dlopening using default dlopen");
            return dlopen (filename, flags);
		}
	}

	if (ns == nullptr) {
		// Not needed in JNI
		// android_init_namespaces("", ld_library_path);
		ns = create_namespace("system-namespace",ld_library_path, ld_library_path,0,ld_library_path,
                              nullptr);
	}

	if (ns != nullptr && _dlopen_ext != nullptr) {
		android_dlextinfo ext = {0};
		ext.flags = ANDROID_DLEXT_USE_NAMESPACE;
		ext.library_namespace = ns;
        LOGV("Dlopening using default dlopen_ext");
		return _dlopen_ext (filename, flags, &ext);
	}

    LOGV("Dlopening using default dlopen");
	return dlopen (filename, flags);
}

