#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTransposeMatrix_nglLoadTransposeMatrixfARB__J(JNIEnv *__env, jclass clazz, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glLoadTransposeMatrixfARB(m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTransposeMatrix_nglLoadTransposeMatrixdARB__J(JNIEnv *__env, jclass clazz, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glLoadTransposeMatrixdARB(m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTransposeMatrix_nglMultTransposeMatrixfARB__J(JNIEnv *__env, jclass clazz, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMultTransposeMatrixfARB(m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTransposeMatrix_nglMultTransposeMatrixdARB__J(JNIEnv *__env, jclass clazz, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMultTransposeMatrixdARB(m);
}

EXTERN_C_EXIT
