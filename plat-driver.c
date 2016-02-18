
#include <linux/module.h>
#include <linux/platform_device.h>

#include "plat-driver.h"

static int sample_platform_probe(struct platform_device *pdev)
{
	PRINT_INFO("probed.\n");

	return 0;
}

static int sample_platform_remove(struct platform_device *pdev)
{
	PRINT_INFO("removed.\n");

	return 0;
}

static struct platform_driver sample_platform_driver = {
	.probe  = sample_platform_probe,
	.remove = sample_platform_remove,
	.driver = {
		.name   = "sample_platform"
	},
};

module_platform_driver(sample_platform_driver);

MODULE_AUTHOR("Katsuhiro Suzuki <katsuhiro@katsuster.net>");
MODULE_DESCRIPTION("Sample platform bus module");
MODULE_LICENSE("GPL");
