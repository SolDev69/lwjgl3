#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSparseTexture_glTexPageCommitmentARB(JNIEnv *__env, jclass clazz, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint width, jint height, jint depth, jboolean commit) {
    UNUSED_PARAM(clazz)
    glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSparseTexture_glTexturePageCommitmentEXT(JNIEnv *__env, jclass clazz, jint texture, jint level, jint xoffset, jint yoffset, jint zoffset, jint width, jint height, jint depth, jboolean commit) {
    UNUSED_PARAM(clazz)
    glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

EXTERN_C_EXIT
