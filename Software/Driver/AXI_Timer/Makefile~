# Zu erzeugende Datei
obj-m += AXI_Timer.o

# Aktuelles Verzeichnis
PWD  := $(shell pwd)

ARCH := arm
ROOT_DIR := /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Zybo/Zybo_Linux

CROSS_COMPILE := $(ROOT_DIR)/Software/CrossCompiler/usr/bin/armv7a-vfp-neon-poky-linux-gnueabi/arm-poky-linux-gnueabi-
KDIR := $(ROOT_DIR)/linux-xlnx

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules

Debug:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules

Release:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules

cleanDebug:
	make ARCH=$(ARCH) -C $(KDIR) SUBDIRS=$(PWD) clean

cleanRelease:
	make ARCH=$(ARCH) -C $(KDIR) SUBDIRS=$(PWD) clean
