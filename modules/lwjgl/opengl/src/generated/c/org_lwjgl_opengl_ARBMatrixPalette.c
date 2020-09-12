#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMatrixPalette_glCurrentPaletteMatrixARB(JNIEnv *__env, jclass clazz, jint index) {
    UNUSED_PARAM(clazz)
    glCurrentPaletteMatrixARB(index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMatrixPalette_nglMatrixIndexuivARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong indicesAddress) {
    intptr_t indices = (intptr_t)indicesAddress;
    UNUSED_PARAM(clazz)
    glMatrixIndexuivARB(size, indices);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMatrixPalette_nglMatrixIndexubvARB(JNIEnv *__env, jclass clazz, jint size, jlong indicesAddress) {
    intptr_t indices = (intptr_t)indicesAddress;
    UNUSED_PARAM(clazz)
    glMatrixIndexubvARB(size, indices);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMatrixPalette_nglMatrixIndexusvARB__IJ(JNIEnv *__env, jclass clazz, jint size, jlong indicesAddress) {
    intptr_t indices = (intptr_t)indicesAddress;
    UNUSED_PARAM(clazz)
    glMatrixIndexusvARB(size, indices);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMatrixPalette_nglMatrixIndexPointerARB(JNIEnv *__env, jclass clazz, jint size, jint type, jint stride, jlong pointerAddress) {
    intptr_t pointer = (intptr_t)pointerAddress;
    UNUSED_PARAM(clazz)
    glMatrixIndexPointerARB(size, type, stride, pointer);
}

EXTERN_C_EXIT
