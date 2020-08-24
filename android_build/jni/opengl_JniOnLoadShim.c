/* Shim for Boardwalk OpenGL initialization. */

#include <jni.h>
#include <dlfcn.h>

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
	void* boardwalkJni = dlopen(NULL /* "libboardwalk2_jni.so" */ "binexecutor", RTLD_GLOBAL | RTLD_LAZY);
	void (*boardwalk2_openGLOnLoad)() = dlsym(boardwalkJni, "boardwalk2_openGLOnLoad");
	boardwalk2_openGLOnLoad();
	return JNI_VERSION_1_2;
}
