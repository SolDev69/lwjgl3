#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightfvARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightfvARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightbvARB(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightbvARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightubvARB(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightubvARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightsvARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightsvARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightusvARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightusvARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightivARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightivARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightuivARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightuivARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightdvARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong weightsAddress) {
    intptr_t weights = (intptr_t)weightsAddress;
    UNUSED_PARAM(clazz)
    glWeightdvARB(size, weights);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_nglWeightPointerARB__IIIJ(JNIEnv *__env, jclass clazz, jint size, jint type, jint stride, jlong pointerAddress) {
    intptr_t pointer = (intptr_t)pointerAddress;
    UNUSED_PARAM(clazz)
    glWeightPointerARB(size, type, stride, pointer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexBlend_glVertexBlendARB(JNIEnv *__env, jclass clazz, jint count) {
    UNUSED_PARAM(clazz)
    glVertexBlendARB(count);
}

EXTERN_C_EXIT
