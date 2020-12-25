#!/bin/bash
set -e


# wget http://beanshell.org/bsh-2.0b5.jar
# mv bsh-2.0b5.jar $ANT_HO
# ls *

cd ios_build

# Build dyncall-1.0
wget -nv -O dyncall-1.0.tar.gz "https://www.dyncall.org/r1.0/dyncall-1.0.tar.gz"
tar xf dyncall-1.0.tar.gz
chmod +x build_dyncall.bash
##
# FIXME IOS BUILD!!!
# ./build_dyncall.bash

cd ..

ant -version

# Disable driftfx because some JDKs (eg OpenJDK on Ubuntu) don't come with JavaFX
# Ignore ant build, since we are only building native code
 ANT_OPTS="-Dnashorn.args=\"--no-deprecation-warning\"" \
export LWJGL_BUILD_ARCH=arm64
ant -Dplatform.ios=true -Dplatform.macos=false -Dbinding.bullet=false -Dbinding.driftfx=false compile-templates compile compile-native release

# Build LWJGL Android native libraries
"$ANDROID_NDK_HOME/ndk-build"

# Copy debug libs
cp -r obj/local libs_debug
rm -r libs_debug/*/objs*

