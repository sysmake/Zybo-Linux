#!/bin/bash

# Used cross compiler
CROSS_COMPILE=$ZYBO_DIR/SDK/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-
TOOLS=$ZYBO_DIR/Kernel/linux-xlnx/tools

cd u-boot-xlnx

export PATH=TOOLS:$PATH

make ARCH=arm CROSS_COMPILE=$CROSS_COMPILE zynq_zybo_config
make ARCH=arm CROSS_COMPILE=$CROSS_COMPILE

# Copy u-boot and configuration
cp u-boot ../../build/u-boot.elf
cp ../uEnv.txt ../../build/uEnv.txt

# Change to current directory
cd ..
