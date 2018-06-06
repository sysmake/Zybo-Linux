#!/bin/bash

cd ${ZYBO_DIR}/Kernel/linux-xlnx

make ARCH=${ARCH} distclean
make ARCH=${ARCH} xilinx_zynq_defconfig
make ARCH=${ARCH} menuconfig

# Compile kernel
make ARCH=${ARCH} CROSS_COMPILE=${CROSS_COMPILE} UIMAGE_LOADADDR=0x8000 uImage

# Copy kernel
cp arch/arm/boot/uImage ../../build/uImage

# Change to current directory
cd ${ZYBO_DIR}
