#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBInstancedArrays_glVertexAttribDivisorARB(JNIEnv *__env, jclass clazz, jint index, jint divisor) {
    UNUSED_PARAM(clazz)
    glVertexAttribDivisorARB(index, divisor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBInstancedArrays_glVertexArrayVertexAttribDivisorEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint index, jint divisor) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

EXTERN_C_EXIT
