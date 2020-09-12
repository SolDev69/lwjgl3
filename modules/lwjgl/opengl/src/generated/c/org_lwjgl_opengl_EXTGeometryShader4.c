#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTGeometryShader4_glProgramParameteriEXT(JNIEnv *__env, jclass clazz, jint program, jint pname, jint value) {
    UNUSED_PARAM(clazz)
    glProgramParameteriEXT(program, pname, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTGeometryShader4_glFramebufferTextureEXT(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint texture, jint level) {
    UNUSED_PARAM(clazz)
    glFramebufferTextureEXT(target, attachment, texture, level);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTGeometryShader4_glFramebufferTextureFaceEXT(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint texture, jint level, jint face) {
    UNUSED_PARAM(clazz)
    glFramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

EXTERN_C_EXIT
