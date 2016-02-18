# sample_platform_bus_driver

This is a sample code for Linux platform bus device driver.

# How to Use

Get the Linux kernel source and extract to /usr/src/linux.

* ex) apt-get install linux-source
* ex) wget https://cdn.kernel.org/pub/linux/kernel/v4.x/linux-x.y.z.tar.xz

Build Linux kernel.

    # cd /usr/src/linux
    # make

Build this sample.

    $ cd sample_platform_bus_driver
    $ make
    make ARCH=x86_64 CROSS_COMPILE= -C /usr/src/linux M=/home/user/sample_platform_bus_driver LDDINC=/home/user/sample_platform_bus_driver modules
    make[1]: Entering directory '/usr/src/linux'
      CC [M]  /home/katsuhiro/share/projects/c/sample_platform_bus_driver/plat-device.o
      CC [M]  /home/katsuhiro/share/projects/c/sample_platform_bus_driver/plat-utils.o
      ...
      CC      /home/katsuhiro/share/projects/c/sample_platform_bus_driver/sample-plat-drv.mod.o
      LD [M]  /home/katsuhiro/share/projects/c/sample_platform_bus_driver/sample-plat-drv.ko
    make[1]: Leaving directory '/usr/src/linux'

Do insmod and rmmod.

    # insmod sample-plat-drv.ko
    # insmod sample-plat-dev1.ko
    sample_platform: loaded.
    sample_platform: probed.
    
    # rmmod sample-plat-drv
    sample_platform: removed.
    # rmmod sample-plat-dev1
    sample_platform: unloaded.
