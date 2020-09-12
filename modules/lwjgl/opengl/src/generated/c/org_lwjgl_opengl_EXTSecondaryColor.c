#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3bEXT(JNIEnv *__env, jclass clazz, jbyte red, jbyte green, jbyte blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3bEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3sEXT(JNIEnv *__env, jclass clazz, jshort red, jshort green, jshort blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3sEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3iEXT(JNIEnv *__env, jclass clazz, jint red, jint green, jint blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3iEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3fEXT(JNIEnv *__env, jclass clazz, jfloat red, jfloat green, jfloat blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3fEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3dEXT(JNIEnv *__env, jclass clazz, jdouble red, jdouble green, jdouble blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3dEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3ubEXT(JNIEnv *__env, jclass clazz, jbyte red, jbyte green, jbyte blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3ubEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3usEXT(JNIEnv *__env, jclass clazz, jshort red, jshort green, jshort blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3usEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_glSecondaryColor3uiEXT(JNIEnv *__env, jclass clazz, jint red, jint green, jint blue) {
    UNUSED_PARAM(clazz)
    glSecondaryColor3uiEXT(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3bvEXT(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3bvEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3svEXT__J(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3svEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3ivEXT__J(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3ivEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3fvEXT__J(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3fvEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3dvEXT__J(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3dvEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3ubvEXT(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3ubvEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3usvEXT__J(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3usvEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColor3uivEXT__J(JNIEnv *__env, jclass clazz, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColor3uivEXT(v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSecondaryColor_nglSecondaryColorPointerEXT__IIIJ(JNIEnv *__env, jclass clazz, jint size, jint type, jint stride, jlong pointerAddress) {
    intptr_t pointer = (intptr_t)pointerAddress;
    UNUSED_PARAM(clazz)
    glSecondaryColorPointerEXT(size, type, stride, pointer);
}

EXTERN_C_EXIT
