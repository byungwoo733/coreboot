ifeq ($(CONFIG_SOC_AMD_COMMON),y)

cpu_incs-y += $(src)/soc/amd/common/cache_as_ram.inc

romstage-y += heapmanager.c

ramstage-y += amd_late_init.c
ramstage-y += amd_pci_util.c
ramstage-y += heapmanager.c
ramstage-$(CONFIG_SPI_FLASH) += spi.c

endif