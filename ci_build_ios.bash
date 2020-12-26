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
# ./build_dyncall.bash

cd ..

ant -version

# Disable driftfx because some JDKs (eg OpenJDK on Ubuntu) don't come with JavaFX
# Disable GLFW because we use our own GLFW dummy implementation.
# Ignore ant build, since we are only building native code
 ANT_OPTS="-Dnashorn.args=\"--no-deprecation-warning\"" \
export LWJGL_BUILD_ARCH=arm64
ant -Dplatform.ios=true -Dplatform.macos=false -Dbinding.bullet=false -Dbinding.driftfx=false  -Dbinding.glfw=false compile-templates compile compile-native release

# Copy debug libs
cp -r obj/local libs_debug
rm -r libs_debug/*/objs*

