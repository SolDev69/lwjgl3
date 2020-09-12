#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_glVertexAttribL1dEXT(JNIEnv *__env, jclass clazz, jint index, jdouble x) {
    UNUSED_PARAM(clazz)
    glVertexAttribL1dEXT(index, x);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_glVertexAttribL2dEXT(JNIEnv *__env, jclass clazz, jint index, jdouble x, jdouble y) {
    UNUSED_PARAM(clazz)
    glVertexAttribL2dEXT(index, x, y);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_glVertexAttribL3dEXT(JNIEnv *__env, jclass clazz, jint index, jdouble x, jdouble y, jdouble z) {
    UNUSED_PARAM(clazz)
    glVertexAttribL3dEXT(index, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_glVertexAttribL4dEXT(JNIEnv *__env, jclass clazz, jint index, jdouble x, jdouble y, jdouble z, jdouble w) {
    UNUSED_PARAM(clazz)
    glVertexAttribL4dEXT(index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_nglVertexAttribL1dvEXT__IJ(JNIEnv *__env, jclass clazz, jint index, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glVertexAttribL1dvEXT(index, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_nglVertexAttribL2dvEXT__IJ(JNIEnv *__env, jclass clazz, jint index, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glVertexAttribL2dvEXT(index, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_nglVertexAttribL3dvEXT__IJ(JNIEnv *__env, jclass clazz, jint index, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glVertexAttribL3dvEXT(index, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_nglVertexAttribL4dvEXT__IJ(JNIEnv *__env, jclass clazz, jint index, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glVertexAttribL4dvEXT(index, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_nglVertexAttribLPointerEXT(JNIEnv *__env, jclass clazz, jint index, jint size, jint type, jint stride, jlong pointerAddress) {
    intptr_t pointer = (intptr_t)pointerAddress;
    UNUSED_PARAM(clazz)
    glVertexAttribLPointerEXT(index, size, type, stride, pointer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTVertexAttrib64bit_nglGetVertexAttribLdvEXT__IIJ(JNIEnv *__env, jclass clazz, jint index, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetVertexAttribLdvEXT(index, pname, params);
}

EXTERN_C_EXIT
