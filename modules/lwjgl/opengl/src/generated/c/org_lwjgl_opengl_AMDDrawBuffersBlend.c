#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDDrawBuffersBlend_glBlendFuncIndexedAMD(JNIEnv *__env, jclass clazz, jint buf, jint src, jint dst) {
    UNUSED_PARAM(clazz)
    glBlendFuncIndexedAMD(buf, src, dst);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDDrawBuffersBlend_glBlendFuncSeparateIndexedAMD(JNIEnv *__env, jclass clazz, jint buf, jint srcRGB, jint dstRGB, jint srcAlpha, jint dstAlpha) {
    UNUSED_PARAM(clazz)
    glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDDrawBuffersBlend_glBlendEquationIndexedAMD(JNIEnv *__env, jclass clazz, jint buf, jint mode) {
    UNUSED_PARAM(clazz)
    glBlendEquationIndexedAMD(buf, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDDrawBuffersBlend_glBlendEquationSeparateIndexedAMD(JNIEnv *__env, jclass clazz, jint buf, jint modeRGB, jint modeAlpha) {
    UNUSED_PARAM(clazz)
    glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

EXTERN_C_EXIT
