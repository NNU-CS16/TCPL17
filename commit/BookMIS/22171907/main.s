	.file	"main.c"
	.section	.rodata
.LC0:
	.string	"# \350\276\223\345\205\245ISBN #\357\274\232"
.LC1:
	.string	"%s"
.LC2:
	.string	"!!! \346\234\252\346\211\276\345\210\260 !!!"
	.align 8
.LC3:
	.string	"======\345\233\276\344\271\246\345\205\250\351\203\250\344\277\241\346\201\257======"
	.align 8
.LC4:
	.string	"======\345\233\276\344\271\246\347\273\237\350\256\241\346\212\245\350\241\250======"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, %eax
	call	load
	movq	%rax, -88(%rbp)
	movl	$0, -92(%rbp)
.L17:
	movl	$0, %eax
	call	menu
	call	getchar
	movb	%al, -93(%rbp)
	call	getchar
	cmpb	$113, -93(%rbp)
	jne	.L2
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	save
	nop
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L19
	jmp	.L20
.L2:
	movsbl	-93(%rbp), %eax
	subl	$97, %eax
	cmpl	$20, %eax
	ja	.L4
	movl	%eax, %eax
	movq	.L6(,%rax,8), %rax
	jmp	*%rax
	.section	.rodata
	.align 8
	.align 4
.L6:
	.quad	.L5
	.quad	.L4
	.quad	.L7
	.quad	.L8
	.quad	.L4
	.quad	.L4
	.quad	.L4
	.quad	.L4
	.quad	.L9
	.quad	.L4
	.quad	.L4
	.quad	.L4
	.quad	.L4
	.quad	.L10
	.quad	.L4
	.quad	.L11
	.quad	.L4
	.quad	.L12
	.quad	.L4
	.quad	.L4
	.quad	.L13
	.text
.L9:
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movq	-88(%rbp), %rax
	movq	%rax, -80(%rbp)
	leaq	-64(%rbp), %rdx
	movq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	searchisbn
	movq	%rax, -72(%rbp)
	cmpq	$0, -72(%rbp)
	jne	.L14
	movl	$.LC2, %edi
	call	puts
	jmp	.L16
.L14:
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	bputs
	jmp	.L16
.L10:
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	searchnam
	jmp	.L16
.L5:
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	searchaut
	jmp	.L16
.L7:
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	insert
	movq	%rax, -88(%rbp)
	jmp	.L16
.L13:
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	update
	movq	%rax, -88(%rbp)
	jmp	.L16
.L8:
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	delete
	movq	%rax, -88(%rbp)
	jmp	.L16
.L11:
	movl	$.LC3, %edi
	call	puts
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	list
	jmp	.L16
.L12:
	movl	$.LC4, %edi
	call	puts
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	call	report
	jmp	.L16
.L4:
	movl	$0, %eax
	call	err
.L16:
	jmp	.L17
.L20:
	call	__stack_chk_fail
.L19:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC5:
	.string	"*************@@@@@@@@@@@@************"
	.align 8
.LC6:
	.string	"#                                   #"
	.align 8
.LC7:
	.string	"#    ========\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237=======    #"
	.align 8
.LC8:
	.string	"#  (i)    \346\214\211ISBN\346\237\245\346\211\276\344\271\246\347\233\256            #"
	.align 8
.LC9:
	.string	"#  (n)    \346\214\211\344\271\246\345\220\215\346\237\245\346\211\276\344\271\246\347\233\256            #"
	.align 8
.LC10:
	.string	"#  (a)    \346\214\211\344\275\234\350\200\205\346\237\245\346\211\276\344\271\246\347\233\256            #"
	.align 8
.LC11:
	.string	"#  (c)    \346\267\273\345\212\240\345\233\276\344\271\246\346\235\241\347\233\256              #"
	.align 8
.LC12:
	.string	"#  (u)    \344\277\256\346\224\271\345\233\276\344\271\246\346\235\241\347\233\256              #"
	.align 8
.LC13:
	.string	"#  (d)    \345\210\240\351\231\244\345\233\276\344\271\246\346\235\241\347\233\256              #"
	.align 8
.LC14:
	.string	"#  (p)    \346\211\223\345\215\260\346\211\200\346\234\211\345\233\276\344\271\246\346\235\241\347\233\256          #"
	.align 8
.LC15:
	.string	"#  (r)    \346\230\276\347\244\272\345\233\276\344\271\246\347\273\237\350\256\241\346\212\245\350\241\250          #"
	.align 8
.LC16:
	.string	"#  (q)    \351\200\200\345\207\272\347\263\273\347\273\237                  #"
	.align 8
.LC17:
	.string	"*************~~~~~~~~~~~~************"
.LC18:
	.string	"# \350\276\223\345\205\245\345\221\275\344\273\244 #: "
	.text
	.globl	menu
	.type	menu, @function
menu:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$.LC5, %edi
	call	puts
	movl	$.LC6, %edi
	call	puts
	movl	$.LC7, %edi
	call	puts
	movl	$.LC6, %edi
	call	puts
	movl	$.LC8, %edi
	call	puts
	movl	$.LC9, %edi
	call	puts
	movl	$.LC10, %edi
	call	puts
	movl	$.LC11, %edi
	call	puts
	movl	$.LC12, %edi
	call	puts
	movl	$.LC13, %edi
	call	puts
	movl	$.LC14, %edi
	call	puts
	movl	$.LC15, %edi
	call	puts
	movl	$.LC16, %edi
	call	puts
	movl	$.LC6, %edi
	call	puts
	movl	$.LC17, %edi
	call	puts
	movl	$.LC18, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	menu, .-menu
	.section	.rodata
.LC19:
	.string	"!!! Error Command !!!"
	.text
	.globl	err
	.type	err, @function
err:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$.LC19, %edi
	call	puts
	movl	$-1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	err, .-err
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
