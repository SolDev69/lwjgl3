#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTransformFeedback_glBindBufferRangeEXT(JNIEnv *__env, jclass clazz, jint target, jint index, jint buffer, jlong offset, jlong size) {
    UNUSED_PARAM(clazz)
    glBindBufferRangeEXT(target, index, buffer, (intptr_t)offset, (intptr_t)size);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTransformFeedback_glBindBufferOffsetEXT(JNIEnv *__env, jclass clazz, jint target, jint index, jint buffer, jlong offset) {
    UNUSED_PARAM(clazz)
    glBindBufferOffsetEXT(target, index, buffer, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTransformFeedback_glBindBufferBaseEXT(JNIEnv *__env, jclass clazz, jint target, jint index, jint buffer) {
    UNUSED_PARAM(clazz)
    glBindBufferBaseEXT(target, index, buffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTransformFeedback_glBeginTransformFeedbackEXT(JNIEnv *__env, jclass clazz, jint primitiveMode) {
    UNUSED_PARAM(clazz)
    glBeginTransformFeedbackEXT(primitiveMode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTransformFeedback_glEndTransformFeedbackEXT(JNIEnv *__env, jclass clazz) {
    UNUSED_PARAM(clazz)
    glEndTransformFeedbackEXT();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTransformFeedback_nglTransformFeedbackVaryingsEXT(JNIEnv *__env, jclass clazz, jint program, jint count, jlong varyingsAddress, jint bufferMode) {
    intptr_t varyings = (intptr_t)varyingsAddress;
    UNUSED_PARAM(clazz)
    glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTTransformFeedback_nglGetTransformFeedbackVaryingEXT__IIIJJJJ(JNIEnv *__env, jclass clazz, jint program, jint index, jint bufSize, jlong lengthAddress, jlong sizeAddress, jlong typeAddress, jlong nameAddress) {
    intptr_t length = (intptr_t)lengthAddress;
    intptr_t size = (intptr_t)sizeAddress;
    intptr_t type = (intptr_t)typeAddress;
    intptr_t name = (intptr_t)nameAddress;
    UNUSED_PARAM(clazz)
    glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

EXTERN_C_EXIT
