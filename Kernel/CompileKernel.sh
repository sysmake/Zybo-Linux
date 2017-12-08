#!/bin/bash

# Used cross compiler
CROSS_COMPILE=$ZYBO_DIR/SDK/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-

cd linux-xlnx

make ARCH=arm distclean
# make ARCH=arm xilinx_zynq_defconfig
make ARCH=arm menuconfig

# Compile kernel
make ARCH=arm CROSS_COMPILE=$CROSS_COMPILE UIMAGE_LOADADDR=0x8000 uImage

# Copy kernel
cp arch/arm/boot/uImage ../../build/uImage

# Change to current directory
cd ..
