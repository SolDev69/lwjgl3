#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glClientAttribDefaultEXT(JNIEnv *__env, jclass clazz, jint mask) {
    UNUSED_PARAM(clazz)
    glClientAttribDefaultEXT(mask);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glPushClientAttribDefaultEXT(JNIEnv *__env, jclass clazz, jint mask) {
    UNUSED_PARAM(clazz)
    glPushClientAttribDefaultEXT(mask);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixLoadfEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixLoadfEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixLoaddEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixLoaddEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixMultfEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixMultfEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixMultdEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixMultdEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixLoadIdentityEXT(JNIEnv *__env, jclass clazz, jint matrixMode) {
    UNUSED_PARAM(clazz)
    glMatrixLoadIdentityEXT(matrixMode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixRotatefEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jfloat angle, jfloat x, jfloat y, jfloat z) {
    UNUSED_PARAM(clazz)
    glMatrixRotatefEXT(matrixMode, angle, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixRotatedEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jdouble angle, jdouble x, jdouble y, jdouble z) {
    UNUSED_PARAM(clazz)
    glMatrixRotatedEXT(matrixMode, angle, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixScalefEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jfloat x, jfloat y, jfloat z) {
    UNUSED_PARAM(clazz)
    glMatrixScalefEXT(matrixMode, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixScaledEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jdouble x, jdouble y, jdouble z) {
    UNUSED_PARAM(clazz)
    glMatrixScaledEXT(matrixMode, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixTranslatefEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jfloat x, jfloat y, jfloat z) {
    UNUSED_PARAM(clazz)
    glMatrixTranslatefEXT(matrixMode, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixTranslatedEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jdouble x, jdouble y, jdouble z) {
    UNUSED_PARAM(clazz)
    glMatrixTranslatedEXT(matrixMode, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixOrthoEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jdouble l, jdouble r, jdouble b, jdouble t, jdouble n, jdouble f) {
    UNUSED_PARAM(clazz)
    glMatrixOrthoEXT(matrixMode, l, r, b, t, n, f);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixFrustumEXT(JNIEnv *__env, jclass clazz, jint matrixMode, jdouble l, jdouble r, jdouble b, jdouble t, jdouble n, jdouble f) {
    UNUSED_PARAM(clazz)
    glMatrixFrustumEXT(matrixMode, l, r, b, t, n, f);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixPushEXT(JNIEnv *__env, jclass clazz, jint matrixMode) {
    UNUSED_PARAM(clazz)
    glMatrixPushEXT(matrixMode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMatrixPopEXT(JNIEnv *__env, jclass clazz, jint matrixMode) {
    UNUSED_PARAM(clazz)
    glMatrixPopEXT(matrixMode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glTextureParameteriEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jint param) {
    UNUSED_PARAM(clazz)
    glTextureParameteriEXT(texture, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureParameterivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glTextureParameterivEXT(texture, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glTextureParameterfEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jfloat param) {
    UNUSED_PARAM(clazz)
    glTextureParameterfEXT(texture, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureParameterfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glTextureParameterfvEXT(texture, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureImage1DEXT__IIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint width, jint border, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureImage2DEXT__IIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureSubImage1DEXT__IIIIIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint width, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureSubImage2DEXT__IIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyTextureImage1DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint x, jint y, jint width, jint border) {
    UNUSED_PARAM(clazz)
    glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyTextureImage2DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint x, jint y, jint width, jint height, jint border) {
    UNUSED_PARAM(clazz)
    glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyTextureSubImage1DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint x, jint y, jint width) {
    UNUSED_PARAM(clazz)
    glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyTextureSubImage2DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint yoffset, jint x, jint y, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetTextureImageEXT__IIIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glGetTextureImageEXT(texture, target, level, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetTextureParameterfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetTextureParameterfvEXT(texture, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetTextureParameterivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetTextureParameterivEXT(texture, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetTextureLevelParameterfvEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetTextureLevelParameterivEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureImage3DEXT__IIIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint width, jint height, jint depth, jint border, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureSubImage3DEXT__IIIIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint width, jint height, jint depth, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyTextureSubImage3DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint x, jint y, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glBindMultiTextureEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint texture) {
    UNUSED_PARAM(clazz)
    glBindMultiTextureEXT(texunit, target, texture);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexCoordPointerEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint size, jint type, jint stride, jlong pointerAddress) {
    intptr_t pointer = (intptr_t)pointerAddress;
    UNUSED_PARAM(clazz)
    glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexEnvfEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jfloat param) {
    UNUSED_PARAM(clazz)
    glMultiTexEnvfEXT(texunit, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexEnvfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexEnvfvEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexEnviEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jint param) {
    UNUSED_PARAM(clazz)
    glMultiTexEnviEXT(texunit, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexEnvivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexEnvivEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexGendEXT(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jdouble param) {
    UNUSED_PARAM(clazz)
    glMultiTexGendEXT(texunit, coord, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexGendvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexGendvEXT(texunit, coord, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexGenfEXT(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jfloat param) {
    UNUSED_PARAM(clazz)
    glMultiTexGenfEXT(texunit, coord, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexGenfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexGenfvEXT(texunit, coord, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexGeniEXT(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jint param) {
    UNUSED_PARAM(clazz)
    glMultiTexGeniEXT(texunit, coord, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexGenivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexGenivEXT(texunit, coord, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexEnvfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexEnvfvEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexEnvivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexEnvivEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexGendvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexGendvEXT(texunit, coord, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexGenfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexGenfvEXT(texunit, coord, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexGenivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint coord, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexGenivEXT(texunit, coord, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexParameteriEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jint param) {
    UNUSED_PARAM(clazz)
    glMultiTexParameteriEXT(texunit, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexParameterivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glMultiTexParameterivEXT(texunit, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexParameterfEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jfloat param) {
    UNUSED_PARAM(clazz)
    glMultiTexParameterfEXT(texunit, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexParameterfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glMultiTexParameterfvEXT(texunit, target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexImage1DEXT__IIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint width, jint border, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexImage2DEXT__IIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexSubImage1DEXT__IIIIIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint width, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexSubImage2DEXT__IIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyMultiTexImage1DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint x, jint y, jint width, jint border) {
    UNUSED_PARAM(clazz)
    glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyMultiTexImage2DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint x, jint y, jint width, jint height, jint border) {
    UNUSED_PARAM(clazz)
    glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyMultiTexSubImage1DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint x, jint y, jint width) {
    UNUSED_PARAM(clazz)
    glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyMultiTexSubImage2DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint yoffset, jint x, jint y, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexImageEXT__IIIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexParameterfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexParameterfvEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexParameterivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexParameterivEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexLevelParameterfvEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexLevelParameterivEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexImage3DEXT__IIIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint width, jint height, jint depth, jint border, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexSubImage3DEXT__IIIIIIIIIIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint width, jint height, jint depth, jint format, jint type, jlong pixelsAddress) {
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCopyMultiTexSubImage3DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint x, jint y, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glEnableClientStateIndexedEXT(JNIEnv *__env, jclass clazz, jint array, jint index) {
    UNUSED_PARAM(clazz)
    glEnableClientStateIndexedEXT(array, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glDisableClientStateIndexedEXT(JNIEnv *__env, jclass clazz, jint array, jint index) {
    UNUSED_PARAM(clazz)
    glDisableClientStateIndexedEXT(array, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glEnableClientStateiEXT(JNIEnv *__env, jclass clazz, jint array, jint index) {
    UNUSED_PARAM(clazz)
    glEnableClientStateiEXT(array, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glDisableClientStateiEXT(JNIEnv *__env, jclass clazz, jint array, jint index) {
    UNUSED_PARAM(clazz)
    glDisableClientStateiEXT(array, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetFloatIndexedvEXT__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetFloatIndexedvEXT(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetDoubleIndexedvEXT__IIJ(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetDoubleIndexedvEXT(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetPointerIndexedvEXT(JNIEnv *__env, jclass clazz, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetPointerIndexedvEXT(target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetFloati_1vEXT__IIJ(JNIEnv *__env, jclass clazz, jint pname, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetFloati_vEXT(pname, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetDoublei_1vEXT__IIJ(JNIEnv *__env, jclass clazz, jint pname, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetDoublei_vEXT(pname, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetPointeri_1vEXT(JNIEnv *__env, jclass clazz, jint pname, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetPointeri_vEXT(pname, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramStringEXT(JNIEnv *__env, jclass clazz, jint program, jint target, jint format, jint len, jlong stringAddress) {
    intptr_t string = (intptr_t)stringAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramStringEXT(program, target, format, len, string);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedProgramLocalParameter4dEXT(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jdouble x, jdouble y, jdouble z, jdouble w) {
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramLocalParameter4dvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameter4dvEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedProgramLocalParameter4fEXT(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jfloat x, jfloat y, jfloat z, jfloat w) {
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramLocalParameter4fvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameter4fvEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedProgramLocalParameterdvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedProgramLocalParameterfvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedProgramivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedProgramivEXT(program, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedProgramStringEXT(JNIEnv *__env, jclass clazz, jint program, jint target, jint pname, jlong stringAddress) {
    intptr_t string = (intptr_t)stringAddress;
    UNUSED_PARAM(clazz)
    glGetNamedProgramStringEXT(program, target, pname, string);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedTextureImage3DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint width, jint height, jint depth, jint border, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedTextureImage2DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedTextureImage1DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint internalformat, jint width, jint border, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedTextureSubImage3DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint width, jint height, jint depth, jint format, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedTextureSubImage2DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedTextureSubImage1DEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jint xoffset, jint width, jint format, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetCompressedTextureImageEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint level, jlong imgAddress) {
    intptr_t img = (intptr_t)imgAddress;
    UNUSED_PARAM(clazz)
    glGetCompressedTextureImageEXT(texture, target, level, img);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedMultiTexImage3DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint width, jint height, jint depth, jint border, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedMultiTexImage2DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedMultiTexImage1DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint internalformat, jint width, jint border, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedMultiTexSubImage3DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint width, jint height, jint depth, jint format, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedMultiTexSubImage2DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglCompressedMultiTexSubImage1DEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jint xoffset, jint width, jint format, jint imageSize, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetCompressedMultiTexImageEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint level, jlong imgAddress) {
    intptr_t img = (intptr_t)imgAddress;
    UNUSED_PARAM(clazz)
    glGetCompressedMultiTexImageEXT(texunit, target, level, img);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixLoadTransposefEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixLoadTransposefEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixLoadTransposedEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixLoadTransposedEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixMultTransposefEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixMultTransposefEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMatrixMultTransposedEXT__IJ(JNIEnv *__env, jclass clazz, jint matrixMode, jlong mAddress) {
    intptr_t m = (intptr_t)mAddress;
    UNUSED_PARAM(clazz)
    glMatrixMultTransposedEXT(matrixMode, m);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedBufferDataEXT__IJJI(JNIEnv *__env, jclass clazz, jint buffer, jlong size, jlong dataAddress, jint usage) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glNamedBufferDataEXT(buffer, (intptr_t)size, data, usage);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedBufferSubDataEXT__IJJJ(JNIEnv *__env, jclass clazz, jint buffer, jlong offset, jlong size, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glNamedBufferSubDataEXT(buffer, (intptr_t)offset, (intptr_t)size, data);
}

JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMapNamedBufferEXT(JNIEnv *__env, jclass clazz, jint buffer, jint access) {
    UNUSED_PARAM(clazz)
    return (jlong)glMapNamedBufferEXT(buffer, access);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glUnmapNamedBufferEXT(JNIEnv *__env, jclass clazz, jint buffer) {
    UNUSED_PARAM(clazz)
    return (jboolean)glUnmapNamedBufferEXT(buffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedBufferParameterivEXT__IIJ(JNIEnv *__env, jclass clazz, jint buffer, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedBufferParameterivEXT(buffer, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedBufferSubDataEXT__IJJJ(JNIEnv *__env, jclass clazz, jint buffer, jlong offset, jlong size, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glGetNamedBufferSubDataEXT(buffer, (intptr_t)offset, (intptr_t)size, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform1fEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jfloat v0) {
    UNUSED_PARAM(clazz)
    glProgramUniform1fEXT(program, location, v0);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform2fEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jfloat v0, jfloat v1) {
    UNUSED_PARAM(clazz)
    glProgramUniform2fEXT(program, location, v0, v1);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform3fEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jfloat v0, jfloat v1, jfloat v2) {
    UNUSED_PARAM(clazz)
    glProgramUniform3fEXT(program, location, v0, v1, v2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform4fEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jfloat v0, jfloat v1, jfloat v2, jfloat v3) {
    UNUSED_PARAM(clazz)
    glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform1iEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0) {
    UNUSED_PARAM(clazz)
    glProgramUniform1iEXT(program, location, v0);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform2iEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0, jint v1) {
    UNUSED_PARAM(clazz)
    glProgramUniform2iEXT(program, location, v0, v1);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform3iEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0, jint v1, jint v2) {
    UNUSED_PARAM(clazz)
    glProgramUniform3iEXT(program, location, v0, v1, v2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform4iEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0, jint v1, jint v2, jint v3) {
    UNUSED_PARAM(clazz)
    glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform1fvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform1fvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform2fvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform2fvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform3fvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform3fvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform4fvEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform4fvEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform1ivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform1ivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform2ivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform2ivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform3ivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform3ivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform4ivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform4ivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix2fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix3fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix4fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix2x3fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix3x2fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix2x4fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix4x2fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix3x4fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniformMatrix4x3fvEXT__IIIZJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jboolean transpose, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glTextureBufferEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint internalformat, jint buffer) {
    UNUSED_PARAM(clazz)
    glTextureBufferEXT(texture, target, internalformat, buffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexBufferEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint internalformat, jint buffer) {
    UNUSED_PARAM(clazz)
    glMultiTexBufferEXT(texunit, target, internalformat, buffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureParameterIivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glTextureParameterIivEXT(texture, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglTextureParameterIuivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glTextureParameterIuivEXT(texture, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetTextureParameterIivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetTextureParameterIivEXT(texture, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetTextureParameterIuivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texture, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetTextureParameterIuivEXT(texture, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexParameterIivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexParameterIivEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMultiTexParameterIuivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glMultiTexParameterIuivEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexParameterIivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexParameterIivEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetMultiTexParameterIuivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform1uiEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0) {
    UNUSED_PARAM(clazz)
    glProgramUniform1uiEXT(program, location, v0);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform2uiEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0, jint v1) {
    UNUSED_PARAM(clazz)
    glProgramUniform2uiEXT(program, location, v0, v1);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform3uiEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0, jint v1, jint v2) {
    UNUSED_PARAM(clazz)
    glProgramUniform3uiEXT(program, location, v0, v1, v2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glProgramUniform4uiEXT(JNIEnv *__env, jclass clazz, jint program, jint location, jint v0, jint v1, jint v2, jint v3) {
    UNUSED_PARAM(clazz)
    glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform1uivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform1uivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform2uivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform2uivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform3uivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform3uivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglProgramUniform4uivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint location, jint count, jlong valueAddress) {
    intptr_t value = (intptr_t)valueAddress;
    UNUSED_PARAM(clazz)
    glProgramUniform4uivEXT(program, location, count, value);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramLocalParameters4fvEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jint count, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedProgramLocalParameterI4iEXT(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jint x, jint y, jint z, jint w) {
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramLocalParameterI4ivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramLocalParametersI4ivEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jint count, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedProgramLocalParameterI4uiEXT(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jint x, jint y, jint z, jint w) {
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramLocalParameterI4uivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglNamedProgramLocalParametersI4uivEXT__IIIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jint count, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedProgramLocalParameterIivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedProgramLocalParameterIuivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint program, jint target, jint index, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedRenderbufferStorageEXT(JNIEnv *__env, jclass clazz, jint renderbuffer, jint internalformat, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedRenderbufferParameterivEXT__IIJ(JNIEnv *__env, jclass clazz, jint renderbuffer, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedRenderbufferStorageMultisampleEXT(JNIEnv *__env, jclass clazz, jint renderbuffer, jint samples, jint internalformat, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedRenderbufferStorageMultisampleCoverageEXT(JNIEnv *__env, jclass clazz, jint renderbuffer, jint coverageSamples, jint colorSamples, jint internalformat, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glCheckNamedFramebufferStatusEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint target) {
    UNUSED_PARAM(clazz)
    return (jint)glCheckNamedFramebufferStatusEXT(framebuffer, target);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedFramebufferTexture1DEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint textarget, jint texture, jint level) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedFramebufferTexture2DEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint textarget, jint texture, jint level) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedFramebufferTexture3DEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint textarget, jint texture, jint level, jint zoffset) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedFramebufferRenderbufferEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint renderbuffertarget, jint renderbuffer) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetNamedFramebufferAttachmentParameterivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glGenerateTextureMipmapEXT(JNIEnv *__env, jclass clazz, jint texture, jint target) {
    UNUSED_PARAM(clazz)
    glGenerateTextureMipmapEXT(texture, target);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glGenerateMultiTexMipmapEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target) {
    UNUSED_PARAM(clazz)
    glGenerateMultiTexMipmapEXT(texunit, target);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glFramebufferDrawBufferEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint mode) {
    UNUSED_PARAM(clazz)
    glFramebufferDrawBufferEXT(framebuffer, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglFramebufferDrawBuffersEXT__IIJ(JNIEnv *__env, jclass clazz, jint framebuffer, jint n, jlong bufsAddress) {
    intptr_t bufs = (intptr_t)bufsAddress;
    UNUSED_PARAM(clazz)
    glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glFramebufferReadBufferEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint mode) {
    UNUSED_PARAM(clazz)
    glFramebufferReadBufferEXT(framebuffer, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetFramebufferParameterivEXT__IIJ(JNIEnv *__env, jclass clazz, jint framebuffer, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glGetFramebufferParameterivEXT(framebuffer, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedCopyBufferSubDataEXT(JNIEnv *__env, jclass clazz, jint readBuffer, jint writeBuffer, jlong readOffset, jlong writeOffset, jlong size) {
    UNUSED_PARAM(clazz)
    glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, (intptr_t)readOffset, (intptr_t)writeOffset, (intptr_t)size);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedFramebufferTextureEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint texture, jint level) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedFramebufferTextureLayerEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint texture, jint level, jint layer) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glNamedFramebufferTextureFaceEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint attachment, jint texture, jint level, jint face) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glTextureRenderbufferEXT(JNIEnv *__env, jclass clazz, jint texture, jint target, jint renderbuffer) {
    UNUSED_PARAM(clazz)
    glTextureRenderbufferEXT(texture, target, renderbuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glMultiTexRenderbufferEXT(JNIEnv *__env, jclass clazz, jint texunit, jint target, jint renderbuffer) {
    UNUSED_PARAM(clazz)
    glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayVertexOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint size, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayColorOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint size, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayEdgeFlagOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayIndexOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayNormalOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayTexCoordOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint size, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayMultiTexCoordOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint texunit, jint size, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayFogCoordOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArraySecondaryColorOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint size, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayVertexAttribOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint index, jint size, jint type, jboolean normalized, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glVertexArrayVertexAttribIOffsetEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint buffer, jint index, jint size, jint type, jint stride, jlong offset) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, (intptr_t)offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glEnableVertexArrayEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint array) {
    UNUSED_PARAM(clazz)
    glEnableVertexArrayEXT(vaobj, array);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glDisableVertexArrayEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint array) {
    UNUSED_PARAM(clazz)
    glDisableVertexArrayEXT(vaobj, array);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glEnableVertexArrayAttribEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint index) {
    UNUSED_PARAM(clazz)
    glEnableVertexArrayAttribEXT(vaobj, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glDisableVertexArrayAttribEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint index) {
    UNUSED_PARAM(clazz)
    glDisableVertexArrayAttribEXT(vaobj, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetVertexArrayIntegervEXT__IIJ(JNIEnv *__env, jclass clazz, jint vaobj, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glGetVertexArrayIntegervEXT(vaobj, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetVertexArrayPointervEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glGetVertexArrayPointervEXT(vaobj, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetVertexArrayIntegeri_1vEXT__IIIJ(JNIEnv *__env, jclass clazz, jint vaobj, jint index, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglGetVertexArrayPointeri_1vEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint index, jint pname, jlong paramAddress) {
    intptr_t param = (intptr_t)paramAddress;
    UNUSED_PARAM(clazz)
    glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_nglMapNamedBufferRangeEXT(JNIEnv *__env, jclass clazz, jint buffer, jlong offset, jlong length, jint access) {
    UNUSED_PARAM(clazz)
    return (jlong)glMapNamedBufferRangeEXT(buffer, (intptr_t)offset, (intptr_t)length, access);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDirectStateAccess_glFlushMappedNamedBufferRangeEXT(JNIEnv *__env, jclass clazz, jint buffer, jlong offset, jlong length) {
    UNUSED_PARAM(clazz)
    glFlushMappedNamedBufferRangeEXT(buffer, (intptr_t)offset, (intptr_t)length);
}

EXTERN_C_EXIT
