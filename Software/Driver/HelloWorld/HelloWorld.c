#include <asm/io.h>
#include <asm/uaccess.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/miscdevice.h>
#include <linux/platform_device.h>

#define COMPATIBLE	"xlnx,zynq-7000"
#define NAME		"Hello-World"

static int __init LKM_Init(void);
static void __exit LKM_Exit(void);
static int Module_Probe(struct platform_device* pdev);
static int Module_Remove(struct platform_device* pdev);

// Some informations about this module
MODULE_AUTHOR("Daniel Kampert");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello world example module");
MODULE_ALIAS(NAME);
MODULE_VERSION("1.0");

// Module matching table
static struct of_device_id MatchTable[] = {
	{	.name = NAME,
		.compatible = COMPATIBLE,
	},
	{}
};

// Description of the module
static struct platform_driver Platform_driver = {
	.probe = Module_Probe,
	.remove = Module_Remove,
	.driver = {
		.name = NAME,
		.owner = THIS_MODULE,
		.of_match_table = MatchTable,
	},
};

int Module_Probe(struct platform_device* pdev)
{
	printk("Probe module...\n");

	return 0;
}

int Module_Remove(struct platform_device *pdev)
{
	printk("Remove module...\n");

	return 0;
}

int __init LKM_Init(void)
{
        int Status = platform_driver_probe(&Platform_driver, &Module_Probe);

	if(Status < 0)
	{
		printk(KERN_ALERT "Platform driver probe failed!\n");
		printk(KERN_ALERT "Status: %d\n", Status);
		return -1;
	}

	printk("Register kernel module\n");

        return Status;
}

void __exit LKM_Exit(void)
{
	printk("Unregister kernel module\n");
}

// Check the device tree for hardware informations
MODULE_DEVICE_TABLE(of, MatchTable);

// Register module to kernel
module_init(LKM_Init);

// Unregister module from kernel
module_exit(LKM_Exit);
