	.file	"fix_set_diag.c"
	.text
	.globl	fix_set_diag
	.def	fix_set_diag;	.scl	2;	.type	32;	.endef
	.seh_proc	fix_set_diag
fix_set_diag:
	.seh_endprologue
	movq	%rcx, %rax
	addq	$1088, %rcx
.L2:
	movl	%edx, (%rax)
	addq	$68, %rax
	cmpq	%rcx, %rax
	jne	.L2
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$1064, %rsp
	.seh_stackalloc	1064
	.seh_endprologue
	call	__main
	leaq	32(%rsp), %rcx
	movl	$9, %edx
	call	fix_set_diag
	nop
	addq	$1064, %rsp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
