#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_glProgramUniform1dEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jdouble x) {
    UNUSED_PARAM(clazz)
    glProgramUniform1dEXT(program, location, x);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_glProgramUniform2dEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jdouble x, jdouble y) {
    UNUSED_PARAM(clazz)
    glProgramUniform2dEXT(program, location, x, y);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_glProgramUniform3dEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jdouble x, jdouble y, jdouble z) {
    UNUSED_PARAM(clazz)
    glProgramUniform3dEXT(program, location, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_glProgramUniform4dEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jdouble x, jdouble y, jdouble z, jdouble w) {
    UNUSED_PARAM(clazz)
    glProgramUniform4dEXT(program, location, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniform1dvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform1dvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniform2dvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform2dvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniform3dvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform3dvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniform4dvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform4dvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix2dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix3dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix4dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix2x3dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix2x4dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix3x2dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix3x4dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix4x2dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBGPUShaderFP64_nglProgramUniformMatrix4x3dvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

EXTERN_C_EXIT
