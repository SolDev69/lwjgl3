#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDVertexShaderTessellator_glTessellationFactorAMD(JNIEnv *__env, jclass clazz, jfloat factor) {
    UNUSED_PARAM(clazz)
    glTessellationFactorAMD(factor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDVertexShaderTessellator_glTessellationModeAMD(JNIEnv *__env, jclass clazz, jint mode) {
    UNUSED_PARAM(clazz)
    glTessellationModeAMD(mode);
}

EXTERN_C_EXIT
