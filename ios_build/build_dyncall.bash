#!/bin/bash
set -e

cd dyncall-1.0

rm -rf ios_arm64_build
mkdir ios_arm64_build
cd ios_arm64_build
cmake .. \
	-DCMAKE_TOOLCHAIN_FILE="$ANDROID_NDK_HOME/build/cmake/android.toolchain.cmake" \
	-DANDROID_ABI=arm64-v8a \
	-DANDROID_NATIVE_API_LEVEL=21 \
	-DBUILD_SHARED_LIBS=ON \
	-DCMAKE_C_FLAGS="-no-integrated-as"
