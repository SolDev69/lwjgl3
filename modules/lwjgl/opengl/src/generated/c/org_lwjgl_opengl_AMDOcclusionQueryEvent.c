#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDOcclusionQueryEvent_glQueryObjectParameteruiAMD(JNIEnv *__env, jclass clazz, jint target, jint id, jint pname, jint param) {
    UNUSED_PARAM(clazz)
    glQueryObjectParameteruiAMD(target, id, pname, param);
}

EXTERN_C_EXIT
