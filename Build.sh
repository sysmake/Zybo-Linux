#!/bin/bash

##### Project settings ####
export BOOTLOADER=FSBL
export DESIGNNAME=ProcessingSystem
export PROJECTNAME=ZyboLinux
export DEVICETREE=Bootargs.dts
export VIVADOVERSION=2016.4
export CROSS_COMPILE=arm-xilinx-linux-gnueabi-
###########################

#### Colors #####
Red="\033[0;31m"
Green="\033[0;32m"
Reset="\033[0m"
Yellow="\033[0;33m"
#################

# Bif file
export ZYBO_BIF=Zybo.bif

# Current dir
export ZYBO_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Export the architecture
export ARCH=arm

# Add u-boot to path
export PATH=$PATH:$ZYBO_DIR/u-boot/u-boot-xlnx/tools

# Source vivado settings
source /opt/Xilinx/Vivado/$VIVADOVERSION/settings64.sh

if [ $1 == "-install" ]
	then
		echo -e ${Yellow}"Install packages..."${Reset}
		sudo apt-get update
		sudo apt-get -y install build-essential automake libncurses5 libncursesw5 git libgtk2.0-0:i386 libxtst6:i386 gtk2-engines-murrine:i386 lib32stdc++6 libxt6:i386 
		sudo apt-get -y install libdbus-glib-1-2:i386 libasound2:i386 openjdk-7-jre gawk bison flex zlib1g-dev tofrodos libstdc++6:i386 libncurses5:i386 gcc
		sudo apt-get -y install libssl-dev device-tree-compiler
		sudo apt-get -y install linux-kernel-headers kernel-package
		sudo apt-get -y install make git-core ncurses-dev
		sudo apt-get -y install gcc-arm*
		sudo apt-get -y install linux-source
		sudo apt-get -y install libncurses5-dev
		sudo apt-get -y install libncursesw5-dev
		sudo apt-get -y install libncurses5-dbg
		sudo apt-get -y install u-boot-tools lzop
		sudo apt-get -y install openssh-server vim diffstat texinfo chrpath libsdl1.2-dev
		sudo apt-get -y install lib32z1 lib32ncurses5 lib32bz2-1.0
		sudo apt-get -y install libgmp3-dev libmpfr-dev libx11-6 libx11-dev libmpc-dev libncursesw5-dbg zlibc

		# Add run permissions to the scrips
		sudo chmod +x Kernel/CompileKernel.sh
		sudo chmod +x u-boot/CompileUBoot.sh
		sudo chmod +x Boot/CompileBoot.sh

		# Get the sources
		echo -e ${Yellow}"Fetch sources from git..."${Reset}
		cd Kernel
		git clone https://github.com/Xilinx/linux-xlnx.git
		cd ..

		cd u-boot
		git clone https://github.com/Xilinx/u-boot-xlnx.git
		cd ..

		cd DeviceTree
		git clone https://github.com/Xilinx/device-tree-xlnx
		cd ..

elif [ $1 == "-compile" ]
	then	
		# Create the bif file
		if [ -e $ZYBO_BIF ]
		then
			echo -e ${Red}"Zybo.bif already exist! Please remove."${Reset}
		else
			echo -e ${Yellow}"Create bif file..."${Reset}
			echo "image : {" >> Boot/$ZYBO_BIF
			echo "        [bootloader]$ZYBO_DIR/Vivado/$PROJECTNAME/${PROJECTNAME}.sdk/$BOOTLOADER/Debug/${BOOTLOADER}.elf" >> Boot/$ZYBO_BIF
			echo "	$ZYBO_DIR/Vivado/$PROJECTNAME/${PROJECTNAME}.sdk/${DESIGNNAME}_wrapper_hw_platform_0/${DESIGNNAME}_wrapper.bit" >> Boot/$ZYBO_BIF
			echo "	$ZYBO_DIR/build/u-boot.elf" >> Boot/$ZYBO_BIF
			echo "}" >> Boot/$ZYBO_BIF
		fi

		# Run the scrips
		echo -e ${Yellow}"Compile u-boot..."${Reset}
		u-boot/CompileUBoot.sh
		echo -e ${Yellow}"Compile Kernel..."${Reset}
		Kernel/CompileKernel.sh
		echo -e ${Yellow}"Generate boot file..."${Reset}
		Boot/CompileBoot.sh

elif [ $1 == "-example" ]
	then
		echo -e	 ${Yellow}"Copy example project to SD-Card..."${Reset}
		cp SDCard/boot/* /media/$USER/boot/
		cp -R SDCard/root/* /media/$USER/root/

elif [ $1 == "-yocto" ]
	then
		# Install Yocto
		if [ -e Yocto ]
		then
			echo -e ${Yellow}"Download yocto sources..."${Reset}
			mkdir Yocto
			cd Yocto
			git clone -b dizzy git://git.yoctoproject.org/poky
			cd poky
			git clone git://git.yoctoproject.org/meta-xilinx
		fi
fi

export LANG="en_US.UTF-8"
export LC_CTYPE="en_US.UTF-8" 
export LC_NUMERIC="en_US.UTF-8"

