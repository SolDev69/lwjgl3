#include <jni.h>
#include <stdint.h>
#include <EGL/egl.h>

struct PotatoBridge {
	void* eglContext;
	void* eglDisplay;
	void* eglReadSurface;
	void* eglDrawSurface;
};
struct PotatoBridge potatoBridge;

JNIEXPORT void JNICALL Java_org_lwjgl_glfw_GLFW_setupEGL
  (JNIEnv* env, jclass clazz, jlong eglContext, jlong eglDisplay, jlong eglReadSurface, jlong eglDrawSurface) {
	potatoBridge.eglContext = (intptr_t) eglContext;
	potatoBridge.eglDisplay = (intptr_t) eglDisplay;
	potatoBridge.eglReadSurface = (intptr_t) eglReadSurface;
	potatoBridge.eglDrawSurface = (intptr_t) eglDrawSurface;
}

// Called from JNI_OnLoad of liblwjgl_opengl32
void boardwalk2_openGLOnLoad() {
	eglMakeCurrent(potatoBridge.eglDisplay, potatoBridge.eglDrawSurface, potatoBridge.eglReadSurface, potatoBridge.eglContext);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_glfw_GLFW_nativeEglSwapBuffers(JNIEnv *env, jclass clazz) {
	  return eglSwapBuffers(potatoBridge.eglDisplay, potatoBridge.eglDrawSurface);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_glfw_GLFW_nativeEglSwapInterval(JNIEnv *env, jclass clazz, jint interval) {
	  return eglSwapInterval(potatoBridge.eglDisplay, interval);
}

