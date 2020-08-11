#!/bin/bash
set -e
# Grab Android NDK
export ANDROID_NDK_HOME="$ANDROID_SDK_ROOT/ndk-bundle"
# Disable driftfx because some JDKs (eg OpenJDK on Ubuntu) don't come with JavaFX
ANT_OPTS="-Dnashorn.args=\"--no-deprecation-warning\"" \
	ant -Dbinding.driftfx=false compile-templates compile
cd android_build
# Build dyncall-1.0
wget -nv -O dyncall-1.0.tar.gz "https://www.dyncall.org/r1.0/dyncall-1.0.tar.gz"
tar xf dyncall-1.0.tar.gz
./build_dyncall.bash
(cd dyncall-1.0/android_arm_build/ && make)
(cd dyncall-1.0/android_x86_build/ && make)
cp dyncall-1.0/android_arm_build/dyncall/libdyncall_s.a \
	dyncall-1.0/android_arm_build/dyncallback/libdyncallback_s.a \
	dyncall-1.0/android_arm_build/dynload/libdynload_s.a \
	jni/armeabi-v7a/
	
cp dyncall-1.0/android_x86_build/dyncall/libdyncall_s.a \
	dyncall-1.0/android_x86_build/dyncallback/libdyncallback_s.a \
	dyncall-1.0/android_x86_build/dynload/libdynload_s.a \
	jni/x86/
# Build LWJGL Android native libraries
"$ANDROID_NDK_HOME/ndk-build"

# Copy debug libs
cp -r obj/local libs_debug
rm -r libs_debug/*/objs*
