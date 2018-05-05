obj-m += Hello_World.o

# Current dir
PWD  := $(shell pwd)

# Kernel sources
KDIR := ${ZYBO_DIR}/Kernel/linux-xlnx

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	make -C $(KDIR) SUBDIRS=$(PWD) clean
