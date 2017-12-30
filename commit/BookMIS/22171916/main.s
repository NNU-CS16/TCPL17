	.file	"main.c"
	.text
	.globl	insert
	.type	insert, @function
insert:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, 12(%ebp)
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -20(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	$0, 8(%ebp)
	cmpl	$0, 8(%ebp)
	je	.L4
	movl	-12(%ebp), %eax
	movl	%eax, 8(%ebp)
	movl	8(%ebp), %eax
	movl	$0, 100(%eax)
	jmp	.L3
.L6:
	movl	-16(%ebp), %eax
	movl	%eax, -20(%ebp)
	movl	-16(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -16(%ebp)
.L4:
	movl	-12(%ebp), %eax
	cmpl	-16(%ebp), %eax
	jbe	.L5
	movl	-16(%ebp), %eax
	movl	100(%eax), %eax
	testl	%eax, %eax
	jne	.L6
.L5:
	movl	-12(%ebp), %eax
	cmpl	-16(%ebp), %eax
	ja	.L7
	movl	8(%ebp), %eax
	cmpl	-16(%ebp), %eax
	jne	.L8
	movl	-12(%ebp), %eax
	movl	%eax, 8(%ebp)
	jmp	.L9
.L8:
	movl	-20(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%edx, 100(%eax)
.L9:
	movl	-20(%ebp), %eax
	movl	-16(%ebp), %edx
	movl	%edx, 100(%eax)
	jmp	.L3
.L7:
	movl	-16(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%edx, 100(%eax)
	movl	-12(%ebp), %eax
	movl	$0, 100(%eax)
.L3:
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
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
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	movl	$0, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, -16(%ebp)
	jmp	.L12
.L14:
	movl	-16(%ebp), %eax
	addl	$70, %eax
	cmpl	12(%ebp), %eax
	jne	.L13
	movl	-16(%ebp), %eax
	addl	$70, %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	movl	-16(%ebp), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC1
	call	printf
	addl	$16, %esp
	movl	-16(%ebp), %eax
	addl	$50, %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC2
	call	printf
	addl	$16, %esp
	movl	-16(%ebp), %eax
	fldl	92(%eax)
	subl	$4, %esp
	leal	-8(%esp), %esp
	fstpl	(%esp)
	pushl	$.LC3
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$10
	call	putchar
	addl	$16, %esp
	addl	$1, -12(%ebp)
.L13:
	movl	-16(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -16(%ebp)
.L12:
	cmpl	$0, -16(%ebp)
	jne	.L14
	movl	$0, -12(%ebp)
	cmpl	$0, -12(%ebp)
	je	.L15
	subl	$12, %esp
	pushl	$.LC4
	call	puts
	addl	$16, %esp
.L15:
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	search, .-search
	.globl	delete
	.type	delete, @function
delete:
.LFB4:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	jmp	.L18
.L20:
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	8(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, 8(%ebp)
	subl	$12, %esp
	pushl	-12(%ebp)
	call	free
	addl	$16, %esp
.L18:
	cmpl	$0, 8(%ebp)
	je	.L19
	movl	8(%ebp), %eax
	addl	$70, %eax
	cmpl	12(%ebp), %eax
	je	.L20
.L19:
	movl	$0, 8(%ebp)
	cmpl	$0, 8(%ebp)
	je	.L21
	movl	$0, %eax
	jmp	.L22
.L21:
	movl	8(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	8(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -12(%ebp)
	jmp	.L23
.L26:
	movl	-12(%ebp), %eax
	addl	$70, %eax
	cmpl	12(%ebp), %eax
	jne	.L24
	movl	-12(%ebp), %eax
	movl	100(%eax), %edx
	movl	-16(%ebp), %eax
	movl	%edx, 100(%eax)
	subl	$12, %esp
	pushl	-12(%ebp)
	call	free
	addl	$16, %esp
	jmp	.L25
.L24:
	movl	-12(%ebp), %eax
	movl	%eax, -16(%ebp)
.L25:
	movl	-16(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -12(%ebp)
.L23:
	cmpl	$0, -12(%ebp)
	jne	.L26
	movl	8(%ebp), %eax
.L22:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE4:
	.size	delete, .-delete
	.section	.rodata
.LC6:
	.string	"\346\227\240\350\256\260\345\275\225"
	.align 4
.LC7:
	.string	"/n\345\233\276\344\271\246\347\274\226\345\217\267/t\345\233\276\344\271\246\345\220\215\347\247\260/t\345\233\276\344\271\246\345\215\225\344\273\267/t\345\233\276\344\271\246\344\275\234\350\200\205/n"
.LC8:
	.string	"%s/t/t%s/t/t%.2lf/t/t%s/n\n"
	.text
	.globl	output
	.type	output, @function
output:
.LFB5:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	cmpl	$0, 8(%ebp)
	jne	.L28
	subl	$12, %esp
	pushl	$.LC6
	call	puts
	addl	$16, %esp
	jmp	.L27
.L28:
	subl	$12, %esp
	pushl	$.LC7
	call	puts
	addl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	.L30
.L31:
	movl	-12(%ebp), %eax
	leal	50(%eax), %ecx
	movl	-12(%ebp), %eax
	fldl	92(%eax)
	movl	-12(%ebp), %eax
	movl	-12(%ebp), %edx
	addl	$70, %edx
	subl	$8, %esp
	pushl	%ecx
	leal	-8(%esp), %esp
	fstpl	(%esp)
	pushl	%eax
	pushl	%edx
	pushl	$.LC8
	call	printf
	addl	$32, %esp
	movl	-12(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -12(%ebp)
.L30:
	cmpl	$0, -12(%ebp)
	jne	.L31
.L27:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE5:
	.size	output, .-output
	.section	.rodata
.LC9:
	.string	"r"
.LC10:
	.string	"file.csv"
.LC11:
	.string	"\346\211\223\345\274\200\346\226\207\344\273\266\345\244\261\350\264\245"
.LC12:
	.string	"%s %s %s %lf"
	.text
	.globl	dq
	.type	dq, @function
dq:
.LFB6:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$120, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -116(%ebp)
	movl	-116(%ebp), %eax
	movl	%eax, -112(%ebp)
	movl	-116(%ebp), %eax
	movl	%eax, -120(%ebp)
	movl	-120(%ebp), %eax
	movl	$0, 100(%eax)
	subl	$8, %esp
	pushl	$.LC9
	pushl	$.LC10
	call	fopen
	addl	$16, %esp
	movl	%eax, -108(%ebp)
	cmpl	$0, -108(%ebp)
	jne	.L34
	subl	$12, %esp
	pushl	$.LC11
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$1
	call	exit
.L35:
	subl	$12, %esp
	pushl	$104
	call	malloc
	addl	$16, %esp
	movl	%eax, -112(%ebp)
	movl	-112(%ebp), %eax
	subl	$8, %esp
	leal	-62(%ebp), %edx
	pushl	%edx
	pushl	%eax
	call	strcpy
	addl	$16, %esp
	movl	-112(%ebp), %eax
	leal	50(%eax), %edx
	subl	$8, %esp
	leal	-82(%ebp), %eax
	pushl	%eax
	pushl	%edx
	call	strcpy
	addl	$16, %esp
	movl	-112(%ebp), %eax
	leal	70(%eax), %edx
	subl	$8, %esp
	leal	-90(%ebp), %eax
	pushl	%eax
	pushl	%edx
	call	strcpy
	addl	$16, %esp
	fldl	-104(%ebp)
	movl	-120(%ebp), %eax
	fstpl	92(%eax)
	movl	-120(%ebp), %eax
	movl	-112(%ebp), %edx
	movl	%edx, 100(%eax)
	movl	-112(%ebp), %eax
	movl	%eax, -120(%ebp)
.L34:
	subl	$8, %esp
	leal	-104(%ebp), %eax
	pushl	%eax
	leal	-90(%ebp), %eax
	pushl	%eax
	leal	-82(%ebp), %eax
	pushl	%eax
	leal	-62(%ebp), %eax
	pushl	%eax
	pushl	$.LC12
	pushl	-108(%ebp)
	call	__isoc99_fscanf
	addl	$32, %esp
	cmpl	$-1, %eax
	jne	.L35
	movl	-120(%ebp), %eax
	movl	$0, 100(%eax)
	subl	$12, %esp
	pushl	-108(%ebp)
	call	fclose
	addl	$16, %esp
	movl	-116(%ebp), %eax
	movl	100(%eax), %eax
	movl	-12(%ebp), %ecx
	xorl	%gs:20, %ecx
	je	.L37
	call	__stack_chk_fail
.L37:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE6:
	.size	dq, .-dq
	.section	.rodata
.LC13:
	.string	"\345\233\276\344\271\246\346\200\273\346\225\260\344\270\272%d\n"
	.align 4
.LC14:
	.string	"\344\273\267\346\240\274\346\234\200\350\264\265\344\270\272%lf   \344\271\246\345\220\215:%s\n"
	.align 4
.LC15:
	.string	"\344\273\267\346\240\274\346\234\200\344\275\216\344\270\272%lf   \344\271\246\345\220\215:%s\n"
.LC16:
	.string	"\344\275\234\350\200\205\346\225\260\344\270\272:%d"
	.text
	.globl	count
	.type	count, @function
count:
.LFB7:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	$0, -56(%ebp)
	call	dq
	movl	%eax, -52(%ebp)
	call	dq
	movl	%eax, -48(%ebp)
	call	dq
	movl	%eax, -44(%ebp)
	jmp	.L39
.L40:
	addl	$1, -56(%ebp)
	movl	-52(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -52(%ebp)
.L39:
	cmpl	$0, -52(%ebp)
	jne	.L40
	subl	$8, %esp
	pushl	-56(%ebp)
	pushl	$.LC13
	call	printf
	addl	$16, %esp
	movl	-48(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -32(%ebp)
	jmp	.L41
.L45:
	movl	-48(%ebp), %eax
	fldl	92(%eax)
	movl	-32(%ebp), %eax
	fldl	92(%eax)
	fucomip	%st(1), %st
	fstp	%st(0)
	jbe	.L59
	movl	-32(%ebp), %eax
	movl	%eax, -40(%ebp)
	movl	-48(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -48(%ebp)
	jmp	.L41
.L59:
	movl	-48(%ebp), %eax
	movl	%eax, -40(%ebp)
	movl	-32(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -32(%ebp)
.L41:
	cmpl	$0, -32(%ebp)
	je	.L44
	cmpl	$0, -48(%ebp)
	jne	.L45
.L44:
	movl	-40(%ebp), %eax
	movl	-40(%ebp), %edx
	fldl	92(%edx)
	pushl	%eax
	leal	-8(%esp), %esp
	fstpl	(%esp)
	pushl	$.LC14
	call	printf
	addl	$16, %esp
	movl	-44(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -28(%ebp)
	jmp	.L46
.L50:
	movl	-44(%ebp), %eax
	fldl	92(%eax)
	movl	-28(%ebp), %eax
	fldl	92(%eax)
	fxch	%st(1)
	fucomip	%st(1), %st
	fstp	%st(0)
	jbe	.L60
	movl	-28(%ebp), %eax
	movl	%eax, -36(%ebp)
	movl	-44(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -44(%ebp)
	jmp	.L46
.L60:
	movl	-44(%ebp), %eax
	movl	%eax, -36(%ebp)
	movl	-28(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -28(%ebp)
.L46:
	cmpl	$0, -28(%ebp)
	je	.L49
	cmpl	$0, -44(%ebp)
	jne	.L50
.L49:
	movl	-36(%ebp), %eax
	movl	-36(%ebp), %edx
	fldl	92(%edx)
	pushl	%eax
	leal	-8(%esp), %esp
	fstpl	(%esp)
	pushl	$.LC15
	call	printf
	addl	$16, %esp
	call	dq
	movl	%eax, -24(%ebp)
	call	dq
	movl	%eax, -12(%ebp)
	movl	$0, -20(%ebp)
	jmp	.L51
.L56:
	movl	-24(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -16(%ebp)
	jmp	.L52
.L55:
	movl	-16(%ebp), %eax
	leal	50(%eax), %edx
	movl	-24(%ebp), %eax
	addl	$50, %eax
	subl	$8, %esp
	pushl	%edx
	pushl	%eax
	call	strcmp
	addl	$16, %esp
	testl	%eax, %eax
	je	.L53
	movl	-16(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -16(%ebp)
	jmp	.L52
.L53:
	addl	$1, -20(%ebp)
	jmp	.L54
.L52:
	cmpl	$0, -16(%ebp)
	jne	.L55
.L54:
	movl	-24(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -24(%ebp)
.L51:
	cmpl	$0, -24(%ebp)
	jne	.L56
	movl	-56(%ebp), %eax
	subl	-20(%ebp), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC16
	call	printf
	addl	$16, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE7:
	.size	count, .-count
	.section	.rodata
	.align 4
.LC17:
	.string	"\346\254\242\350\277\216\350\277\233\345\205\245\345\233\276\344\271\246\351\246\206\351\207\214\347\263\273\347\273\237"
	.align 4
.LC18:
	.string	"------>\345\220\221\345\257\274---->\346\226\260\345\273\272\345\233\276\344\271\246\345\272\223"
	.align 4
.LC19:
	.string	"\346\263\250\346\204\217\357\274\232\345\275\223\350\276\223\345\205\245\347\274\226\345\217\267\344\270\2720\346\227\266\357\274\214\350\277\233\345\205\245\344\270\213\344\270\200\346\255\245"
.LC20:
	.string	"cls"
.LC21:
	.string	"\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237"
.LC22:
	.string	"[1]:\346\237\245\350\257\242\345\233\276\344\271\246"
.LC23:
	.string	"[2]:\346\267\273\345\212\240\345\233\276\344\271\246"
.LC24:
	.string	"[3]:\345\210\240\351\231\244\345\233\276\344\271\246"
.LC25:
	.string	"[4]:\351\201\215\345\216\206\345\233\276\344\271\246"
.LC26:
	.string	"[5]:\347\273\237\350\256\241\345\233\276\344\271\246"
	.align 4
.LC27:
	.string	"\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223"
.LC28:
	.string	"0:\351\200\200\345\207\272"
.LC29:
	.string	"\350\257\267\351\200\211\346\213\251<0~5>:"
.LC30:
	.string	"%d"
.LC31:
	.string	"1.\346\214\211\347\274\226\345\217\267\346\237\245\350\257\242"
.LC32:
	.string	"0.\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225"
.LC33:
	.string	"\350\257\267\351\200\211\346\213\251:"
.LC34:
	.string	"\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\345\233\276\344\271\246\347\274\226\345\217\267:"
.LC35:
	.string	"%s"
.LC36:
	.string	"\347\233\270\345\205\263\344\277\241\346\201\257\345\246\202\344\270\213:"
	.align 4
.LC37:
	.string	"\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237\343\200\223\343\200\223\343\200\223\343\200\223\343\200\223"
.LC38:
	.string	"\350\257\267\350\276\223\345\205\245\345\233\276\344\271\246\345\220\215\347\247\260:"
.LC39:
	.string	"\350\257\267\350\276\223\345\205\245\345\233\276\344\271\246\347\274\226\345\217\267:"
.LC40:
	.string	"\350\257\267\350\276\223\345\205\245\345\215\225\344\273\267:"
.LC41:
	.string	"%lf"
.LC42:
	.string	"\350\257\267\350\276\223\345\205\245\344\275\234\350\200\205\345\220\215\345\255\227:"
.LC43:
	.string	"\346\255\244\347\274\226\345\217\267\345\233\276\344\271\246\345\267\262\345\255\230\345\234\250"
.LC44:
	.string	"\346\267\273\345\212\240\345\233\276\344\271\246\346\210\220\345\212\237!"
.LC45:
	.string	"\350\276\223\345\205\245\345\210\240\351\231\244\345\233\276\344\271\246\347\274\226\345\217\267:"
.LC46:
	.string	"\345\210\240\351\231\244\345\233\276\344\271\246\346\210\220\345\212\237!"
.LC47:
	.string	"\350\260\242\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB8:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$132, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$104, -116(%ebp)
	movl	$1, -124(%ebp)
	movl	$1, -112(%ebp)
	subl	$12, %esp
	pushl	$.LC17
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC18
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC19
	call	puts
	addl	$16, %esp
	call	dq
	subl	$12, %esp
	pushl	$.LC20
	call	system
	addl	$16, %esp
.L77:
	subl	$12, %esp
	pushl	$.LC21
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$10
	call	putchar
	addl	$16, %esp
	subl	$12, %esp
	pushl	$10
	call	putchar
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC22
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC23
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC24
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC25
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC26
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC27
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC28
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC29
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	leal	-132(%ebp), %eax
	pushl	%eax
	pushl	$.LC30
	call	__isoc99_scanf
	addl	$16, %esp
	movl	-132(%ebp), %eax
	cmpl	$5, %eax
	ja	.L62
	movl	.L64(,%eax,4), %eax
	jmp	*%eax
	.section	.rodata
	.align 4
	.align 4
.L64:
	.long	.L63
	.long	.L65
	.long	.L66
	.long	.L67
	.long	.L68
	.long	.L69
	.text
.L65:
	subl	$12, %esp
	pushl	$.LC20
	call	system
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC21
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC31
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC32
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC33
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	leal	-136(%ebp), %eax
	pushl	%eax
	pushl	$.LC30
	call	__isoc99_scanf
	addl	$16, %esp
	movl	-136(%ebp), %eax
	cmpl	$1, %eax
	jne	.L70
	subl	$12, %esp
	pushl	$.LC34
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	leal	-90(%ebp), %eax
	pushl	%eax
	pushl	$.LC35
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC36
	call	puts
	addl	$16, %esp
	subl	$8, %esp
	pushl	-128(%ebp)
	leal	-90(%ebp), %eax
	pushl	%eax
	call	search
	addl	$16, %esp
	movl	%eax, -128(%ebp)
	jmp	.L62
.L70:
	movl	-136(%ebp), %eax
	testl	%eax, %eax
	jmp	.L62
.L66:
	subl	$12, %esp
	pushl	$.LC20
	call	system
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC37
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC38
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	leal	-62(%ebp), %eax
	pushl	%eax
	pushl	$.LC35
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC39
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	leal	-90(%ebp), %eax
	pushl	%eax
	pushl	$.LC35
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC40
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	leal	-104(%ebp), %eax
	pushl	%eax
	pushl	$.LC41
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC42
	call	printf
	addl	$16, %esp
	subl	$8, %esp
	leal	-82(%ebp), %eax
	pushl	%eax
	pushl	$.LC35
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$10
	call	putchar
	addl	$16, %esp
	movl	-116(%ebp), %eax
	subl	$12, %esp
	pushl	%eax
	call	malloc
	addl	$16, %esp
	movl	%eax, -120(%ebp)
	movl	-128(%ebp), %eax
	movl	%eax, -120(%ebp)
	jmp	.L72
.L75:
	movl	-120(%ebp), %eax
	leal	70(%eax), %edx
	leal	-90(%ebp), %eax
	cmpl	%eax, %edx
	jne	.L73
	subl	$12, %esp
	pushl	$.LC43
	call	puts
	addl	$16, %esp
	movl	$0, -124(%ebp)
	jmp	.L74
.L73:
	movl	-120(%ebp), %eax
	movl	100(%eax), %eax
	movl	%eax, -120(%ebp)
.L72:
	cmpl	$0, -120(%ebp)
	jne	.L75
.L74:
	cmpl	$0, -124(%ebp)
	je	.L80
	movl	-116(%ebp), %eax
	subl	$12, %esp
	pushl	%eax
	call	malloc
	addl	$16, %esp
	movl	%eax, -108(%ebp)
	movl	-108(%ebp), %eax
	subl	$8, %esp
	leal	-62(%ebp), %edx
	pushl	%edx
	pushl	%eax
	call	strcpy
	addl	$16, %esp
	movl	-108(%ebp), %eax
	leal	70(%eax), %edx
	subl	$8, %esp
	leal	-90(%ebp), %eax
	pushl	%eax
	pushl	%edx
	call	strcpy
	addl	$16, %esp
	fldl	-104(%ebp)
	movl	-108(%ebp), %eax
	fstpl	92(%eax)
	movl	-108(%ebp), %eax
	leal	50(%eax), %edx
	subl	$8, %esp
	leal	-82(%ebp), %eax
	pushl	%eax
	pushl	%edx
	call	strcpy
	addl	$16, %esp
	subl	$8, %esp
	pushl	-108(%ebp)
	pushl	-128(%ebp)
	call	insert
	addl	$16, %esp
	movl	%eax, -128(%ebp)
	subl	$12, %esp
	pushl	$.LC44
	call	puts
	addl	$16, %esp
	jmp	.L80
.L67:
	subl	$12, %esp
	pushl	$.LC20
	call	system
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC37
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC45
	call	puts
	addl	$16, %esp
	subl	$8, %esp
	leal	-90(%ebp), %eax
	pushl	%eax
	pushl	$.LC35
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$8, %esp
	leal	-90(%ebp), %eax
	pushl	%eax
	pushl	-128(%ebp)
	call	delete
	addl	$16, %esp
	movl	%eax, -128(%ebp)
	subl	$12, %esp
	pushl	$.LC46
	call	puts
	addl	$16, %esp
	jmp	.L62
.L68:
	subl	$12, %esp
	pushl	$.LC20
	call	system
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC37
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	-128(%ebp)
	call	output
	addl	$16, %esp
	jmp	.L62
.L69:
	subl	$12, %esp
	pushl	$.LC20
	call	system
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC37
	call	puts
	addl	$16, %esp
	call	count
	jmp	.L62
.L63:
	subl	$12, %esp
	pushl	$.LC20
	call	system
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC37
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC47
	call	puts
	addl	$16, %esp
	jmp	.L62
.L80:
	nop
.L62:
	movl	-132(%ebp), %eax
	testl	%eax, %eax
	jne	.L77
	movl	$0, %eax
	movl	-12(%ebp), %ecx
	xorl	%gs:20, %ecx
	je	.L79
	call	__stack_chk_fail
.L79:
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE8:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
