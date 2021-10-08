/* Shim for Boardwalk OpenGL initialization. */

#include <jni.h>
#include <dlfcn.h>

void* pojavJni;

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
	pojavJni = dlopen( /* "libboardwalk2_jni.so" */ "libpojavexec.so", RTLD_GLOBAL | RTLD_LAZY);
	if (!pojavJni) return JNI_VERSION_1_2;
	void (*pojav_openGLOnLoad)() = dlsym(pojavJni, "pojav_openGLOnLoad");
	pojav_openGLOnLoad();
	return JNI_VERSION_1_2;
}

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved) {
	if (!pojavJni) return;
	void (*pojav_openGLOnUnload)() = dlsym(pojavJni, "pojav_openGLOnUnload");
	pojav_openGLOnUnload();
	dlclose(pojavJni);
}

