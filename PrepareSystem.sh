#!/bin/bash

# Current dir
BASEDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

export ZYBO_DIR=$BASEDIR

# Add u-boot to path
export PATH=$PATH:$BASEDIR/u-boot/u-boot-xlnx/tools

# Export the cross compiler 
export CROSS_COMPILE=$BASEDIR/SDK/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-

if [ $1 == "-install" ]
	then
		sudo apt-get update
		sudo apt-get -y install build-essential automake libncurses5 libncursesw5 git libgtk2.0-0:i386 libxtst6:i386 gtk2-engines-murrine:i386 lib32stdc++6 libxt6:i386 libdbus-glib-1-2:i386 libasound2:i386 openjdk-7-jre gawk bison flex zlib1g-dev tofrodos libstdc++6:i386 libncurses5:i386 gcc
		sudo apt-get -y install libssl-dev device-tree-compiler
		sudo apt-get -y install linux-kernel-headers kernel-package
		sudo apt-get -y install make git-core ncurses-dev
		sudo apt-get -y install gcc-arm*
		sudo apt-get -y install linux-source
		sudo apt-get -y install libncurses5-dev
		sudo apt-get -y install libncurses5-dbg
		sudo apt-get -y install u-boot-tools lzop
		sudo apt-get -y install openssh-server vim diffstat texinfo chrpath libsdl1.2-dev
		sudo apt-get -y install mingw32
		sudo apt-get -y install lib32z1 lib32ncurses5 lib32bz2-1.0
		sudo apt-get -y install libgmp3-dev libmpfr-dev libx11-6 libx11-dev libmpc-dev libncursesw5-dbg zlibc

		sudo apt-get upgrade
		sudo apt-get autoremove
elif [ $1 == "-compile" ]
	then
		sudo chmod +x u-boot/CompileUBoot.sh
		sudo chmod +x Kernel/CompileKernel.sh
		sudo chmod +x Boot/CompileBoot.sh
fi

# Yocto aufsetzen
#mkdir Yocto
#cd Yocto
#git clone -b dizzy git://git.yoctoproject.org/poky
#cd poky
#git clone -b dizzy git://git.yoctoproject.org/meta-xilinx

export LANG="en_US.UTF-8"
export LC_CTYPE="en_US.UTF-8" 
export LC_NUMERIC="en_US.UTF-8"

