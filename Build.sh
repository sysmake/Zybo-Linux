#!/bin/bash

##### Project settings ####
export BOOTLOADER=FSBL
export DESIGNNAME=ProcessingSystem
export PROJECTNAME=ZyboLinux
export DEVICETREE=Bootargs
export RAMDISK_ROOTFS=arm_ramdisk.image.gz

export VIVADOVERSION=2017.4
export VIVADO_PATH=/opt/Xilinx
export COMPILER=SDK/x86_64-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi
export TARGET_MACHINE=zedboard-zynq7
###########################

export YOCTO_BRANCH=dizzy

#### Colors #####
Red="\033[0;31m"
Green="\033[0;32m"
Reset="\033[0m"
Yellow="\033[0;33m"
Cyan="\033[0;36m"
#################

# Bif file
export ZYBO_BIF=Zybo.bif

# Current dir
export ZYBO_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Export the architecture and the cross compiler
export ARCH=arm
export CROSS_COMPILE=${ZYBO_DIR}/${COMPILER}-

# Add compiler to profile
if ! grep -q "export Zynq_gcc=${CROSS_COMPILE}gcc" ~/.bashrc
	then
		echo "export Zynq_gcc=${CROSS_COMPILE}gcc" >> ~/.bashrc
fi

# Add u-boot to path
export PATH=$PATH:${ZYBO_DIR}/u-boot/u-boot-xlnx/tools

# Source vivado settings
bash -c "source $VIVADO_PATH/Vivado/$VIVADOVERSION/settings64.sh"

