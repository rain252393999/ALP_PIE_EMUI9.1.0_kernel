#ifndef _LINUX_SET_MEMORY_H_
#define _LINUX_SET_MEMORY_H_

/*
 * On this 4.9 arm64 kernel, set_memory_ro/rw/x/nx are provided
 * unconditionally by arch/arm64/mm/pageattr.c (no CONFIG_ARCH_HAS_SET_MEMORY).
 * So we include the arch header directly instead of relying on a Kconfig
 * symbol that does not exist here.
 */
#include <asm/set_memory.h>

#endif /* _LINUX_SET_MEMORY_H_ */
