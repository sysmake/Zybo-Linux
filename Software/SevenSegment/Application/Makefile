EXECUTABLE	= main

ARCH		= arm
TYPE		= armv7-a
CPU		= cortex-a9
FPU		= neon
FLOAT_ABI	= hard
CFLAGS		=
LIB_PATH	=
LIBS		=

CC		= ../../../SDK/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-gcc
SYSROOT 	= ../../../SDK/sysroots/cortexa9hf-neon-poky-linux-gnueabi

SOURCES		= $(wildcard *.c)
BINS 		= $(SOURCES:.c=.o)

all: ${EXECUTABLE}

${EXECUTABLE}: ${BINS}
	${CC} ${CFLAGS} -march=${TYPE} -m${ARCH} -mfpu=${FPU} -mfloat-abi=${FLOAT_ABI} -mcpu=${CPU} --sysroot=${SYSROOT} $< -o $@

%.o: %.c
	${CC} ${CFLAGS} -march=${TYPE} -m${ARCH} -mfpu=${FPU} -mfloat-abi=${FLOAT_ABI} -mcpu=${CPU} --sysroot=${SYSROOT} -c $<

clean:
	rm *.o ${EXECUTABLE}



