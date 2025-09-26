Simple Linux OS with BusyBox and glibc
This project provides the scripts and instructions to build a minimal Linux-based operating system from source. It uses the Linux kernel and the BusyBox utility suite compiled against the GNU C Library (glibc). The final OS image is run in the QEMU emulator.

Prerequisites
Before you begin, you'll need a Linux environment with the following tools installed. On a Debian-based system (like Ubuntu), you can install them with apt-get.

Build Essentials: build-essential, make, gcc

Kernel Compilation Tools: bison, flex, libssl-dev, libncurses-dev

QEMU Emulator: qemu-system-x86

File System Tools: cpio

Download Tool: wget

sudo apt-get update
sudo apt-get install -y build-essential make gcc bison flex libssl-dev libncurses-dev qemu-system-x86 cpio wget

File Structure
build.sh: The main script that automates the entire build process.

init.sh: The init script that runs as PID 1 inside the OS. It mounts necessary filesystems and starts a shell.

README.md: This file.

.gitignore: Specifies which files to ignore for version control.

build/: This directory will be created by the build.sh script to store downloaded sources, compiled binaries, and the final OS components.

How to Build and Run
The entire process is automated. Just run the build.sh script:

chmod +x build.sh
./build.sh

The script will perform the following steps:

Create Build Directories: Sets up a build directory to keep everything organized.

Download Sources: Downloads the latest stable Linux kernel and BusyBox source code.

Build Linux Kernel:

Configures the kernel with a minimal defconfig.

Compiles the kernel bzImage. This can take a significant amount of time.

Build BusyBox:

Configures BusyBox to be statically linked. This makes it self-contained and avoids the need to manage shared libraries in our simple OS.

Compiles and installs BusyBox into a directory that will become our initial ramdisk (initramfs).

Create Initramfs:

Creates a minimal root filesystem structure (/bin, /sbin, /etc, /proc, /sys, /usr/bin, /usr/sbin).

Copies the compiled BusyBox executable.

Creates symbolic links for all the applets provided by BusyBox.

Adds the init.sh script, which will be the first process started by the kernel.

Packages this directory into a cpio archive, which the kernel will use as its initial root filesystem in memory.

Run with QEMU:

The script will automatically launch QEMU, booting the compiled kernel with the generated initramfs.

After Running
If the build is successful, a QEMU window will open, and you will see the kernel booting. After a few seconds, you'll be dropped into a shell prompt (/ #), which is running from BusyBox inside your own minimal OS!

You can type commands like ls, pwd, echo, and ps to interact with your system.

To exit the QEMU emulator, simply close the window or press Ctrl+A then X in the terminal where you ran the build script.

Customization
Kernel Configuration: You can modify the kernel configuration by running make menuconfig inside the build/linux-* directory and then re-running the ./build.sh script.

BusyBox Configuration: Similarly, you can customize the tools included in BusyBox by running make menuconfig in the build/busybox-* directory.