if [ $# -eq 1 ] 
	then
		if [ $1 == "-install" ]
			then
				echo -e ${Yellow}"Install packages..."${Reset}
				sudo apt-get update
				sudo apt-get -y install build-essential libncurses5 libncursesw5 git libgtk2.0-0:i386 libxtst6:i386 gtk2-engines-murrine:i386 lib32stdc++6 libxt6:i386 
				sudo apt-get -y install libdbus-glib-1-2:i386 libasound2:i386 openjdk-7-jre gawk tofrodos libstdc++6:i386 libncurses5:i386 gcc
				sudo apt-get -y install libssl-dev device-tree-compiler
				sudo apt-get -y install linux-kernel-headers kernel-package
				sudo apt-get -y install make git-core ncurses-dev
				sudo apt-get -y install gcc-arm*f
				sudo apt-get -y install libglib2.0-dev libgcrypt20-dev zlib1g-dev autoconf automake libtool bison flex
				sudo apt-get -y install linux-source
				sudo apt-get -y install libncurses5-dev
				sudo apt-get -y install libncursesw5-dev
				sudo apt-get -y install libncurses5-dbg
				sudo apt-get -y install u-boot-tools lzop
				sudo apt-get -y install openssh-server vim diffstat texinfo chrpath libsdl1.2-dev
				sudo apt-get -y install lib32z1 lib32ncurses5 lib32bz2-1.0
				sudo apt-get -y install libgmp3-dev libmpfr-dev libx11-6 libx11-dev libmpc-dev libncursesw5-dbg zlibc

				echo -e ${Yellow}"Install python packages..."${Reset}
				sudo pip install --user django==1.6
				sudo pip install South==0.8.4

				# Add run permissions to the scrips
				sudo chmod +x Kernel/CompileKernel.sh
				sudo chmod +x u-boot/CompileUBoot.sh
				sudo chmod +x Boot/CompileBoot.sh
				sudo chmod +x Qemu/StartQemu.sh

				# Get the sources
				echo -e ${Yellow}"Fetch xilinx sources from git..."${Reset}
				cd Kernel
				git clone https://github.com/Xilinx/linux-xlnx.git
				cd ..

				cd u-boot
				git clone https://github.com/Xilinx/u-boot-xlnx.git
				cd ..

				cd DeviceTree
				git clone https://github.com/Xilinx/device-tree-xlnx
				cd ..

				cd Qemu
				git clone git://github.com/Xilinx/qemu.git
				cd qemu
				git submodule update --init dtc
				./configure --target-list="aarch64-softmmu,microblazeel-softmmu" --enable-fdt --disable-kvm --disable-xen
				make
				cd ${ZYBO_DIR}

				# Create build directory
				if [ -e build ]
				then	
					mkdir build
				fi

		elif [ $1 == "-compile" ]
			then	
				# Create the bif file
				if [ -e Boot/$ZYBO_BIF ]
				then
					echo -e ${Red}"Zybo.bif exist! Skip generating..."${Reset}
				else
					echo -e ${Yellow}"Create bif file..."${Reset}
					echo "image : {" >> Boot/${ZYBO_BIF}
					echo "        [bootloader]${ZYBO_DIR}/Vivado/$PROJECTNAME/${PROJECTNAME}.sdk/$BOOTLOADER/Debug/${BOOTLOADER}.elf" >> Boot/${ZYBO_BIF}
					echo "	${ZYBO_DIR}/Vivado/$PROJECTNAME/${PROJECTNAME}.sdk/${DESIGNNAME}_wrapper_hw_platform_0/${DESIGNNAME}_wrapper.bit" >> Boot/${ZYBO_BIF}
					echo "	${ZYBO_DIR}/build/u-boot.elf" >> Boot/${ZYBO_BIF}
					echo "}" >> Boot/${ZYBO_BIF}
				fi

				# Run the scrips
				echo -e ${Yellow}"Compile u-boot..."${Reset}
				u-boot/CompileUBoot.sh
				echo -e ${Yellow}"Compile Kernel..."${Reset}
				Kernel/CompileKernel.sh
				echo -e ${Yellow}"Generate boot file..."${Reset}
				Boot/CompileBoot.sh

		elif [ $1 == "-qemu" ]
			then
				echo -e ${Yellow}"Run qemu..."${Reset}
				${ZYBO_DIR}/Qemu/StartQemu.sh

		elif [ $1 == "-devicetree" ]
			then

				echo -e ${Yellow}"Generate device tree..."${Reset}
				${ZYBO_DIR}/Kernel/linux-xlnx/scripts/dtc/dtc -I dts -O dtb -o ${ZYBO_DIR}/build/devicetree.dtb ${ZYBO_DIR}/Vivado/$PROJECTNAME/$PROJECTNAME.sdk/device_tree_bsp_0/${DEVICETREE}.dts


		elif [ $1 == "-example" ]
			then
				echo -e	 ${Yellow}"Copy example project to SD-Card..."${Reset}
				cp Example/boot/* /media/${USER}/boot/
				cp -R Example/root/* /media/${USER}/root/

		elif [ $1 == "-ramdisk" ]
			then
				echo -e	 ${Yellow}"Copy ram disk example..."${Reset}

				# Copy all files to sd-card and remove bif file
				cp Example/ramdisk/* /media/${USER}/boot/
				rm /media/${USER}/boot/Zybo.bif

		elif [ $1 == "-yocto" ]
			then
				echo -e ${Red}"Under construction!"${Reset}
			
				# Install Yocto
				if [ ! -d "Yocto" ]
					then
						echo -e ${Yellow}"Download yocto sources..."${Reset}
						mkdir Yocto
						cd Yocto
						git clone -b ${YOCTO_BRANCH} git://git.yoctoproject.org/poky
						cd poky
						git clone -b ${YOCTO_BRANCH} git://git.yoctoproject.org/meta-xilinx
				else
					cd Yocto/poky
				fi

				# Change the config files
				bash -c "source oe-init-build-env"

				# Add additional layer
				echo -e ${Yellow}"Add addtional layer..."${Reset}
				if ! grep -q "${ZYBO_DIR}/Yocto/poky/meta-xilinx" build/conf/bblayers.conf
					then
						sed -i "/meta-yocto-bsp/a \  ${ZYBO_DIR}/Yocto/poky/meta-xilinx \\\ " build/conf/bblayers.conf
				fi

				# Setup target machine
				echo -e ${Yellow}"Setup target machine..."${Reset}
				if ! grep -q "MACHINE ?= 'zedboard-zynq7'" build/conf/local.conf
					then
						sed -i "s/MACHINE ??= \"qemux86\"/MACHINE ?= \"${TARGET_MACHINE}\"/" build/conf/local.conf
				fi

				# Add SDK options
				if ! grep -q 'EXTRA_IMAGE_FEATURES = "tools-sdk tools-debug"' build/conf/local.conf
					then
						echo 'EXTRA_IMAGE_FEATURES = "tools-sdk tools-debug"' >> build/conf/local.conf
				fi

				cd build

		elif [ $1 == "-h" ]
			then
				echo
				echo -e	${Cyan} "########################################################################"${Reset}
				echo -e	${Cyan} "# 			${Red}Zybo Linux build script${Cyan}				#"${Reset}
				echo -e	${Cyan} "# Please visit 							#"${Reset}
				echo -e	${Cyan} "#   	-> ${Yellow}https://github.com/Kampi/Zybo-Linux/wiki${Cyan} 			#"${Reset}
				echo -e	${Cyan} "# for additional information, or write an e-mail to: 			#"${Reset}
				echo -e	${Cyan} "# 	-> ${Yellow}DanielKampert@kampis-elektroecke${Cyan}		            	#"${Reset}
				echo -e	${Cyan} "########################################################################"${Reset}
				echo

				echo -e ${Green}"Compile script for Zybo Linux"${Reset}
				echo -e ${Yellow}"Basic options:"${Reset}
				echo -e ${Yellow}"	-install	Prepare your system for linux compilation."${Reset}
				echo -e ${Yellow}"	-compile	Compile a new linux project for Zybo. Please use '-install' at least one time before."${Reset}
				echo -e ${Yellow}"	-qemu		Run a qemu session to emulate the ZYNQ device."${Reset}
				echo -e ${Yellow}"	-devicetree	Compile a new device tree."${Reset}
				echo -e ${Yellow}"	-example	Copy a prebuild example to your SD-Card."${Reset}
				echo -e ${Yellow}"	-ramdisk	Copy a ram disk example to your SD-Card."${Reset}
				echo -e ${Yellow}"	-yocto		Setup the yocto build environment."${Reset}
		else
				echo -e ${Green}"Use '${BASH_SOURCE[0]} -h' for help."${Reset}
		fi
	else
		echo -e ${Yellow}"Build environment ready to use."${Reset}
fi
