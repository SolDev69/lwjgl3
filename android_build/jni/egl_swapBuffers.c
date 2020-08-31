#include <jni.h>
#include <stdint.h>
#include <stdio.h>
#include <EGL/egl.h>

struct PotatoBridge {
	void* eglContext;
	void* eglDisplay;
	void* eglReadSurface;
	void* eglDrawSurface;
};
struct PotatoBridge potatoBridge;

JNIEXPORT void JNICALL Java_org_lwjgl_glfw_GLFW_setupEGL(JNIEnv* env, jclass clazz, jlong eglContext, jlong eglDisplay, jlong eglReadSurface, jlong eglDrawSurface) {
	potatoBridge.eglContext = (intptr_t) eglContext;
	potatoBridge.eglDisplay = (intptr_t) eglDisplay;
	potatoBridge.eglReadSurface = (intptr_t) eglReadSurface;
	potatoBridge.eglDrawSurface = (intptr_t) eglDrawSurface;
}

JNIEXPORT void JNICALL Java_net_kdt_pojavlaunch_BinaryExecutor_setupBridgeEGL(JNIEnv* env, jclass clazz) {
	potatoBridge.eglContext = eglGetCurrentContext();
	potatoBridge.eglDisplay = eglGetCurrentDisplay();
	potatoBridge.eglReadSurface = eglGetCurrentSurface(EGL_READ);
	potatoBridge.eglDrawSurface = eglGetCurrentSurface(EGL_DRAW);
}

// Called from JNI_OnLoad of liblwjgl_opengl32
void boardwalk2_openGLOnLoad() {
	printf("EGL making current\n");
	EGLBoolean success = eglMakeCurrent(potatoBridge.eglDisplay, potatoBridge.eglDrawSurface, potatoBridge.eglReadSurface, potatoBridge.eglContext);
	if (success == EGL_FALSE) printf("eglMakeCurrent() failed with error %p\n", eglGetError());
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_glfw_GLFW_nativeEglSwapBuffers(JNIEnv *env, jclass clazz) {
	  return eglSwapBuffers(potatoBridge.eglDisplay, potatoBridge.eglDrawSurface);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_glfw_GLFW_nativeEglSwapInterval(JNIEnv *env, jclass clazz, jint interval) {
	  return eglSwapInterval(potatoBridge.eglDisplay, interval);
}

