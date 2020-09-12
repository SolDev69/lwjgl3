#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexAttrib64Bit_glVertexArrayVertexAttribLOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint index, jint size, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, (intptr_t)offset);
}

EXTERN_C_EXIT
