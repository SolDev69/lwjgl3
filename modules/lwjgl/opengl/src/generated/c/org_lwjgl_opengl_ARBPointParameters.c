#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBPointParameters_glPointParameterfARB(JNIEnv *__env, jclass clazz, jint pname, jfloat param) {
    UNUSED_PARAM(clazz)
    glPointParameterfARB(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBPointParameters_nglPointParameterfvARB__IJ(JNIEnv *__env, jclass clazz, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glPointParameterfvARB(pname, params);
}

EXTERN_C_EXIT
