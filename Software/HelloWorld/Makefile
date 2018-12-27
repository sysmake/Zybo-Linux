
CC	= ${DIR_RPOJECT}/SDK/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-gcc
SYSROOT = ${DIR_RPOJECT}/SDK/sysroots/cortexa9hf-neon-poky-linux-gnueabi

ARCH		= arm
TYPE		= armv7-a
CPU		= cortex-a9
FPU		= neon
FLOAT_ABI	= hard

all:
	$(CC) HelloWorld.c -march=${TYPE} -m${ARCH} -mfpu=${FPU} -mfloat-abi=${FLOAT_ABI} -mcpu=${CPU} --sysroot=$(SYSROOT)
