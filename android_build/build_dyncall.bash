#!/bin/bash
set -e
cd dyncall-1.0
rm -r android_arm_build || true
mkdir android_arm_build
cd android_arm_build
cmake .. \
	-DCMAKE_TOOLCHAIN_FILE="$ANDROID_NDK_HOME/build/cmake/android.toolchain.cmake" \
	-DANDROID_ABI=armeabi-v7a \
	-DANDROID_NATIVE_API_LEVEL=21 \
	-DBUILD_SHARED_LIBS=ON
