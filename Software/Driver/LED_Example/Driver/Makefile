obj-m += LED_Example.o

# Architecture
ARCH := arm

# Current dir
PWD  := $(shell pwd)

# Yocto generated cross compiler
CROSS_COMPILE := /home/daniel/Schreibtisch/Git/Zybo_Linux/Software/CrossCompiler/usr/bin/armv7a-vfp-neon-poky-linux-gnueabi/arm-poky-linux-gnueabi-

# Kernel sources
KDIR := /home/daniel/Schreibtisch/Git/Zybo_Linux/linux-xlnx

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	make -C $(KDIR) SUBDIRS=$(PWD) clean
