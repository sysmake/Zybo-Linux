# Zybo-Linux

## What is this?
This is a private repository with a full linux project for the Digilent Zybo Board. 
In this repository you will find all neccessary files to compile and run a linux on your Zybo.

Please check the [wiki](https://github.com/Kampi/Zybo-Linux/wiki) for some more detailed informations.

## Project directory structure
  * build : Output directory for all generated files. This directory contains:

    | File               | Description                  |
    |:------------------:|:----------------------------:|
    | uImage             | Compiled Kernel              | 
    | devicetree.dtb     | Compiled device tree         |
    | BOOT.bin           | Compiled bitstream and FSBL  |
    | u-boot.elf         | Compiled u-boot bootloader   |
    | uEnv.txt		 | Settings for u-boot          |

  * Boot : All files to generate the BOOT.bin file
  * DeviceTree : Complete device tree for the hardware and xilinx device tree Generator. 
		 Please  take a look at [GitHub](https://github.com/Xilinx/device-tree-xlnx) for more informations.
  * Kernel : Linux kernel from Xilinx. 
	     Please take a look at [GitHub](https://github.com/Xilinx/linux-xlnx) for more informations.
  * Qemu : Qemu virtual machine with start script.
   	   Please  take a look at [GitHub](https://github.com/Xilinx/qemu) for more informations.
  * rootfs : Filesystems for the Zybo Linux
  * Example : Some example projects.
  * SDK : Used SDK (including cross compiler) for the whole project.
  * Software : Some software examples.
  * u-boot : u-Boot from Xilinx. 
 	     Please take a look at [GitHub](https://github.com/Xilinx/u-boot-xlnx) for more informations.
  * Vivado : Vivado project for hardware configuration.
  * Yocto : Basic directory for a new yocto build
  * Build.sh : Use this script to setup your system or to create a new linux project.

## History

| Version   | Description                    | Date       |
|:---------:|:------------------------------:|:----------:|
| 1.0       | Initial release                |            | 
| 2.0       | Reworked and new release       | 08.12.2017 |
| 2.1       | Fix some bugs with device tree | 08.03.2018 |

## Maintainer
- [Daniel Kampert](DanielKampert@kampis-elektroecke.de)
