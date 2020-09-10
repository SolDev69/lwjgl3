/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 * Boardwalk: patch dlopen flags
 */
#include "common_tools.h"
#include "LinuxLWJGL.h"
#include <dlfcn.h>

EXTERN_C_ENTER

static void* glesHandle;

JNIEXPORT jlong JNICALL Java_org_lwjgl_system_linux_DynamicLinkLoader_ndlopen(JNIEnv *__env, jclass clazz, jlong filenameAddress, jint mode) {
    const char *filename = (const char *)(intptr_t)filenameAddress;
    UNUSED_PARAMS(__env, clazz)
    // Boardwalk: hardcode the load flags
    // Also, open the libGLESv2 library if we don't have it yet
    if (!glesHandle) {
        glesHandle = dlopen("libGLESv2.so", RTLD_GLOBAL | RTLD_LAZY);
    }
    return (jlong)(intptr_t)dlopen(filename, RTLD_GLOBAL | RTLD_LAZY);
}

JNIEXPORT jlong JNICALL Java_org_lwjgl_system_linux_DynamicLinkLoader_ndlerror(JNIEnv *__env, jclass clazz) {
    UNUSED_PARAMS(__env, clazz)
    return (jlong)(intptr_t)dlerror();
}

JNIEXPORT jlong JNICALL Java_org_lwjgl_system_linux_DynamicLinkLoader_ndlsym(JNIEnv *__env, jclass clazz, jlong handleAddress, jlong nameAddress) {
    void *handle = (void *)(intptr_t)handleAddress;
    const char *name = (const char *)(intptr_t)nameAddress;
    UNUSED_PARAMS(__env, clazz)
    // PojavLauncher: if not in GL4ES, then use GLES2 handle
    jlong retval = (jlong)(intptr_t)dlsym(handle, name);
    // fprintf(stderr, "Lookup for %s returned %p\n", name, (void*)retval);
    if (!retval && name[0] == 'g' && name[1] == 'l') {
        retval = (jlong)(intptr_t)dlsym(glesHandle, name);
/*
        if (retval) {
            fprintf(stderr, "Found %s in gles\n", name);
        }
*/
    }
    return retval;
}

JNIEXPORT jint JNICALL Java_org_lwjgl_system_linux_DynamicLinkLoader_ndlclose(JNIEnv *__env, jclass clazz, jlong handleAddress) {
    void *handle = (void *)(intptr_t)handleAddress;
    UNUSED_PARAMS(__env, clazz)
    return (jint)dlclose(handle);
}

EXTERN_C_EXIT
