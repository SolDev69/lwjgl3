#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTMemoryObjectFD_glImportMemoryFdEXT(JNIEnv *__env, jclass clazz, jint memory, jlong size, jint handleType, jint fd) {
    UNUSED_PARAM(clazz)
    glImportMemoryFdEXT(memory, size, handleType, fd);
}

EXTERN_C_EXIT
