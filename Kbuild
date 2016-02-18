
CONFIG_SAMPLE_PLATFORM_DRIVER = m
CONFIG_SAMPLE_PLATFORM_DEVICE = m
# For debug
CONFIG_SAMPLE_PLATFORM_DEBUG = y

ifeq ($(CONFIG_SAMPLE_PLATFORM_DEBUG),y)
  DBGFLAGS = -O1 -g -DCONFIG_SAMPLE_PLATFORM_DEBUG
endif

EXTRA_CFLAGS += $(DBGFLAGS)
EXTRA_CFLAGS += -I$(LDDINC)


# Sample platform bus driver
sample-plat-drv-objs := plat-driver.o plat-utils.o
obj-$(CONFIG_SAMPLE_PLATFORM_DRIVER) += sample-plat-drv.o

# Sample platform bus device
sample-plat-dev1-objs := plat-device.o plat-utils.o
obj-$(CONFIG_SAMPLE_PLATFORM_DEVICE) += sample-plat-dev1.o
