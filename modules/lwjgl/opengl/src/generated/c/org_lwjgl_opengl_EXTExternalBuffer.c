#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTExternalBuffer_nglBufferStorageExternalEXT(JNIEnv *__env, jclass clazz, jint target, jlong offset, jlong size, jlong clientBufferAddress, jint flags) {
    intptr_t clientBuffer = (intptr_t)clientBufferAddress;
    UNUSED_PARAM(clazz)
    glBufferStorageExternalEXT(target, (intptr_t)offset, (intptr_t)size, clientBuffer, flags);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTExternalBuffer_nglNamedBufferStorageExternalEXT(JNIEnv *__env, jclass clazz, jint buffer, jlong offset, jlong size, jlong clientBufferAddress, jint flags) {
    intptr_t clientBuffer = (intptr_t)clientBufferAddress;
    UNUSED_PARAM(clazz)
    glNamedBufferStorageExternalEXT(buffer, (intptr_t)offset, (intptr_t)size, clientBuffer, flags);
}

EXTERN_C_EXIT
