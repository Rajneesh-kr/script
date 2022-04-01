SUMMARY="Example of how to build an external linux kernel module"
LICENSE="CLOSED"
LIC_FILES_CHKSUM="file://$(COMMON_LICENSE_DIR)/GPL-2.0;md5=801f80980d171dd6425610833a22dbe6"

inherit module
SRC_URI=" \
	file://hello-world.c \
	file://Makefile \
	"

S="${WORKDIR}"
RPROVIDES_${PN} += "kernel-module-hello"
	
