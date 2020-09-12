#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_nglGenQueriesARB__IJ(JNIEnv *__env, jclass clazz, jint n, jlong idsAddress) {
    intptr_t ids = (intptr_t)idsAddress;
    UNUSED_PARAM(clazz)
    glGenQueriesARB(n, ids);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_nglDeleteQueriesARB__IJ(JNIEnv *__env, jclass clazz, jint n, jlong idsAddress) {
    intptr_t ids = (intptr_t)idsAddress;
    UNUSED_PARAM(clazz)
    glDeleteQueriesARB(n, ids);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_glIsQueryARB(JNIEnv *__env, jclass clazz, jint id) {
    UNUSED_PARAM(clazz)
    return (jboolean)glIsQueryARB(id);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_glBeginQueryARB(JNIEnv *__env, jclass clazz, jint target, jint id) {
    UNUSED_PARAM(clazz)
    glBeginQueryARB(target, id);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_glEndQueryARB(JNIEnv *__env, jclass clazz, jint target) {
    UNUSED_PARAM(clazz)
    glEndQueryARB(target);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_nglGetQueryivARB__IIJ(JNIEnv *__env, jclass clazz, jint target, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetQueryivARB(target, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_nglGetQueryObjectivARB__IIJ(JNIEnv *__env, jclass clazz, jint id, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetQueryObjectivARB(id, pname, params);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBOcclusionQuery_nglGetQueryObjectuivARB__IIJ(JNIEnv *__env, jclass clazz, jint id, jint pname, jlong paramsAddress) {
    intptr_t params = (intptr_t)paramsAddress;
    UNUSED_PARAM(clazz)
    glGetQueryObjectuivARB(id, pname, params);
}

EXTERN_C_EXIT
