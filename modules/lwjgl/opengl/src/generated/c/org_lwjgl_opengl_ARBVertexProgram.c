#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglProgramStringARB(JNIEnv *__env, jclass clazz, jint target, jint format, jint len, jlong stringAddress) {
    intptr_t string = (intptr_t)stringAddress;
    UNUSED_PARAM(clazz)
    glProgramStringARB(target, format, len, string);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_glBindProgramARB(JNIEnv *__env, jclass clazz, jint target, jint program) {
    UNUSED_PARAM(clazz)
    glBindProgramARB(target, program);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglDeleteProgramsARB__IJ(JNIEnv *__env, jclass clazz, jint n, jlong programsAddress) {
    intptr_t programs = (intptr_t)programsAddress;
    UNUSED_PARAM(clazz)
    glDeleteProgramsARB(n, programs);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglGenProgramsARB__IJ(JNIEnv *__env, jclass clazz, jint n, jlong programsAddress) {
    intptr_t programs = (intptr_t)programsAddress;
    UNUSED_PARAM(clazz)
    glGenProgramsARB(n, programs);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_glProgramEnvParameter4dARB(JNIEnv *__env, jclass clazz, jint target, jint index, jdouble x, jdouble y, jdouble z, jdouble w) {
    UNUSED_PARAM(clazz)
    glProgramEnvParameter4dARB(target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglProgramEnvParameter4dvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glProgramEnvParameter4dvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_glProgramEnvParameter4fARB(JNIEnv *__env, jclass clazz, jint target, jint index, jfloat x, jfloat y, jfloat z, jfloat w) {
    UNUSED_PARAM(clazz)
    glProgramEnvParameter4fARB(target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglProgramEnvParameter4fvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glProgramEnvParameter4fvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_glProgramLocalParameter4dARB(JNIEnv *__env, jclass clazz, jint target, jint index, jdouble x, jdouble y, jdouble z, jdouble w) {
    UNUSED_PARAM(clazz)
    glProgramLocalParameter4dARB(target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglProgramLocalParameter4dvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glProgramLocalParameter4dvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_glProgramLocalParameter4fARB(JNIEnv *__env, jclass clazz, jint target, jint index, jfloat x, jfloat y, jfloat z, jfloat w) {
    UNUSED_PARAM(clazz)
    glProgramLocalParameter4fARB(target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglProgramLocalParameter4fvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glProgramLocalParameter4fvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglGetProgramEnvParameterfvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetProgramEnvParameterfvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglGetProgramEnvParameterdvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetProgramEnvParameterdvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglGetProgramLocalParameterfvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetProgramLocalParameterfvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglGetProgramLocalParameterdvARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetProgramLocalParameterdvARB(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglGetProgramivARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetProgramivARB(target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_nglGetProgramStringARB(JNIEnv *__env, jclass clazz, jint target, jint pname, jlong stringAddress) {
    intptr_t string = (intptr_t)stringAddress;
    UNUSED_PARAM(clazz)
    glGetProgramStringARB(target, pname, string);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_ARBVertexProgram_glIsProgramARB(JNIEnv *__env, jclass clazz, jint program) {
    UNUSED_PARAM(clazz)
    return (jboolean)glIsProgramARB(program);
}

EXTERN_C_EXIT
