#!/bin/bash
set -e


# wget http://beanshell.org/bsh-2.0b5.jar
# mv bsh-2.0b5.jar $ANT_HO
# ls *

# Get dyncall-1.0
wget -nv -O dyncall.tar.gz "https://www.dyncall.org/r1.0/dyncall-1.0-iossdk-11.1-universal.tgz"
tar xf dyncall.tar.gz

mkdir -p bin/libs/native/ios/arm64/org/lwjgl
cp dyncall-1.0-release/lib/* bin/libs/native/ios/arm64/org/lwjgl/

ant -version

# Disable driftfx because some JDKs (eg OpenJDK on Ubuntu) don't come with JavaFX
# Disable GLFW because we use our own GLFW dummy implementation.
# Ignore ant build, since we are only building native code

# TODO Re-enable jemalloc, OpenAL
 ANT_OPTS="-Dnashorn.args=\"--no-deprecation-warning\"" \
export LWJGL_BUILD_ARCH=arm64
# set to 3.3.0 to have arm64 binaries
ant -Dplatform.ios=true -Dplatform.macos=false \
  -Dbinding.assimp=false -Dbinding.bgfx=false \
  -Dbinding.bullet=false -Dbinding.driftfx=false \
  -Dbinding.glfw=false -Dbinding.jemalloc=false \
  -Dbinding.nanovg=false -Dbinding.openal=true \
  -Dbinding.openvr=false -Dbinding.opus=false \
  -Dbinding.rpmalloc=false -Dbinding.shaderc=false \
  -Dbinding.vma=true -Dbinding.vulkan=true \
  -Dbuild.type="release/3.3.0" \
  compile-templates compile compile-native

# Release
cp -R bin/libs/native/ios/arm64 ios_libs

