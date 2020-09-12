#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTWindowRectangles_nglWindowRectanglesEXT__IIJ(JNIEnv *__env, jclass clazz, jint mode, jint count, jlong boxAddress) {
    intptr_t box = (intptr_t)boxAddress;
    UNUSED_PARAM(clazz)
    glWindowRectanglesEXT(mode, count, box);
}

EXTERN_C_EXIT
