#include <jni.h>
#include <EGL/egl.h>

JNIEXPORT jboolean JNICALL Java_org_lwjgl_glfw_GLFW_boardwalkNativeSwapBuffers
  (JNIEnv *env, jclass clazz) {
	  return eglSwapBuffers(eglGetCurrentDisplay(), eglGetCurrentSurface(EGL_DRAW));
}
