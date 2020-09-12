#include <GL/Regal.h>

/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"


EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglGetPerfMonitorGroupsAMD__JIJ(JNIEnv *__env, jclass clazz, jlong numGroupsAddress, jint groupsSize, jlong groupsAddress) {
    intptr_t numGroups = (intptr_t)numGroupsAddress;
    intptr_t groups = (intptr_t)groupsAddress;
    UNUSED_PARAM(clazz)
    glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglGetPerfMonitorCountersAMD__IJJIJ(JNIEnv *__env, jclass clazz, jint group, jlong numCountersAddress, jlong maxActiveCountersAddress, jint counterSize, jlong countersAddress) {
    intptr_t numCounters = (intptr_t)numCountersAddress;
    intptr_t maxActiveCounters = (intptr_t)maxActiveCountersAddress;
    intptr_t counters = (intptr_t)countersAddress;
    UNUSED_PARAM(clazz)
    glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglGetPerfMonitorGroupStringAMD__IIJJ(JNIEnv *__env, jclass clazz, jint group, jint bufSize, jlong lengthAddress, jlong groupStringAddress) {
    intptr_t length = (intptr_t)lengthAddress;
    intptr_t groupString = (intptr_t)groupStringAddress;
    UNUSED_PARAM(clazz)
    glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglGetPerfMonitorCounterStringAMD__IIIJJ(JNIEnv *__env, jclass clazz, jint group, jint counter, jint bufSize, jlong lengthAddress, jlong counterStringAddress) {
    intptr_t length = (intptr_t)lengthAddress;
    intptr_t counterString = (intptr_t)counterStringAddress;
    UNUSED_PARAM(clazz)
    glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglGetPerfMonitorCounterInfoAMD__IIIJ(JNIEnv *__env, jclass clazz, jint group, jint counter, jint pname, jlong dataAddress) {
    intptr_t data = (intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglGenPerfMonitorsAMD__IJ(JNIEnv *__env, jclass clazz, jint n, jlong monitorsAddress) {
    intptr_t monitors = (intptr_t)monitorsAddress;
    UNUSED_PARAM(clazz)
    glGenPerfMonitorsAMD(n, monitors);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglDeletePerfMonitorsAMD__IJ(JNIEnv *__env, jclass clazz, jint n, jlong monitorsAddress) {
    intptr_t monitors = (intptr_t)monitorsAddress;
    UNUSED_PARAM(clazz)
    glDeletePerfMonitorsAMD(n, monitors);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglSelectPerfMonitorCountersAMD__IZIIJ(JNIEnv *__env, jclass clazz, jint monitor, jboolean enable, jint group, jint numCounters, jlong counterListAddress) {
    intptr_t counterList = (intptr_t)counterListAddress;
    UNUSED_PARAM(clazz)
    glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_glBeginPerfMonitorAMD(JNIEnv *__env, jclass clazz, jint monitor) {
    UNUSED_PARAM(clazz)
    glBeginPerfMonitorAMD(monitor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_glEndPerfMonitorAMD(JNIEnv *__env, jclass clazz, jint monitor) {
    UNUSED_PARAM(clazz)
    glEndPerfMonitorAMD(monitor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_AMDPerformanceMonitor_nglGetPerfMonitorCounterDataAMD__IIIJJ(JNIEnv *__env, jclass clazz, jint monitor, jint pname, jint dataSize, jlong dataAddress, jlong bytesWrittenAddress) {
    intptr_t data = (intptr_t)dataAddress;
    intptr_t bytesWritten = (intptr_t)bytesWrittenAddress;
    UNUSED_PARAM(clazz)
    glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

EXTERN_C_EXIT
