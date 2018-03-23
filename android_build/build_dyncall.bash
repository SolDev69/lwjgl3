#!/bin/bash
set -e
cd dyncall-0.9
rm -r android_arm_build || true
mkdir android_arm_build
cd android_arm_build
../cmake-linux-x86/bin/cmake .. \
	-DCMAKE_TOOLCHAIN_FILE=/media/zhuowei/redhd/downloads/android-ndk-r15c/build/cmake/android.toolchain.cmake \
	-DANDROID_ABI=armeabi-v7a \
	-DANDROID_NATIVE_API_LEVEL=21 \
	-DBUILD_SHARED_LIBS=ON
