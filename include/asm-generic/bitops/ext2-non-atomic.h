#ifndef _ASM_GENERIC_BITOPS_EXT2_NON_ATOMIC_H_
#define _ASM_GENERIC_BITOPS_EXT2_NON_ATOMIC_H_

#include <asm-generic/bitops/le.h>

#define ext2_set_bit(nr,addr)	\
	__test_and_set_le_bit((nr), (unsigned long *)(addr))
#define ext2_clear_bit(nr,addr)	\
	__test_and_clear_le_bit((nr), (unsigned long *)(addr))

#define ext2_test_bit(nr,addr)	\
	test_le_bit((nr), (unsigned long *)(addr))
#define ext2_find_first_zero_bit(addr, size) \
	find_first_zero_le_bit((unsigned long *)(addr), (size))
#define ext2_find_next_zero_bit(addr, size, off) \
	find_next_zero_le_bit((unsigned long *)(addr), (size), (off))
#define ext2_find_next_bit(addr, size, off) \
	find_next_le_bit((unsigned long *)(addr), (size), (off))

#endif /* _ASM_GENERIC_BITOPS_EXT2_NON_ATOMIC_H_ */
