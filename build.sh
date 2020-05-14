#!/bin/bash
mkdir out/
make O=out/ ARCH=arm harmony_defconfig
make -j$(nproc --all) O=out/ ARCH=arm CROSS_COMPILE="ccache $PWD/arm-eabi-4.8/bin/arm-eabi-"
