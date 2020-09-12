#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTextureArray_glFramebufferTextureLayerEXT(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint texture, jint level, jint layer) {
    UNUSED_PARAM(clazz)
    glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

EXTERN_C_EXIT
