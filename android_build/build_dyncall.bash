#!/bin/bash
set -e

func_build_and_cp () {
	rm -rf android_$1_build
	mkdir android_$1_build
	cd android_$1_build
	
	cmake .. \
		-DCMAKE_TOOLCHAIN_FILE="$ANDROID_NDK_HOME/build/cmake/android.toolchain.cmake" \
		-DANDROID_ABI=$1 \
		-DANDROID_NATIVE_API_LEVEL=21 \
		-DBUILD_SHARED_LIBS=ON \
		-DCMAKE_C_FLAGS="-no-integrated-as"
	
	make
	
	cp dyncall/libdyncall_s.a \
		dyncallback/libdyncallback_s.a \
		dynload/libdynload_s.a \
		../../jni/$1/
}

cd dyncall-1.0

func_build_and_cp arm64-v8a
func_build_and_cp armeabi-v7a
func_build_and_cp x86_64
func_build_and_cp x86

