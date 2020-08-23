/* Shim for Boardwalk OpenGL initialization. */

#include <jni.h>
#include <dlfcn.h>
#include <EGL/egl.h>

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
	// TODO change to orig code???
	eglMakeCurrent(eglGetCurrentDisplay(), eglGetCurrentSurface(EGL_DRAW), eglGetCurrentSurface(EGL_READ), eglGetCurrentContext());
	return JNI_VERSION_1_2;
}
