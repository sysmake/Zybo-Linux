#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/proc_fs.h>
#include <linux/platform_device.h>
#include <linux/interrupt.h>
#include <linux/of_address.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>
#include <linux/of_irq.h>

#include <asm/uaccess.h>
#include <asm/io.h>

/******************************Module informations******************************/

#define Compatible	"xlnx,xps-timer-1.00.a"
#define Device_Name	"xilinx-timer"
#define Module_Name	"AXI_Timer"

MODULE_AUTHOR("Daniel Kampert");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Treiber fuer AXI-Timer IP-Core");
MODULE_ALIAS(Module_Name);

/******************************************************************************/

volatile u32 ClockFrequency = 0;
volatile u32 IsDual = 0;
volatile u32 CountWidth = 0;
volatile int *Basisadresse = NULL;

struct resource Device;
struct proc_dir_entry *Proc_Eintrag_Parent;
struct proc_dir_entry *Proc_Eintrag_Child;

/******************************Function prototypes*******************************/

static int Timer_probe(struct platform_device *pdev);
static int Timer_remove(struct platform_device *pdev);

static int proc_Timer_open(struct inode* inode, struct file *file);
static int proc_Timer_close(struct inode* inode, struct file *file);
static ssize_t proc_Timer_ReadFrequency(struct file *file, char* buffer, size_t count, loff_t* ppos);

static irqreturn_t GPIO_IRQ(int irq, void* dev_id);

/******************************************************************************/

// Beim Laden des Moduls gleicht der Kernel den Devicetree mit
// den Einträgen aus der Matching-Tabelle ab.
static const struct of_device_id Amba_of_match[] =
{
	{
		.compatible = Compatible,
	},
	{}
};

// Dateioperationen für die proc-Datei
static const struct file_operations proc_Timer_Frequency_operations =
{
	.read = proc_Timer_ReadFrequency,
	.open = proc_Timer_open,
	.release = proc_Timer_close
};

// Hier wird der Plattformtreiber beschrieben und die Funktionen festgelegt
static struct platform_driver Timer_platform_driver =
{
	.probe = Timer_probe,
	.remove = Timer_remove,
	.driver =
	{
		.name = "timer",
		.owner = THIS_MODULE,
		.of_match_table = Amba_of_match,
	},
};

/******************************************************************************/

static int proc_Timer_open(struct inode *inode, struct file *file)
{
	// Used by - Counter erhöhen
	try_module_get(THIS_MODULE);

	return 0;
}

static int proc_Timer_close(struct inode *inode, struct file *file)
{
	// Used by - Counter verringern
	module_put(THIS_MODULE);

	return 0;
}

static ssize_t proc_Timer_ReadFrequency(struct file* file, char* buffer, size_t length, loff_t* ppos)
{
    char Data[16];
    snprintf(Data, sizeof(Data), "%u", 100000000);
	return copy_to_user(buffer, Data, sizeof(Data));;
}

static ssize_t proc_GPIO_write(struct file* file, const char* Buffer, size_t count, loff_t* ppos)
{
	u32 Status;

	printk("Count: %i\n", (unsigned int)count);
	//Status = simple_strtoul(Buffer, NULL, 0);
	printk("Status: %u\n", Status);

	//*Basisadresse = Status;

	return count;
}

// Diese Funktion wird aufgerufen, sobald der Kernel einen
// kompatiblen Eintrag im Devicetree gefunden hat
static int Timer_probe(struct platform_device *pdev)
{
	printk(KERN_INFO "AXI-Timer platform driver loaded...\n");

	// Devicetree auslesen
	ClockFrequency = be32_to_cpup(of_get_property(pdev->dev.of_node, "clock-frequency", NULL));
    IsDual = be32_to_cpup(of_get_property(pdev->dev.of_node, "xlnx,one-timer-only", NULL));
    CountWidth = be32_to_cpup(of_get_property(pdev->dev.of_node, "xlnx,count-width", NULL));

	of_address_to_resource(pdev->dev.of_node, 0, &Device);
	printk(KERN_INFO "Starting address: 0x%02X\n", (unsigned int)Device.start);
	printk(KERN_INFO "Final address: 0x%02X\n", (unsigned int)Device.end);
	printk(KERN_INFO "Width: 0x%02X\n", (unsigned int)((Device.end)-(Device.start)));
	printk(KERN_INFO "Name: %s\n", Device.name);
	printk(KERN_INFO "Flags: 0x%02X\n", (unsigned int)Device.flags);
	printk(KERN_INFO "Clock-Frequency: %u\n", ClockFrequency);
	printk(KERN_INFO "One Timer only: %u\n", IsDual);
	printk(KERN_INFO "Count width: %u\n", CountWidth);

	// Speicherbereich maskieren
	Basisadresse = ioremap(Device.start, (Device.end)-(Device.start));
	if(Basisadresse == NULL)
	{
		printk(KERN_INFO "Unable to map memory region!\n");
		return -1;
	}

    // /proc Eintraege erstellen
    Proc_Eintrag_Parent = proc_mkdir(Module_Name, NULL);
    proc_create("ClockFrequency", 0644, Proc_Eintrag_Parent, &proc_Timer_Frequency_operations);

    if(!(IsDual))
    {
        Proc_Eintrag_Child = proc_mkdir("PWM", Proc_Eintrag_Parent);
        proc_create("Frequency", 0644, Proc_Eintrag_Child, &proc_Timer_Frequency_operations);
        proc_create("DutyCycle", 0644, Proc_Eintrag_Child, &proc_Timer_Frequency_operations);
    }

    Proc_Eintrag_Child = proc_mkdir("Timer", Proc_Eintrag_Parent);

	return 0;
}

static int Timer_remove(struct platform_device *pdev)
{

	// /proc Datei entfernen
	remove_proc_entry(Module_Name, NULL);

	// Speicherbereich freigeben
	iounmap(Basisadresse);
	release_mem_region(Device.start, (Device.end)-(Device.start));

	printk(KERN_INFO "Remove AXI-Timer platform driver...\n");

	return 0;
}

MODULE_DEVICE_TABLE(of, Amba_of_match);

// Modul beim Kernel anmelden
module_platform_driver(Timer_platform_driver);
