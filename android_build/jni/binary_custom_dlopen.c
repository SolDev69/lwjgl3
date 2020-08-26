
#include <dlfcn.h>
// #include <cstring>
#include <android/dlext.h>

#include "binary_custom_dlopen.h"
#include "log.h" // LOGE, LOGW, etc...

static struct android_namespace_t *ns = NULL;
void* dlopen_ext(const char* ld_library_path, const char* filename, int flags) {
	if (ns == NULL) {
		ns = android_create_namespace("openjdk-namespace", ld_library_path, ld_library_path, 0, ld_library_path, 0);
	}

	if (ns != NULL) {
		android_dlextinfo ext = {0};
		ext.flags = ANDROID_DLEXT_USE_NAMESPACE;
		ext.library_namespace = ns;
        LOGD("dlopening using android_dlopen_ext");
		return android_dlopen_ext(filename, flags, &ext);
	}

    LOGD("dlopening using default dlopen");
	return dlopen(filename, flags);
}

