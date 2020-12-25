#!/bin/bash
set -e

cd dyncall-1.0

rm -rf ios_arm64_build
mkdir ios_arm64_build
cd ios_arm64_build

    # -DCMAKE_Swift_COMPILER_FORCED=true \
    
cmake -G Xcode -B build \
    -DCMAKE_SYSTEM_NAME=iOS \
    -DCMAKE_OSX_DEPLOYMENT_TARGET=11.0 \
    -DCMAKE_OSX_ARCHITECTURES=arm64 \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_FLAGS="-no-integrated-as" ..
