#include <jni.h>
#include <stdint.h>
#include <stdio.h>
#include <EGL/egl.h>

struct PotatoBridge {
	void* eglContext;
	void* eglDisplay;
	void* eglSurfaceRead;
	void* eglSurfaceDraw;
};
struct PotatoBridge potatoBridge;

JNIEXPORT void JNICALL Java_org_lwjgl_glfw_GLFW_setupEGL(JNIEnv* env, jclass clazz, jlong eglContext, jlong eglDisplay, jlong eglSurfaceRead, jlong eglSurfaceDraw) {
	potatoBridge.eglContext = (intptr_t) eglContext;
	potatoBridge.eglDisplay = (intptr_t) eglDisplay;
	potatoBridge.eglSurfaceRead = (intptr_t) eglSurfaceRead;
	potatoBridge.eglSurfaceDraw = (intptr_t) eglSurfaceDraw;
}

JNIEXPORT void JNICALL Java_net_kdt_pojavlaunch_BinaryExecutor_setupBridgeEGL(JNIEnv* env, jclass clazz) {
	potatoBridge.eglContext = eglGetCurrentContext();
	potatoBridge.eglDisplay = eglGetCurrentDisplay();
	potatoBridge.eglSurfaceRead = eglGetCurrentSurface(EGL_READ);
	potatoBridge.eglSurfaceDraw = eglGetCurrentSurface(EGL_DRAW);
}

// Called from JNI_OnLoad of liblwjgl_opengl32
void boardwalk2_openGLOnLoad() {
	printf("EGL making current\n");
	printf("EGLContext=%p, EGLDisplay=%p, EGLSurfaceRead=%p, EGLSurfaceDraw=%p\n",
		potatoBridge.eglContext,
		potatoBridge.eglDisplay,
		potatoBridge.eglSurfaceRead,
		potatoBridge.eglSurfaceDraw 
	);
	EGLBoolean success = eglMakeCurrent(potatoBridge.eglDisplay, potatoBridge.eglSurfaceDraw, potatoBridge.eglSurfaceRead, potatoBridge.eglContext);
	if (success == EGL_FALSE) printf("eglMakeCurrent() failed with error %p\n", eglGetError());
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_glfw_GLFW_nativeEglSwapBuffers(JNIEnv *env, jclass clazz) {
	  return eglSwapBuffers(potatoBridge.eglDisplay, potatoBridge.eglSurfaceDraw);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_glfw_GLFW_nativeEglSwapInterval(JNIEnv *env, jclass clazz, jint interval) {
	  return eglSwapInterval(potatoBridge.eglDisplay, interval);
}

