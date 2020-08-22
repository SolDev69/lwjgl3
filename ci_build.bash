#!/bin/bash
set -e

# Grab Android NDK
export ANDROID_NDK_HOME="$ANDROID_SDK_ROOT/ndk-bundle"

# Disable driftfx because some JDKs (eg OpenJDK on Ubuntu) don't come with JavaFX
# Ignore ant build, since we are only building native code
# ANT_OPTS="-Dnashorn.args=\"--no-deprecation-warning\"" \
# 	ant -Dbinding.driftfx=false compile-templates compile

cd android_build

# Build dyncall-1.0
wget -nv -O dyncall-1.0.tar.gz "https://www.dyncall.org/r1.0/dyncall-1.0.tar.gz"
tar xf dyncall-1.0.tar.gz
./build_dyncall.bash

# Build LWJGL Android native libraries
"$ANDROID_NDK_HOME/ndk-build"

# Copy debug libs
cp -r obj/local libs_debug
rm -r libs_debug/*/objs*

