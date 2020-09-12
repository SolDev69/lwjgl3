#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBIndirectParameters_nglMultiDrawArraysIndirectCountARB__IJJII(JNIEnv *__env, jclass clazz, jint mode, jlong indirectAddress, jlong drawcount, jint maxdrawcount, jint stride) {
    intptr_t indirect = (intptr_t)indirectAddress;
    UNUSED_PARAM(clazz)
    glMultiDrawArraysIndirectCountARB(mode, indirect, (intptr_t)drawcount, maxdrawcount, stride);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBIndirectParameters_nglMultiDrawElementsIndirectCountARB__IIJJII(JNIEnv *__env, jclass clazz, jint mode, jint type, jlong indirectAddress, jlong drawcount, jint maxdrawcount, jint stride) {
    intptr_t indirect = (intptr_t)indirectAddress;
    UNUSED_PARAM(clazz)
    glMultiDrawElementsIndirectCountARB(mode, type, indirect, (intptr_t)drawcount, maxdrawcount, stride);
}

EXTERN_C_EXIT
