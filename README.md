# Zybo-Linux

Work in progress!

## What is this?
This is a private repository with a full linux project for the Digilent Zybo Board. 
In this repository you will find all neccessary files to compile and run a linux on your Zybo.

Please check the wiki for some more detailed informations.

## Files in this repository
  * build : Output directory for all generated files.

    | File               | Description                  |
    |:------------------:|:----------------------------:|
    | uImage             | Compiled Kernel              | 
    | devicetree.dtb     | Compiled device tree         |
    | BOOT.bin           | Compiled bitstream and FSBL  |
    | u-boot.elf         | Compiled u-boot bootloader   |

  * Boot : All files to generate the BOOT.bin file
  * DeviceTree : Complete device tree for the hardware and xilinx device tree Generator. 
		 Please  take a look at [GitHub](https://github.com/Xilinx/device-tree-xlnx) for more informations.
  * Kernel : Linux kernel from Xilinx. 
	     Please take a look at [GitHub](https://github.com/Xilinx/linux-xlnx) for more informations.
  * Qemu : Qemu virtual machine with start script.
   	   Please  take a look at [GitHub](https://github.com/Xilinx/qemu) for more informations.
  * rootfs : Filesystems for the linux
  * SDCard : Copy of a working SD-Card.
  * SDK : Used SDK (including cross compiler) for the whole project.
  * Software : Some software examples.
  * u-boot : u-Boot from Xilinx. 
 	     Please take a look at [GitHub](https://github.com/Xilinx/u-boot-xlnx) for more informations.
  * Vivado : Vivado project for hardware configuration.
  * PrepareSystem : Configuration script for the system to install all neccessary packets and setup yocto.
  * uEnv.txt : Settings for u-boot.
  * PrepareSystem.sh : Use this script to setup the project to your system. It will install all necessary packages and environment variables.

## History

| Version   | Description                | Date      |
|:---------:|:--------------------------:|:---------:|
| 1.0       | Initial release            |           | 
| 2.0       | Reworked and new release   |           |

