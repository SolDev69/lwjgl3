#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDebugLabel_nglLabelObjectEXT(JNIEnv *__env, jclass clazz, jint type, jint object, jint length, jlong labelAddress) {
    intptr_t label = (intptr_t)labelAddress;
    UNUSED_PARAM(clazz)
    glLabelObjectEXT(type, object, length, label);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTDebugLabel_nglGetObjectLabelEXT__IIIJJ(JNIEnv *__env, jclass clazz, jint type, jint object, jint bufSize, jlong lengthAddress, jlong labelAddress) {
    intptr_t length = (intptr_t)lengthAddress;
    intptr_t label = (intptr_t)labelAddress;
    UNUSED_PARAM(clazz)
    glGetObjectLabelEXT(type, object, bufSize, length, label);
}

EXTERN_C_EXIT
