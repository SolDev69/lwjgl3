#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glGetTextureHandleARB(JNIEnv *__env, jclass clazz, jint texture) {
    UNUSED_PARAM(clazz)
    return (jlong)glGetTextureHandleARB(texture);
}

JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glGetTextureSamplerHandleARB(JNIEnv *__env, jclass clazz, jint texture, jint sampler) {
    UNUSED_PARAM(clazz)
    return (jlong)glGetTextureSamplerHandleARB(texture, sampler);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glMakeTextureHandleResidentARB(JNIEnv *__env, jclass clazz, jlong handle) {
    UNUSED_PARAM(clazz)
    glMakeTextureHandleResidentARB(handle);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glMakeTextureHandleNonResidentARB(JNIEnv *__env, jclass clazz, jlong handle) {
    UNUSED_PARAM(clazz)
    glMakeTextureHandleNonResidentARB(handle);
}

JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glGetImageHandleARB(JNIEnv *__env, jclass clazz, jint texture, jint level, jboolean layered, jint layer, jint format) {
    UNUSED_PARAM(clazz)
    return (jlong)glGetImageHandleARB(texture, level, layered, layer, format);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glMakeImageHandleResidentARB(JNIEnv *__env, jclass clazz, jlong handle, jint access) {
    UNUSED_PARAM(clazz)
    glMakeImageHandleResidentARB(handle, access);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glMakeImageHandleNonResidentARB(JNIEnv *__env, jclass clazz, jlong handle) {
    UNUSED_PARAM(clazz)
    glMakeImageHandleNonResidentARB(handle);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glUniformHandleui64ARB(JNIEnv *__env, jclass clazz, jint location, jlong value) {
    UNUSED_PARAM(clazz)
    glUniformHandleui64ARB(location, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_nglUniformHandleui64vARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valuesAddress) {
    intptr_t values = (intptr_t)valuesAddress;
    UNUSED_PARAM(clazz)
    glUniformHandleui64vARB(location, count, values);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glProgramUniformHandleui64ARB(JNIEnv *__env, jclass clazz, jint program, jint location, jlong value) {
    UNUSED_PARAM(clazz)
    glProgramUniformHandleui64ARB(program, location, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_nglProgramUniformHandleui64vARB__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valuesAddress) {
    intptr_t values = (intptr_t)valuesAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformHandleui64vARB(program, location, count, values);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glIsTextureHandleResidentARB(JNIEnv *__env, jclass clazz, jlong handle) {
    UNUSED_PARAM(clazz)
    return (jboolean)glIsTextureHandleResidentARB(handle);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glIsImageHandleResidentARB(JNIEnv *__env, jclass clazz, jlong handle) {
    UNUSED_PARAM(clazz)
    return (jboolean)glIsImageHandleResidentARB(handle);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_glVertexAttribL1ui64ARB(JNIEnv *__env, jclass clazz, jint index, jlong x) {
    UNUSED_PARAM(clazz)
    glVertexAttribL1ui64ARB(index, x);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_nglVertexAttribL1ui64vARB__IJ(JNIEnv *__env, jclass clazz, jint index, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glVertexAttribL1ui64vARB(index, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBBindlessTexture_nglGetVertexAttribLui64vARB__IIJ(JNIEnv *__env, jclass clazz, jint index, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetVertexAttribLui64vARB(index, pname, params);
}

EXTERN_C_EXIT
