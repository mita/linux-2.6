#ifndef _ASM_GENERIC_BITOPS_MINIX_LE_H_
#define _ASM_GENERIC_BITOPS_MINIX_LE_H_

#include <asm-generic/bitops/le.h>

#define minix_test_and_set_bit(nr,addr)	\
	__test_and_set_le_bit((nr), (unsigned long *)(addr))
#define minix_set_bit(nr,addr)		\
	__set_le_bit((nr), (unsigned long *)(addr))
#define minix_test_and_clear_bit(nr,addr) \
	__test_and_clear_le_bit((nr), (unsigned long *)(addr))
#define minix_test_bit(nr,addr)		\
	test_le_bit((nr), (unsigned long *)(addr))
#define minix_find_first_zero_bit(addr,size) \
	find_first_zero_le_bit((unsigned long *)(addr), (size))

#endif /* _ASM_GENERIC_BITOPS_MINIX_LE_H_ */
