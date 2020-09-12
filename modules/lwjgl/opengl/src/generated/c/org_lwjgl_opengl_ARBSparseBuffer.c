#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSparseBuffer_glBufferPageCommitmentARB(JNIEnv *__env, jclass clazz, jint target, jlong offset, jlong size, jboolean commit) {
    UNUSED_PARAM(clazz)
    glBufferPageCommitmentARB(target, (intptr_t)offset, (intptr_t)size, commit);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSparseBuffer_glNamedBufferPageCommitmentEXT(JNIEnv *__env, jclass clazz, jint buffer, jlong offset, jlong size, jboolean commit) {
    UNUSED_PARAM(clazz)
    glNamedBufferPageCommitmentEXT(buffer, (intptr_t)offset, (intptr_t)size, commit);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSparseBuffer_glNamedBufferPageCommitmentARB(JNIEnv *__env, jclass clazz, jint buffer, jlong offset, jlong size, jboolean commit) {
    UNUSED_PARAM(clazz)
    glNamedBufferPageCommitmentARB(buffer, (intptr_t)offset, (intptr_t)size, commit);
}

EXTERN_C_EXIT
