	.file	"menu.c"
	.text
	.globl	insert
	.type	insert, @function
insert:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -48(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	$0, -40(%rbp)
	cmpq	$0, -40(%rbp)
	je	.L4
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	$0, 48(%rax)
	jmp	.L3
.L6:
	movq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -16(%rbp)
.L4:
	movq	-8(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jbe	.L5
	movq	-16(%rbp), %rax
	movq	48(%rax), %rax
	testq	%rax, %rax
	jne	.L6
.L5:
	movq	-8(%rbp), %rax
	cmpq	-16(%rbp), %rax
	ja	.L7
	movq	-40(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jne	.L8
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	jmp	.L9
.L8:
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 48(%rax)
.L9:
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 48(%rax)
	jmp	.L3
.L7:
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 48(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 48(%rax)
.L3:
	movq	-40(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	insert, .-insert
	.section	.rodata
.LC0:
	.string	"\345\233\276\344\271\246\347\274\226\345\217\267:%s\n"
.LC1:
	.string	"\345\233\276\344\271\246\345\220\215\347\247\260:%s\n"
.LC2:
	.string	"\344\275\234\350\200\205\345\220\215\345\255\227:%s\n"
.LC3:
	.string	"\345\233\276\344\271\246\344\273\267\346\240\274:%.21f\n"
.LC4:
	.string	"\346\232\202\346\227\240\346\255\244\345\233\276\344\271\246"
	.text
	.globl	search
	.type	search, @function
search:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L12
.L14:
	movq	-8(%rbp), %rax
	addq	$30, %rax
	cmpq	-32(%rbp), %rax
	jne	.L13
	movq	-8(%rbp), %rax
	addq	$30, %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	addq	$20, %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC3(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -12(%rbp)
.L13:
	movq	-8(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -8(%rbp)
.L12:
	cmpq	$0, -8(%rbp)
	jne	.L14
	movl	$0, -12(%rbp)
	cmpl	$0, -12(%rbp)
	je	.L15
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
.L15:
	movq	-24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	search, .-search
	.globl	delete
	.type	delete, @function
delete:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	jmp	.L18
.L20:
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
.L18:
	cmpq	$0, -24(%rbp)
	je	.L19
	movq	-24(%rbp), %rax
	addq	$30, %rax
	cmpq	-32(%rbp), %rax
	je	.L20
.L19:
	movq	$0, -24(%rbp)
	cmpq	$0, -24(%rbp)
	je	.L21
	movl	$0, %eax
	jmp	.L22
.L21:
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L23
.L26:
	movq	-8(%rbp), %rax
	addq	$30, %rax
	cmpq	-32(%rbp), %rax
	jne	.L24
	movq	-8(%rbp), %rax
	movq	48(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 48(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	jmp	.L25
.L24:
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
.L25:
	movq	-16(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -8(%rbp)
.L23:
	cmpq	$0, -8(%rbp)
	jne	.L26
	movq	-24(%rbp), %rax
.L22:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	delete, .-delete
	.section	.rodata
.LC5:
	.string	"\346\227\240\350\256\260\345\275\225"
	.align 8
.LC6:
	.string	"/n\345\233\276\344\271\246\347\274\226\345\217\267/t\345\233\276\344\271\246\345\220\215\347\247\260/t\345\233\276\344\271\246\345\215\225\344\273\267/t\345\233\276\344\271\246\344\275\234\350\200\205/n"
.LC7:
	.string	"%s/t/t%s/t/t%.2lf/t/t%s/n\n"
	.text
	.globl	output
	.type	output, @function
output:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L28
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	jmp	.L27
.L28:
	leaq	.LC6(%rip), %rdi
	call	puts@PLT
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L30
.L31:
	movq	-8(%rbp), %rax
	leaq	20(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	40(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	-8(%rbp), %rsi
	addq	$30, %rsi
	movq	%rdx, -32(%rbp)
	movsd	-32(%rbp), %xmm0
	movq	%rax, %rdx
	leaq	.LC7(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -8(%rbp)
.L30:
	cmpq	$0, -8(%rbp)
	jne	.L31
.L27:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	output, .-output
	.section	.rodata
.LC8:
	.string	"r"
.LC9:
	.string	"file.csv"
.LC10:
	.string	"\346\211\223\345\274\200\346\226\207\344\273\266\345\244\261\350\264\245"
.LC11:
	.string	"%s %s %s %lf"
	.text
	.globl	dq
	.type	dq, @function
dq:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -128(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -120(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -136(%rbp)
	movq	-136(%rbp), %rax
	movq	$0, 48(%rax)
	leaq	.LC8(%rip), %rsi
	leaq	.LC9(%rip), %rdi
	call	fopen@PLT
	movq	%rax, -112(%rbp)
	cmpq	$0, -112(%rbp)
	jne	.L34
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, %edi
	call	exit@PLT
.L35:
	movl	$56, %edi
	call	malloc@PLT
	movq	%rax, -120(%rbp)
	movq	-120(%rbp), %rax
	leaq	-64(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	movq	-120(%rbp), %rax
	leaq	20(%rax), %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcpy@PLT
	movq	-120(%rbp), %rax
	leaq	30(%rax), %rdx
	leaq	-104(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcpy@PLT
	movsd	-144(%rbp), %xmm0
	movq	-136(%rbp), %rax
	movsd	%xmm0, 40(%rax)
	movq	-136(%rbp), %rax
	movq	-120(%rbp), %rdx
	movq	%rdx, 48(%rax)
	movq	-120(%rbp), %rax
	movq	%rax, -136(%rbp)
.L34:
	leaq	-144(%rbp), %rdi
	leaq	-104(%rbp), %rsi
	leaq	-96(%rbp), %rcx
	leaq	-64(%rbp), %rdx
	movq	-112(%rbp), %rax
	movq	%rdi, %r9
	movq	%rsi, %r8
	leaq	.LC11(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	cmpl	$-1, %eax
	jne	.L35
	movq	-136(%rbp), %rax
	movq	$0, 48(%rax)
	movq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	movq	-128(%rbp), %rax
	movq	48(%rax), %rax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L37
	call	__stack_chk_fail@PLT
.L37:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	dq, .-dq
	.section	.rodata
.LC12:
	.string	"\345\233\276\344\271\246\346\200\273\346\225\260\344\270\272%d\n"
	.align 8
.LC13:
	.string	"\344\273\267\346\240\274\346\234\200\350\264\265\344\270\272%lf   \344\271\246\345\220\215:%s\n"
	.align 8
.LC14:
	.string	"\344\273\267\346\240\274\346\234\200\344\275\216\344\270\272%lf   \344\271\246\345\220\215:%s\n"
.LC15:
	.string	"\344\275\234\350\200\205\346\225\260\344\270\272:%d"
	.text
	.globl	count
	.type	count, @function
count:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movl	$0, -88(%rbp)
	movl	$0, %eax
	call	dq
	movq	%rax, -80(%rbp)
	movl	$0, %eax
	call	dq
	movq	%rax, -72(%rbp)
	movl	$0, %eax
	call	dq
	movq	%rax, -64(%rbp)
	jmp	.L39
.L40:
	addl	$1, -88(%rbp)
	movq	-80(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -80(%rbp)
.L39:
	cmpq	$0, -80(%rbp)
	jne	.L40
	movl	-88(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-72(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -40(%rbp)
	jmp	.L41
.L45:
	movq	-72(%rbp), %rax
	movsd	40(%rax), %xmm1
	movq	-40(%rbp), %rax
	movsd	40(%rax), %xmm0
	ucomisd	%xmm1, %xmm0
	jbe	.L59
	movq	-40(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-72(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -72(%rbp)
	jmp	.L41
.L59:
	movq	-72(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-40(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -40(%rbp)
.L41:
	cmpq	$0, -40(%rbp)
	je	.L44
	cmpq	$0, -72(%rbp)
	jne	.L45
.L44:
	movq	-56(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rdx, %rsi
	movq	%rax, -104(%rbp)
	movsd	-104(%rbp), %xmm0
	leaq	.LC13(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movq	-64(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -32(%rbp)
	jmp	.L46
.L50:
	movq	-64(%rbp), %rax
	movsd	40(%rax), %xmm0
	movq	-32(%rbp), %rax
	movsd	40(%rax), %xmm1
	ucomisd	%xmm1, %xmm0
	jbe	.L60
	movq	-32(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-64(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -64(%rbp)
	jmp	.L46
.L60:
	movq	-64(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-32(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -32(%rbp)
.L46:
	cmpq	$0, -32(%rbp)
	je	.L49
	cmpq	$0, -64(%rbp)
	jne	.L50
.L49:
	movq	-48(%rbp), %rdx
	movq	-48(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rdx, %rsi
	movq	%rax, -104(%rbp)
	movsd	-104(%rbp), %xmm0
	leaq	.LC14(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	call	dq
	movq	%rax, -24(%rbp)
	movl	$0, %eax
	call	dq
	movq	%rax, -8(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L51
.L56:
	movq	-24(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L52
.L55:
	movq	-16(%rbp), %rax
	leaq	20(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	$20, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L53
	movq	-16(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L52
.L53:
	addl	$1, -84(%rbp)
	jmp	.L54
.L52:
	cmpq	$0, -16(%rbp)
	jne	.L55
.L54:
	movq	-24(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -24(%rbp)
.L51:
	cmpq	$0, -24(%rbp)
	jne	.L56
	movl	-88(%rbp), %eax
	subl	-84(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC15(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	count, .-count
	.section	.rodata
	.align 8
.LC16:
	.string	"\346\254\242\350\277\216\350\277\233\345\205\245\345\233\276\344\271\246\351\246\206\351\207\214\347\263\273\347\273\237"
	.align 8
.LC17:
	.string	"------>\345\220\221\345\257\274---->\346\226\260\345\273\272\345\233\276\344\271\246\345\272\223"
	.align 8
.LC18:
	.string	"\346\263\250\346\204\217\357\274\232\345\275\223\350\276\223\345\205\245\347\274\226\345\217\267\344\270\2720\346\227\266\357\274\214\350\277\233\345\205\245\344\270\213\344\270\200\346\255\245"
.LC19:
	.string	"cls"
.LC20:
	.string	"\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237"
.LC21:
	.string	"[1]:\346\237\245\350\257\242\345\233\276\344\271\246"
.LC22:
	.string	"[2]:\346\267\273\345\212\240\345\233\276\344\271\246"
.LC23:
	.string	"[3]:\345\210\240\351\231\244\345\233\276\344\271\246"
.LC24:
	.string	"[4]:\351\201\215\345\216\206\345\233\276\344\271\246"
.LC25:
	.string	"[5]:\347\273\237\350\256\241\345\233\276\344\271\246"
	.align 8
.LC26:
	.string	"\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223"
.LC27:
	.string	"0:\351\200\200\345\207\272"
.LC28:
	.string	"\350\257\267\351\200\211\346\213\251<0~5>:"
.LC29:
	.string	"%d"
.LC30:
	.string	"1.\346\214\211\347\274\226\345\217\267\346\237\245\350\257\242"
.LC31:
	.string	"0.\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225"
.LC32:
	.string	"\350\257\267\351\200\211\346\213\251:"
.LC33:
	.string	"\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\345\233\276\344\271\246\347\274\226\345\217\267:"
.LC34:
	.string	"%s"
.LC35:
	.string	"\347\233\270\345\205\263\344\277\241\346\201\257\345\246\202\344\270\213:"
	.align 8
.LC36:
	.string	"\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223"
.LC37:
	.string	"\350\257\267\350\276\223\345\205\245\345\233\276\344\271\246\345\220\215\347\247\260:"
.LC38:
	.string	"\350\257\267\350\276\223\345\205\245\345\233\276\344\271\246\347\274\226\345\217\267:"
.LC39:
	.string	"\350\257\267\350\276\223\345\205\245\345\215\225\344\273\267:"
.LC40:
	.string	"%lf"
.LC41:
	.string	"\350\257\267\350\276\223\345\205\245\344\275\234\350\200\205\345\220\215\345\255\227:"
.LC42:
	.string	"\346\255\244\347\274\226\345\217\267\345\233\276\344\271\246\345\267\262\345\255\230\345\234\250"
.LC43:
	.string	"\346\267\273\345\212\240\345\233\276\344\271\246\346\210\220\345\212\237!"
.LC44:
	.string	"\350\276\223\345\205\245\345\210\240\351\231\244\345\233\276\344\271\246\347\274\226\345\217\267:"
.LC45:
	.string	"\345\210\240\351\231\244\345\233\276\344\271\246\346\210\220\345\212\237!"
.LC46:
	.string	"\350\260\242\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$160, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$56, -144(%rbp)
	movl	$1, -148(%rbp)
	movl	$1, -140(%rbp)
	leaq	.LC16(%rip), %rdi
	call	puts@PLT
	leaq	.LC17(%rip), %rdi
	call	puts@PLT
	leaq	.LC18(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	call	dq
	leaq	.LC19(%rip), %rdi
	call	system@PLT
.L77:
	leaq	.LC20(%rip), %rdi
	call	puts@PLT
	movl	$10, %edi
	call	putchar@PLT
	movl	$10, %edi
	call	putchar@PLT
	leaq	.LC21(%rip), %rdi
	call	puts@PLT
	leaq	.LC22(%rip), %rdi
	call	puts@PLT
	leaq	.LC23(%rip), %rdi
	call	puts@PLT
	leaq	.LC24(%rip), %rdi
	call	puts@PLT
	leaq	.LC25(%rip), %rdi
	call	puts@PLT
	leaq	.LC26(%rip), %rdi
	call	puts@PLT
	leaq	.LC27(%rip), %rdi
	call	puts@PLT
	leaq	.LC28(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-152(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC29(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-152(%rbp), %eax
	cmpl	$5, %eax
	ja	.L62
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L64(%rip), %rax
	movl	(%rdx,%rax), %eax
	movslq	%eax, %rdx
	leaq	.L64(%rip), %rax
	addq	%rdx, %rax
	jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L64:
	.long	.L63-.L64
	.long	.L65-.L64
	.long	.L66-.L64
	.long	.L67-.L64
	.long	.L68-.L64
	.long	.L69-.L64
	.text
.L65:
	leaq	.LC19(%rip), %rdi
	call	system@PLT
	leaq	.LC20(%rip), %rdi
	call	puts@PLT
	leaq	.LC30(%rip), %rdi
	call	puts@PLT
	leaq	.LC31(%rip), %rdi
	call	puts@PLT
	leaq	.LC32(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-156(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC29(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-156(%rbp), %eax
	cmpl	$1, %eax
	jne	.L70
	leaq	.LC33(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC34(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC35(%rip), %rdi
	call	puts@PLT
	movq	-128(%rbp), %rdx
	leaq	-104(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	search
	movq	%rax, -128(%rbp)
	jmp	.L62
.L70:
	movl	-156(%rbp), %eax
	testl	%eax, %eax
	jmp	.L62
.L66:
	leaq	.LC19(%rip), %rdi
	call	system@PLT
	leaq	.LC36(%rip), %rdi
	call	puts@PLT
	leaq	.LC37(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC34(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC38(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC34(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC39(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-136(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC40(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC41(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC34(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$10, %edi
	call	putchar@PLT
	movl	-144(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -120(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -120(%rbp)
	jmp	.L72
.L75:
	movq	-120(%rbp), %rax
	leaq	30(%rax), %rdx
	leaq	-104(%rbp), %rax
	cmpq	%rax, %rdx
	jne	.L73
	leaq	.LC42(%rip), %rdi
	call	puts@PLT
	movl	$0, -148(%rbp)
	jmp	.L74
.L73:
	movq	-120(%rbp), %rax
	movq	48(%rax), %rax
	movq	%rax, -120(%rbp)
.L72:
	cmpq	$0, -120(%rbp)
	jne	.L75
.L74:
	cmpl	$0, -148(%rbp)
	je	.L80
	movl	-144(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	leaq	-64(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	movq	-112(%rbp), %rax
	leaq	30(%rax), %rdx
	leaq	-104(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcpy@PLT
	movsd	-136(%rbp), %xmm0
	movq	-112(%rbp), %rax
	movsd	%xmm0, 40(%rax)
	movq	-112(%rbp), %rax
	leaq	20(%rax), %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcpy@PLT
	movq	-112(%rbp), %rdx
	movq	-128(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	insert
	movq	%rax, -128(%rbp)
	leaq	.LC43(%rip), %rdi
	call	puts@PLT
	jmp	.L80
.L67:
	leaq	.LC19(%rip), %rdi
	call	system@PLT
	leaq	.LC36(%rip), %rdi
	call	puts@PLT
	leaq	.LC44(%rip), %rdi
	call	puts@PLT
	leaq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC34(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	-104(%rbp), %rdx
	movq	-128(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	delete
	movq	%rax, -128(%rbp)
	leaq	.LC45(%rip), %rdi
	call	puts@PLT
	jmp	.L62
.L68:
	leaq	.LC19(%rip), %rdi
	call	system@PLT
	leaq	.LC36(%rip), %rdi
	call	puts@PLT
	movq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	output
	jmp	.L62
.L69:
	leaq	.LC19(%rip), %rdi
	call	system@PLT
	leaq	.LC36(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	call	count
	jmp	.L62
.L63:
	leaq	.LC19(%rip), %rdi
	call	system@PLT
	leaq	.LC36(%rip), %rdi
	call	puts@PLT
	leaq	.LC46(%rip), %rdi
	call	puts@PLT
	jmp	.L62
.L80:
	nop
.L62:
	movl	-152(%rbp), %eax
	testl	%eax, %eax
	jne	.L77
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L79
	call	__stack_chk_fail@PLT
.L79:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 6.3.0-12ubuntu2) 6.3.0 20170406"
	.section	.note.GNU-stack,"",@progbits
