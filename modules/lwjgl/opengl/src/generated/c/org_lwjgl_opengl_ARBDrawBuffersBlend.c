#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBDrawBuffersBlend_glBlendEquationiARB(JNIEnv *__env, jclass clazz, jint buf, jint mode) {
    UNUSED_PARAM(clazz)
    glBlendEquationiARB(buf, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBDrawBuffersBlend_glBlendEquationSeparateiARB(JNIEnv *__env, jclass clazz, jint buf, jint modeRGB, jint modeAlpha) {
    UNUSED_PARAM(clazz)
    glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBDrawBuffersBlend_glBlendFunciARB(JNIEnv *__env, jclass clazz, jint buf, jint src, jint dst) {
    UNUSED_PARAM(clazz)
    glBlendFunciARB(buf, src, dst);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBDrawBuffersBlend_glBlendFuncSeparateiARB(JNIEnv *__env, jclass clazz, jint buf, jint srcRGB, jint dstRGB, jint srcAlpha, jint dstAlpha) {
    UNUSED_PARAM(clazz)
    glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

EXTERN_C_EXIT
