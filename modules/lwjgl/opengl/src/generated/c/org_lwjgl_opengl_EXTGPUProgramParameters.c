#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTGPUProgramParameters_nglProgramEnvParameters4fvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jint count, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glProgramEnvParameters4fvEXT(target, index, count, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTGPUProgramParameters_nglProgramLocalParameters4fvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jint count, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glProgramLocalParameters4fvEXT(target, index, count, params);
}

EXTERN_C_EXIT
