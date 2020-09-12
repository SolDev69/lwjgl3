#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDrawBuffers2_glColorMaskIndexedEXT(JNIEnv *__env, jclass clazz, jint index, jboolean r, jboolean g, jboolean b, jboolean a) {
    UNUSED_PARAM(clazz)
    glColorMaskIndexedEXT(index, r, g, b, a);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDrawBuffers2_nglGetBooleanIndexedvEXT(JNIEnv *__env, jclass clazz, jint target, jint index, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glGetBooleanIndexedvEXT(target, index, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDrawBuffers2_nglGetIntegerIndexedvEXT__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glGetIntegerIndexedvEXT(target, index, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDrawBuffers2_glEnableIndexedEXT(JNIEnv *__env, jclass clazz, jint target, jint index) {
    UNUSED_PARAM(clazz)
    glEnableIndexedEXT(target, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDrawBuffers2_glDisableIndexedEXT(JNIEnv *__env, jclass clazz, jint target, jint index) {
    UNUSED_PARAM(clazz)
    glDisableIndexedEXT(target, index);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_EXTDrawBuffers2_glIsEnabledIndexedEXT(JNIEnv *__env, jclass clazz, jint target, jint index) {
    UNUSED_PARAM(clazz)
    return (jboolean)glIsEnabledIndexedEXT(target, index);
}

EXTERN_C_EXIT
