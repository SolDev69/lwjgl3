#!/bin/bash
set -e
cd dyncall-1.0
rm -r android_build || true
mkdir android_build
cd android_build
cmake .. \
	-DCMAKE_TOOLCHAIN_FILE="$ANDROID_NDK_HOME/build/cmake/android.toolchain.cmake" \
	-DANDROID_ABI=armeabi-v7a x86 \
	-DANDROID_NATIVE_API_LEVEL=21 \
	-DBUILD_SHARED_LIBS=ON \
	-DCMAKE_C_FLAGS="-no-integrated-as"
