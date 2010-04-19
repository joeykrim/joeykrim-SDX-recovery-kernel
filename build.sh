#!/bin/bash
#joeykrim recovery kernel build file
#simple - tyep sh buildk.sh and watch the kernel build!

CROSS_COMPILE=/home/moment/toolchain/uClibc/buildroot-2010.02/output/staging/usr/bin/arm-linux-uclibcgnueabi-
CROSS_INCLUDE=/home/moment/toolchain/uClibc/buildroot-2010.02/output/staging/usr/include

PWD=`pwd`

cd li*
make clean
cd ..

make -j8 ARCH=arm CFLAGS_KERNEL="-Os -I${CROSS_INCLUDE}" CROSS_COMPILE=$CROSS_COMPILE LINUX_VERSION="2.6.27" -C linux-2.6.27 zImage

#make -j8 CROSS_COMPILE=$CROSS_COMPILE KDIR="${PWD}/linux-2.6.27" PRJROOT=$PWD BOARD_NAME="instinctq" FLASH_ONENAND=y BOARD_REVISION="01" LINUX_VERSION=2.6.27 MODULES_DPRAM=y MODULES_CAMERA=y MODULES_TA=n MODULES_WLAN=y MODULES_VIBETONZ=y MODULES_MULTIMEDIA=y MODULES_PARAM=y MODULES_BTGPIO=y -C modules
