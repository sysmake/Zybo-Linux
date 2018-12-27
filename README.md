# Zybo-Linux

## Table of Contents

- [Zybo-Linux](#zybo-linux)
  - [Table of Contents](#table-of-contents)
  - [About](#about)
  - [Supported Versions](#supported-versions)
  - [Project directory structure](#project-directory-structure)
  - [History](#history)
  - [Maintainer](#maintainer)

## About

> This project is already under construction!

This is a private repository with a full Linux project for the Digilent Zybo Board.
In this repository, you will find all the necessary files to compile and run a Linux on your Zybo.

Please check the [wiki](https://gitlab.com/Kampi/Zybo-Linux/wikis/home) or write an e-mail to <DanielKampert@kampis-elektroecke.de> if you need some more detailed information.

## Supported Versions

| **Software** | **Version** |
|-------------------|----------------------------|
| Ubuntu | 16.04 LTS |
| Linux kernel | 4.6.0-xilinx-v2016.3 |
| u-boot | xilinx-v2017.4 |
| Device tree | xilinx-v2018.3 |
| Vivado | 2018.2 |

## Project directory structure

- build : Output directory for all generated files. This directory contains:

    | **File**             | **Description**                 |
    |------------------|----------------------------|
    | uImage             | Compiled Kernel              |
    | devicetree.dtb     | Compiled device tree         |
    | BOOT.bin           | Compiled bitstream and FSBL  |
    | u-boot.elf         | Compiled u-boot bootloader   |
    | uEnv.txt | Settings for u-boot          |

- Boot : All files to generate the `BOOT.bin` file.
- DeviceTree : Complete device tree for the hardware and Xilinx device tree Generator. Please take a look at [GitHub](https://github.com/Xilinx/device-tree-xlnx) for more information.
- Kernel : Linux kernel from Xilinx. Please take a look at [GitHub](https://github.com/Xilinx/linux-xlnx) for more information.
- Qemu : Qemu virtual machine with start script. Please take a look at [GitHub](https://github.com/Xilinx/qemu) for more information.
- rootfs : File systems for the Zybo Linux.
- Example : Some example projects.
- SDK : SDK (including cross compiler) for the whole project.
- Software : Some software examples.
- u-boot : u-Boot from Xilinx. Please take a look at [GitHub](https://github.com/Xilinx/u-boot-xlnx) for more information.
- Vivado : Vivado project with hardware configuration.
- Yocto : This directory contains additional files for using Yocto.
- Project.sh : Use this script to handle the project easily.

## History

| Version   | Description                    | Date       |
|:---------:|------------------------------|:----------:|
| 1.0       | Initial release                |            |
| 2.0       | Reworked and new release       | 08.12.2017 |
| 2.1       | Fix some bugs with device tree | 08.03.2018 |
| 2.2       | Add examples with working ethernet  | 05.05.2018 |

## Maintainer

- [Daniel Kampert](DanielKampert@kampis-elektroecke.de)
