#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureStorage_glTextureStorage1DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint levels, jint internalformat, jint width) {
    UNUSED_PARAM(clazz)
    glTextureStorage1DEXT(texture, target, levels, internalformat, width);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureStorage_glTextureStorage2DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint levels, jint internalformat, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureStorage_glTextureStorage3DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint levels, jint internalformat, jint width, jint height, jint depth) {
    UNUSED_PARAM(clazz)
    glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

EXTERN_C_EXIT
