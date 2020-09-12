#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureBufferRange_glTextureBufferRangeEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint internalformat, jint buffer, jlong offset, jlong size) {
    UNUSED_PARAM(clazz)
    glTextureBufferRangeEXT(texture, target, internalformat, buffer, (intptr_t)offset, (intptr_t)size);
}

EXTERN_C_EXIT
