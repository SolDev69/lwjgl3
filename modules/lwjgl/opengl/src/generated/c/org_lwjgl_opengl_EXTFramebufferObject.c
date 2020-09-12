#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glIsRenderbufferEXT(JNIEnv *__env, jclass clazz, jint renderbuffer) {
    UNUSED_PARAM(clazz)
    return (jboolean)glIsRenderbufferEXT(renderbuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glBindRenderbufferEXT(JNIEnv *__env, jclass clazz, jint target, jint renderbuffer) {
    UNUSED_PARAM(clazz)
    glBindRenderbufferEXT(target, renderbuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_nglDeleteRenderbuffersEXT__IJ(JNIEnv *__env, jclass clazz, jint n, jlong renderbuffersAddress) {
    intptr_t renderbuffers = (intptr_t)renderbuffersAddress;
    UNUSED_PARAM(clazz)
    glDeleteRenderbuffersEXT(n, renderbuffers);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_nglGenRenderbuffersEXT__IJ(JNIEnv *__env, jclass clazz, jint n, jlong renderbuffersAddress) {
    intptr_t renderbuffers = (intptr_t)renderbuffersAddress;
    UNUSED_PARAM(clazz)
    glGenRenderbuffersEXT(n, renderbuffers);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glRenderbufferStorageEXT(JNIEnv *__env, jclass clazz, jint target, jint internalformat, jint width, jint height) {
    UNUSED_PARAM(clazz)
    glRenderbufferStorageEXT(target, internalformat, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_nglGetRenderbufferParameterivEXT__IIJ(JNIEnv *__env, jclass clazz, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetRenderbufferParameterivEXT(target, pname, params);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glIsFramebufferEXT(JNIEnv *__env, jclass clazz, jint framebuffer) {
    UNUSED_PARAM(clazz)
    return (jboolean)glIsFramebufferEXT(framebuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glBindFramebufferEXT(JNIEnv *__env, jclass clazz, jint target, jint framebuffer) {
    UNUSED_PARAM(clazz)
    glBindFramebufferEXT(target, framebuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_nglDeleteFramebuffersEXT__IJ(JNIEnv *__env, jclass clazz, jint n, jlong framebuffersAddress) {
    intptr_t framebuffers = (intptr_t)framebuffersAddress;
    UNUSED_PARAM(clazz)
    glDeleteFramebuffersEXT(n, framebuffers);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_nglGenFramebuffersEXT__IJ(JNIEnv *__env, jclass clazz, jint n, jlong framebuffersAddress) {
    intptr_t framebuffers = (intptr_t)framebuffersAddress;
    UNUSED_PARAM(clazz)
    glGenFramebuffersEXT(n, framebuffers);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glCheckFramebufferStatusEXT(JNIEnv *__env, jclass clazz, jint target) {
    UNUSED_PARAM(clazz)
    return (jint)glCheckFramebufferStatusEXT(target);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glFramebufferTexture1DEXT(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint textarget, jint texture, jint level) {
    UNUSED_PARAM(clazz)
    glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glFramebufferTexture2DEXT(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint textarget, jint texture, jint level) {
    UNUSED_PARAM(clazz)
    glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glFramebufferTexture3DEXT(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint textarget, jint texture, jint level, jint zoffset) {
    UNUSED_PARAM(clazz)
    glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glFramebufferRenderbufferEXT(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint renderbuffertarget, jint renderbuffer) {
    UNUSED_PARAM(clazz)
    glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_nglGetFramebufferAttachmentParameterivEXT__IIIJ(JNIEnv *__env, jclass clazz, jint target, jint attachment, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTFramebufferObject_glGenerateMipmapEXT(JNIEnv *__env, jclass clazz, jint target) {
    UNUSED_PARAM(clazz)
    glGenerateMipmapEXT(target);
}

EXTERN_C_EXIT
