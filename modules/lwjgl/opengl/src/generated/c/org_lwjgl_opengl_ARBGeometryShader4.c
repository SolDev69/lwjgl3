#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGeometryShader4_glProgramParameteriARB(JNIEnv *__env, jclass clazz, jint program, jint pname, jint value) {
    UNUSED_PARAM(clazz)
    glProgramParameteriARB(program, pname, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGeometryShader4_glFramebufferTextureARB(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint texture, jint level) {
    UNUSED_PARAM(clazz)
    glFramebufferTextureARB(target, attachment, texture, level);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGeometryShader4_glFramebufferTextureLayerARB(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint texture, jint level, jint layer) {
    UNUSED_PARAM(clazz)
    glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGeometryShader4_glFramebufferTextureFaceARB(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint texture, jint level, jint face) {
    UNUSED_PARAM(clazz)
    glFramebufferTextureFaceARB(target, attachment, texture, level, face);
}

EXTERN_C_EXIT
