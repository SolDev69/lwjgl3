#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDrawInstanced_glDrawArraysInstancedEXT(JNIEnv *__env, jclass clazz, jint mode, jint start, jint count, jint primcount) {
    UNUSED_PARAM(clazz)
    glDrawArraysInstancedEXT(mode, start, count, primcount);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDrawInstanced_nglDrawElementsInstancedEXT(JNIEnv *__env, jclass clazz, jint mode, jint count, jint type, jlong indicesAddress, jint primcount) {
    intptr_t indices = (intptr_t)indicesAddress;
    UNUSED_PARAM(clazz)
    glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

EXTERN_C_EXIT
