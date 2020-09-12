#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTextureBufferObject_glTexBufferEXT(JNIEnv *__env, jclass clazz, jint target, jint internalformat, jint buffer) {
    UNUSED_PARAM(clazz)
    glTexBufferEXT(target, internalformat, buffer);
}

EXTERN_C_EXIT
