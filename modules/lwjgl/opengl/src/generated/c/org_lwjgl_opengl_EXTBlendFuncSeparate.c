#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTBlendFuncSeparate_glBlendFuncSeparateEXT(JNIEnv *__env, jclass clazz, jint sfactorRGB, jint dfactorRGB, jint sfactorAlpha, jint dfactorAlpha) {
    UNUSED_PARAM(clazz)
    glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

EXTERN_C_EXIT
