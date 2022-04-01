#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>

static int __init init_fxn(void)
{
	printk(KERN_INFO " hello kernel \n");
	return 0;
}

static void __exit exit_fxn(void)
{
	printk(KERN_INFO " bye kernel \n");
}

module_init(init_fxn);
module_exit(exit_fxn);
MODULE_LICENSE("GPL");
