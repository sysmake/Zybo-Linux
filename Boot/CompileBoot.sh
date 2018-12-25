#!/bin/bash

# Create BOOT.bin
${PATH_VIVADO}/SDK/${VER_VIVADO}/bin/bootgen -w -image ${ZYBO_DIR}/Boot/${ZYBO_BIF} -o i ${ZYBO_DIR}/build/BOOT.bin

# Create device tree
${ZYBO_DIR}/Kernel/linux-xlnx/scripts/dtc/dtc -I dts -O dtb -o ${ZYBO_DIR}/build/devicetree.dtb ${ZYBO_DIR}/Vivado/${PROJECTNAME}/${PROJECTNAME}.sdk/device_tree_bsp_0/${DEVICETREE}.dts

