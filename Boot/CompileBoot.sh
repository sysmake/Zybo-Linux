#!/bin/bash

# Current vivado version
Version=2016.4

# Create BOOT.bin
/opt/Xilinx/SDK/$Version/bin/bootgen -w -image Zybo.bif -o i $ZYBO_DIR/build/BOOT.bin

# Create device tree
$ZYBO_DIR/Kernel/linux-xlnx/scripts/dtc/dtc -I dts -O dtb -o $ZYBO_DIR/build/devicetree.dtb $ZYBO_DIR/DeviceTree/system.dts

