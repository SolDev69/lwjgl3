#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glActiveTextureARB(JNIEnv *__env, jclass clazz, jint texture) {
    UNUSED_PARAM(clazz)
    glActiveTextureARB(texture);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glClientActiveTextureARB(JNIEnv *__env, jclass clazz, jint texture) {
    UNUSED_PARAM(clazz)
    glClientActiveTextureARB(texture);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord1fARB(JNIEnv *__env, jclass clazz, jint texture, jfloat s) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord1fARB(texture, s);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord1sARB(JNIEnv *__env, jclass clazz, jint texture, jshort s) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord1sARB(texture, s);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord1iARB(JNIEnv *__env, jclass clazz, jint texture, jint s) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord1iARB(texture, s);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord1dARB(JNIEnv *__env, jclass clazz, jint texture, jdouble s) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord1dARB(texture, s);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord1fvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord1fvARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord1svARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord1svARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord1ivARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord1ivARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord1dvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord1dvARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord2fARB(JNIEnv *__env, jclass clazz, jint texture, jfloat s, jfloat t) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord2fARB(texture, s, t);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord2sARB(JNIEnv *__env, jclass clazz, jint texture, jshort s, jshort t) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord2sARB(texture, s, t);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord2iARB(JNIEnv *__env, jclass clazz, jint texture, jint s, jint t) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord2iARB(texture, s, t);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord2dARB(JNIEnv *__env, jclass clazz, jint texture, jdouble s, jdouble t) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord2dARB(texture, s, t);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord2fvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord2fvARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord2svARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord2svARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord2ivARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord2ivARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord2dvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord2dvARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord3fARB(JNIEnv *__env, jclass clazz, jint texture, jfloat s, jfloat t, jfloat r) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord3fARB(texture, s, t, r);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord3sARB(JNIEnv *__env, jclass clazz, jint texture, jshort s, jshort t, jshort r) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord3sARB(texture, s, t, r);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord3iARB(JNIEnv *__env, jclass clazz, jint texture, jint s, jint t, jint r) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord3iARB(texture, s, t, r);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord3dARB(JNIEnv *__env, jclass clazz, jint texture, jdouble s, jdouble t, jdouble r) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord3dARB(texture, s, t, r);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord3fvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord3fvARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord3svARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord3svARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord3ivARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord3ivARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord3dvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord3dvARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord4fARB(JNIEnv *__env, jclass clazz, jint texture, jfloat s, jfloat t, jfloat r, jfloat q) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord4fARB(texture, s, t, r, q);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord4sARB(JNIEnv *__env, jclass clazz, jint texture, jshort s, jshort t, jshort r, jshort q) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord4sARB(texture, s, t, r, q);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord4iARB(JNIEnv *__env, jclass clazz, jint texture, jint s, jint t, jint r, jint q) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord4iARB(texture, s, t, r, q);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_glMultiTexCoord4dARB(JNIEnv *__env, jclass clazz, jint texture, jdouble s, jdouble t, jdouble r, jdouble q) {
    UNUSED_PARAM(clazz)
    glMultiTexCoord4dARB(texture, s, t, r, q);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord4fvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord4fvARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord4svARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord4svARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord4ivARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord4ivARB(texture, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBMultitexture_nglMultiTexCoord4dvARB__IJ(JNIEnv *__env, jclass clazz, jint texture, jlong vAddress) {
    intptr_t v = (intptr_t)vAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoord4dvARB(texture, v);
}

EXTERN_C_EXIT
