#ifndef _ASM_X86_MMU_H
#define _ASM_X86_MMU_H

#include <linux/spinlock.h>
#include <linux/mutex.h>

/*
 * The x86 doesn't have a mmu context, but
 * we put the segment information here.
 */
typedef struct {
	void *ldt;
	int size;
	struct mutex lock;
	void *vdso;
} mm_context_t;

void leave_mm(int cpu);

#endif /* _ASM_X86_MMU_H */
