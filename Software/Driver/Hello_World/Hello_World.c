#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/platform_device.h>
#include <linux/miscdevice.h>
#include <asm/uaccess.h>
#include <asm/io.h>

#define COMPATIBLE	"xlnx,zynq-7000"
#define NAME		"Hello-World"

// Some informations about this module
MODULE_AUTHOR("Daniel Kampert");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello World example driver");
MODULE_ALIAS(NAME);

// Module matching table
static struct of_device_id Amba_of_match[] = {
	{	.name = NAME, 	
		.compatible = COMPATIBLE, 
	},
	{}
};

// Description of the module
static struct platform_driver Platform_driver = {
	.probe = Module_probe,
	.remove = Module_remove,
	.driver = {
		.name = NAME,
		.owner = THIS_MODULE,
		.of_match_table = Amba_of_match,
	},
};

static int Module_probe(struct platform_device* pdev)
{
	// Devicetree öffnen
	Device = platform_get_resource(pdev, IORESOURCE_MEM, 0);

	printk("Load platform driver...\n");

	return 0;
}

static int Module_remove(struct platform_device *pdev)
{
	printk("Remove module...\n");

	return 0;
}

static int Module_Init(void)
{
        int Status = 0x00;

	Status = platform_driver_probe(&Platform_driver, &Module_probe);

	if(Status < 0)
	{
		printk(KERN_ALERT "Platform Driver probe failed!\n");
		return -1;
	}

        return Status;
}

static void Module_Exit(void)
{
	printk("Unregister LED_Device\n");
}

// Check the device tree for hardware informations
MODULE_DEVICE_TABLE(of, Amba_of_match);

// Register module to kernel
module_init(Module_Init);

// Unregister module from kernel
module_exit(Module_Exit);
