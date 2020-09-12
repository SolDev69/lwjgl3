#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBClearBufferObject_nglClearNamedBufferDataEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint buffer, jint internalformat, jint format, jint type, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBClearBufferObject_nglClearNamedBufferSubDataEXT__IIJJIIJ(JNIEnv *__env, jclass clazz, jint buffer, jint internalformat, jlong offset, jlong size, jint format, jint type, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glClearNamedBufferSubDataEXT(buffer, internalformat, (intptr_t)offset, (intptr_t)size, format, type, data);
}

EXTERN_C_EXIT
