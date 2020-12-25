#!/bin/bash
set -e

cd dyncall-1.0


chmod +x configure
dobuild() {
    export CC="$(xcrun -find -sdk ${SDK} cc)"
    export CXX="$(xcrun -find -sdk ${SDK} cxx)"
    export CPP="$(xcrun -find -sdk ${SDK} cpp)"
    export CFLAGS="${HOST_FLAGS} ${OPT_FLAGS}"
    export CXXFLAGS="${HOST_FLAGS} ${OPT_FLAGS}"
    export LDFLAGS="${HOST_FLAGS}"

    ./configure --host=${CHOST} --prefix=${PREFIX} --enable-static --disable-shared

    make clean
    make -j${MAKE_JOBS}
    make install
}

SDK="iphoneos"
ARCH_FLAGS="-arch arm64"
HOST_FLAGS="${ARCH_FLAGS} -miphoneos-version-min=8.0 -isysroot $(xcrun -sdk ${SDK} --show-sdk-path)"
CHOST="arm-apple-darwin"
PREFIX="${HOME}/DEVICE_ARM64"
dobuild

# rm -rf ios_arm64_build
# mkdir ios_arm64_build
# cd ios_arm64_build

# cmake -G Xcode -B build \
#     -DCMAKE_SYSTEM_NAME=iOS \
#     -DCMAKE_Swift_COMPILER_FORCED=true \
#     -DCMAKE_OSX_DEPLOYMENT_TARGET=11.0 \
#     -DCMAKE_C_FLAGS="-no-integrated-as" ..
