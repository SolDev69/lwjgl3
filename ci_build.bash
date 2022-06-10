#!/bin/bash
set -e

# Grab Android NDK
export ANDROID_NDK_HOME="$ANDROID_SDK_ROOT/ndk-bundle"

# wget http://beanshell.org/bsh-2.0b5.jar
# mv bsh-2.0b5.jar $ANT_HOME/lib

ant -version

# Disable driftfx because some JDKs (eg OpenJDK on Ubuntu) don't come with JavaFX
# Ignore ant build, since we are only building native code
 ANT_OPTS="-Dnashorn.args=\"--no-deprecation-warning\"" \

ant -Dbinding.driftfx=false \
  -Dbuild.type="release/3.3.0" \
  compile-templates compile release

# ls *

cd android_build

# Build dyncall-1.0
wget -nv -O dyncall-1.0.tar.gz "https://www.dyncall.org/r1.0/dyncall-1.0.tar.gz"
tar xf dyncall-1.0.tar.gz
./build_dyncall.bash

# FIXME make it better, ex put to function
# But it compile error!
(cd dyncall-1.0/android_arm64_build/ && make)
(cd dyncall-1.0/android_arm_build/ && make)
(cd dyncall-1.0/android_x86_64_build/ && make)
(cd dyncall-1.0/android_x86_build/ && make)

cp dyncall-1.0/android_arm64_build/dyncall/libdyncall_s.a \
	dyncall-1.0/android_arm64_build/dyncallback/libdyncallback_s.a \
	dyncall-1.0/android_arm64_build/dynload/libdynload_s.a \
	jni/arm64-v8a/
	
cp dyncall-1.0/android_arm_build/dyncall/libdyncall_s.a \
	dyncall-1.0/android_arm_build/dyncallback/libdyncallback_s.a \
	dyncall-1.0/android_arm_build/dynload/libdynload_s.a \
	jni/armeabi-v7a/
	
cp dyncall-1.0/android_x86_64_build/dyncall/libdyncall_s.a \
	dyncall-1.0/android_x86_64_build/dyncallback/libdyncallback_s.a \
	dyncall-1.0/android_x86_64_build/dynload/libdynload_s.a \
	jni/x86_64/
	
cp dyncall-1.0/android_x86_build/dyncall/libdyncall_s.a \
	dyncall-1.0/android_x86_build/dyncallback/libdyncallback_s.a \
	dyncall-1.0/android_x86_build/dynload/libdynload_s.a \
	jni/x86/

# Build LWJGL Android native libraries
"$ANDROID_NDK_HOME/ndk-build"

# Copy debug libs
cp -r obj/local libs_debug
rm -r libs_debug/*/objs*

