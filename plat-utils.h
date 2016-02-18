
#ifndef PLAT_UTILS_H__
#define PLAT_UTILS_H__

#include <linux/kernel.h>
#include <linux/version.h>

#define SAMPLE_PLATFORM_DRV_NAME "sample_platform"

#define PRINT_ERR(fmt, args...)  printk(KERN_ERR     SAMPLE_PLATFORM_DRV_NAME ": " fmt, ##args)
#define PRINT_WARN(fmt, args...) printk(KERN_WARNING SAMPLE_PLATFORM_DRV_NAME ": " fmt, ##args)
#define PRINT_INFO(fmt, args...) printk(KERN_NOTICE  SAMPLE_PLATFORM_DRV_NAME ": " fmt, ##args)

#ifdef CONFIG_SAMPLE_PLATFORM_DEBUG
#  define DPRINT(fmt, args...) printk(KERN_NOTICE SAMPLE_PLATFORM_DRV_NAME ": " fmt, ##args)
#else
#  define DPRINT(fmt, args...) no_printk(KERN_NOTICE SAMPLE_PLATFORM_DRV_NAME ": " fmt, ##args)
#endif

#endif /* PLAT_UTILS_H__ */
