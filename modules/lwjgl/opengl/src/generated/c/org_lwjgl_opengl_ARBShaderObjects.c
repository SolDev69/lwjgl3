#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glDeleteObjectARB(JNIEnv *__env, jclass clazz, jint obj) {
    UNUSED_PARAM(clazz)
    glDeleteObjectARB(obj);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glGetHandleARB(JNIEnv *__env, jclass clazz, jint pname) {
    UNUSED_PARAM(clazz)
    return (jint)glGetHandleARB(pname);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glDetachObjectARB(JNIEnv *__env, jclass clazz, jint containerObj, jint attachedObj) {
    UNUSED_PARAM(clazz)
    glDetachObjectARB(containerObj, attachedObj);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glCreateShaderObjectARB(JNIEnv *__env, jclass clazz, jint shaderType) {
    UNUSED_PARAM(clazz)
    return (jint)glCreateShaderObjectARB(shaderType);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglShaderSourceARB__IIJJ(JNIEnv *__env, jclass clazz, jint shaderObj, jint count, jlong stringAddress, jlong lengthAddress) {
    intptr_t string = (intptr_t)stringAddress;
    intptr_t length = (intptr_t)lengthAddress;
    UNUSED_PARAM(clazz)
    glShaderSourceARB(shaderObj, count, string, length);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glCompileShaderARB(JNIEnv *__env, jclass clazz, jint shaderObj) {
    UNUSED_PARAM(clazz)
    glCompileShaderARB(shaderObj);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glCreateProgramObjectARB(JNIEnv *__env, jclass clazz) {
    UNUSED_PARAM(clazz)
    return (jint)glCreateProgramObjectARB();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glAttachObjectARB(JNIEnv *__env, jclass clazz, jint containerObj, jint obj) {
    UNUSED_PARAM(clazz)
    glAttachObjectARB(containerObj, obj);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glLinkProgramARB(JNIEnv *__env, jclass clazz, jint programObj) {
    UNUSED_PARAM(clazz)
    glLinkProgramARB(programObj);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUseProgramObjectARB(JNIEnv *__env, jclass clazz, jint programObj) {
    UNUSED_PARAM(clazz)
    glUseProgramObjectARB(programObj);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glValidateProgramARB(JNIEnv *__env, jclass clazz, jint programObj) {
    UNUSED_PARAM(clazz)
    glValidateProgramARB(programObj);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform1fARB(JNIEnv *__env, jclass clazz, jint location, jfloat v0) {
    UNUSED_PARAM(clazz)
    glUniform1fARB(location, v0);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform2fARB(JNIEnv *__env, jclass clazz, jint location, jfloat v0, jfloat v1) {
    UNUSED_PARAM(clazz)
    glUniform2fARB(location, v0, v1);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform3fARB(JNIEnv *__env, jclass clazz, jint location, jfloat v0, jfloat v1, jfloat v2) {
    UNUSED_PARAM(clazz)
    glUniform3fARB(location, v0, v1, v2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform4fARB(JNIEnv *__env, jclass clazz, jint location, jfloat v0, jfloat v1, jfloat v2, jfloat v3) {
    UNUSED_PARAM(clazz)
    glUniform4fARB(location, v0, v1, v2, v3);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform1iARB(JNIEnv *__env, jclass clazz, jint location, jint v0) {
    UNUSED_PARAM(clazz)
    glUniform1iARB(location, v0);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform2iARB(JNIEnv *__env, jclass clazz, jint location, jint v0, jint v1) {
    UNUSED_PARAM(clazz)
    glUniform2iARB(location, v0, v1);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform3iARB(JNIEnv *__env, jclass clazz, jint location, jint v0, jint v1, jint v2) {
    UNUSED_PARAM(clazz)
    glUniform3iARB(location, v0, v1, v2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_glUniform4iARB(JNIEnv *__env, jclass clazz, jint location, jint v0, jint v1, jint v2, jint v3) {
    UNUSED_PARAM(clazz)
    glUniform4iARB(location, v0, v1, v2, v3);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform1fvARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform1fvARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform2fvARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform2fvARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform3fvARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform3fvARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform4fvARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform4fvARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform1ivARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform1ivARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform2ivARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform2ivARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform3ivARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform3ivARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniform4ivARB__IIJ(JNIEnv *__env, jclass clazz, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniform4ivARB(location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniformMatrix2fvARB__IIZJ(JNIEnv *__env, jclass clazz, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniformMatrix2fvARB(location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniformMatrix3fvARB__IIZJ(JNIEnv *__env, jclass clazz, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniformMatrix3fvARB(location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglUniformMatrix4fvARB__IIZJ(JNIEnv *__env, jclass clazz, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glUniformMatrix4fvARB(location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetObjectParameterfvARB__IIJ(JNIEnv *__env, jclass clazz, jint obj, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetObjectParameterfvARB(obj, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetObjectParameterivARB__IIJ(JNIEnv *__env, jclass clazz, jint obj, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetObjectParameterivARB(obj, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetInfoLogARB__IIJJ(JNIEnv *__env, jclass clazz, jint obj, jint maxLength, jlong lengthAddress, jlong infoLogAddress) {
    intptr_t length = (intptr_t)lengthAddress;
    intptr_t infoLog = (intptr_t)infoLogAddress;
    UNUSED_PARAM(clazz)
    glGetInfoLogARB(obj, maxLength, length, infoLog);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetAttachedObjectsARB__IIJJ(JNIEnv *__env, jclass clazz, jint containerObj, jint maxCount, jlong countAddress, jlong objAddress) {
    intptr_t count = (intptr_t)countAddress;
    intptr_t obj = (intptr_t)objAddress;
    UNUSED_PARAM(clazz)
    glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetUniformLocationARB(JNIEnv *__env, jclass clazz, jint programObj, jlong nameAddress) {
    intptr_t name = (intptr_t)nameAddress;
    UNUSED_PARAM(clazz)
    return (jint)glGetUniformLocationARB(programObj, name);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetActiveUniformARB__IIIJJJJ(JNIEnv *__env, jclass clazz, jint programObj, jint index, jint maxLength, jlong lengthAddress, jlong sizeAddress, jlong typeAddress, jlong nameAddress) {
    intptr_t length = (intptr_t)lengthAddress;
    intptr_t size = (intptr_t)sizeAddress;
    intptr_t type = (intptr_t)typeAddress;
    intptr_t name = (intptr_t)nameAddress;
    UNUSED_PARAM(clazz)
    glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetUniformfvARB__IIJ(JNIEnv *__env, jclass clazz, jint programObj, jint location, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetUniformfvARB(programObj, location, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetUniformivARB__IIJ(JNIEnv *__env, jclass clazz, jint programObj, jint location, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetUniformivARB(programObj, location, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBShaderObjects_nglGetShaderSourceARB__IIJJ(JNIEnv *__env, jclass clazz, jint obj, jint maxLength, jlong lengthAddress, jlong sourceAddress) {
    intptr_t length = (intptr_t)lengthAddress;
    intptr_t source = (intptr_t)sourceAddress;
    UNUSED_PARAM(clazz)
    glGetShaderSourceARB(obj, maxLength, length, source);
}

EXTERN_C_EXIT
