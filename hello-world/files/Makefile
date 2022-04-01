
PWD=$(shell pwd)
obj-m:=hello-world.o

all:
	$(MAKE) -C $(KERNEL_SRC) M=$(PWD) modules

module_install:
	$(MAKE) -C $(KERNEL_SRC) M=$(PWD) modules_install

clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(PWD) clean
