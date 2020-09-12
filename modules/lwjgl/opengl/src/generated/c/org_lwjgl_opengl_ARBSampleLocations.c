#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSampleLocations_nglFramebufferSampleLocationsfvARB__IIIJ(JNIEnv *__env, jclass clazz, jint target, jint start, jint count, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glFramebufferSampleLocationsfvARB(target, start, count, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSampleLocations_nglNamedFramebufferSampleLocationsfvARB__IIIJ(JNIEnv *__env, jclass clazz, jint framebuffer, jint start, jint count, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glNamedFramebufferSampleLocationsfvARB(framebuffer, start, count, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBSampleLocations_glEvaluateDepthValuesARB(JNIEnv *__env, jclass clazz) {
    UNUSED_PARAM(clazz)
    glEvaluateDepthValuesARB();
}

EXTERN_C_EXIT
