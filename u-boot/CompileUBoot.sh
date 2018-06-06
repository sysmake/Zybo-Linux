#!/bin/bash

cd ${ZYBO_DIR}/u-boot/u-boot-xlnx

make ARCH=${ARCH} CROSS_COMPILE=${CROSS_COMPILE} zynq_zybo_config
make ARCH=${ARCH} CROSS_COMPILE=${CROSS_COMPILE}

# Copy u-boot and configuration
cp u-boot ../../build/u-boot.elf
cp ../uEnv.txt ../../build/uEnv.txt

cd ${ZYBO_DIR}
