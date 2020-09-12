#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTBindableUniform_glUniformBufferEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint buffer) {
    UNUSED_PARAM(clazz)
    glUniformBufferEXT(program, location, buffer);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_EXTBindableUniform_glGetUniformBufferSizeEXT(JNIEnv *__env, jclass clazz, jint program, jint location) {
    UNUSED_PARAM(clazz)
    return (jint)glGetUniformBufferSizeEXT(program, location);
}

JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_EXTBindableUniform_glGetUniformOffsetEXT(JNIEnv *__env, jclass clazz, jint program, jint location) {
    UNUSED_PARAM(clazz)
    return (jlong)glGetUniformOffsetEXT(program, location);
}

EXTERN_C_EXIT
