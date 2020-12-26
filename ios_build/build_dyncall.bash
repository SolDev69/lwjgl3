#!/bin/bash
set -e

cd dyncall-1.0

    # -DCMAKE_Swift_COMPILER_FORCED=true \
    
cmake -G Xcode -B build \
    -DCMAKE_SYSTEM_NAME=iOS \
    -DCMAKE_OSX_DEPLOYMENT_TARGET=11.0 \
    -DCMAKE_OSX_ARCHITECTURES=arm64 \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_FLAGS="-no-integrated-as -arch arm64 -miphoneos-version-min=11.0"

# FIXME make it better, ex put to function
# But it compile error!
make
# (cd dyncall-1.0/android_arm_build/ && make)
# (cd dyncall-1.0/android_x86_64_build/ && make)
# (cd dyncall-1.0/android_x86_build/ && make)

cp dyncall/libdyncall_s.a \
	dyncallback/libdyncallback_s.a \
	dynload/libdynload_s.a \
	jni/arm64-v8a/
	
