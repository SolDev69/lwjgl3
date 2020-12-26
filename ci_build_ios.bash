#!/bin/bash
set -e


# wget http://beanshell.org/bsh-2.0b5.jar
# mv bsh-2.0b5.jar $ANT_HO
# ls *

mkdir dyncall
cd dyncall

# Get dyncall-1.0
wget -nv -O dyncall.tar.gz "https://www.dyncall.org/r1.0/dyncall-1.0-iossdk-11.1-universal.tgz"
tar xf dyncall.tar.gz
cd ..
mkdir -p bin/libs/native/ios/arm64/org/lwjgl
mv dyncall/lib/* bin/libs/native/ios/arm64/org/lwjgl/

ant -version

# Disable driftfx because some JDKs (eg OpenJDK on Ubuntu) don't come with JavaFX
# Disable GLFW because we use our own GLFW dummy implementation.
# Ignore ant build, since we are only building native code
 ANT_OPTS="-Dnashorn.args=\"--no-deprecation-warning\"" \
export LWJGL_BUILD_ARCH=arm64
ant -Dplatform.ios=true -Dplatform.macos=false -Dbinding.bullet=false -Dbinding.driftfx=false  -Dbinding.glfw=false -Dbinding.rpmalloc=false compile-templates compile compile-native release

# Copy debug libs
cp -r obj/local libs_debug
rm -r libs_debug/*/objs*

