
#define pr_fmt(fmt) SAMPLE_PLATFORM_DRV_NAME ": " fmt

#include <linux/module.h>
#include <linux/platform_device.h>

#include "plat-device.h"

static struct platform_device *pdev = NULL;

static int __init sample_platform_device_init(void)
{
	int ret;

	pdev = platform_device_alloc("sample_platform", 0);
	if (pdev == NULL) {
		//error
		return -ENOMEM;
	}

	ret = platform_device_add(pdev);
	if (ret != 0) {
		//error
		platform_device_put(pdev);
		return -ENOMEM;
	}

	pr_info("loaded.\n");

	return 0;
}

static void __exit sample_platform_device_exit(void)
{
	platform_device_del(pdev);

	pr_info("unloaded.\n");
}

module_init(sample_platform_device_init);
module_exit(sample_platform_device_exit);

MODULE_AUTHOR("Katsuhiro Suzuki <katsuhiro@katsuster.net>");
MODULE_DESCRIPTION("Sample platform bus device module");
MODULE_LICENSE("GPL");
