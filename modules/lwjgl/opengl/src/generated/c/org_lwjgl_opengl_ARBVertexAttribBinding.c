#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexAttribBinding_glVertexArrayBindVertexBufferEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint bindingindex, jint buffer, jlong offset, jint stride) {
    UNUSED_PARAM(clazz)
    glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, (intptr_t)offset, stride);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexAttribBinding_glVertexArrayVertexAttribFormatEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint attribindex, jint size, jint type, jboolean normalized, jint relativeoffset) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexAttribBinding_glVertexArrayVertexAttribIFormatEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint attribindex, jint size, jint type, jint relativeoffset) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexAttribBinding_glVertexArrayVertexAttribLFormatEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint attribindex, jint size, jint type, jint relativeoffset) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexAttribBinding_glVertexArrayVertexAttribBindingEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint attribindex, jint bindingindex) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBVertexAttribBinding_glVertexArrayVertexBindingDivisorEXT(JNIEnv *__env, jclass clazz, jint vaobj, jint bindingindex, jint divisor) {
    UNUSED_PARAM(clazz)
    glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

EXTERN_C_EXIT
