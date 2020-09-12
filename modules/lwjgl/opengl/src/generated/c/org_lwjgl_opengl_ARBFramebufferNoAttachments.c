#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBFramebufferNoAttachments_glNamedFramebufferParameteriEXT(JNIEnv *__env, jclass clazz, jint framebuffer, jint pname, jint param) {
    UNUSED_PARAM(clazz)
    glNamedFramebufferParameteriEXT(framebuffer, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBFramebufferNoAttachments_nglGetNamedFramebufferParameterivEXT__IIJ(JNIEnv *__env, jclass clazz, jint framebuffer, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

EXTERN_C_EXIT
