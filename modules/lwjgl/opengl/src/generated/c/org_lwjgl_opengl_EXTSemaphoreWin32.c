#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphoreWin32_nglImportSemaphoreWin32HandleEXT(JNIEnv *__env, jclass clazz, jint semaphore, jint handleType, jlong handleAddress) {
    intptr_t handle = (intptr_t)handleAddress;
    UNUSED_PARAM(clazz)
    glImportSemaphoreWin32HandleEXT(semaphore, handleType, handle);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphoreWin32_nglImportSemaphoreWin32NameEXT(JNIEnv *__env, jclass clazz, jint semaphore, jint handleType, jlong nameAddress) {
    intptr_t name = (intptr_t)nameAddress;
    UNUSED_PARAM(clazz)
    glImportSemaphoreWin32NameEXT(semaphore, handleType, name);
}

EXTERN_C_EXIT
