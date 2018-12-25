#!/bin/bash

${ZYBO_DIR}/Qemu/qemu/aarch64-softmmu/qemu-system-aarch64 \
	-M arm-generic-fdt-7series \
	-machine linux=on \
	-serial /dev/null \
	-serial mon:stdio \
	-display none \
	-kernel ${ZYBO_DIR}/build/uImage \
	-dtb ${ZYBO_DIR}/build/devicetree.dtb \
	--initrd ${ZYBO_DIR}/rootfs/${ROOTFS_QEMU}
