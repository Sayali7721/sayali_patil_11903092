#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void function(char *str) {  
     char buffer[16];   
     strcpy(buffer,str); 
     } 
void main() {
    char large_string[256];
    int i; 
    for( i = 0; i < 255; i++){
        large_string[i] = 'A';  
        function(large_string);
    } 
}

/*

	.file	"example1_ans.c"
	.text
	.globl	function
	.type	function, @function
function:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L2
	call	__stack_chk_fail@PLT
.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	function, .-function
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$288, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -276(%rbp)
	jmp	.L4
.L5:
	movl	-276(%rbp), %eax
	cltq
	movb	$65, -272(%rbp,%rax)
	leaq	-272(%rbp), %rax
	movq	%rax, %rdi
	call	function
	addl	$1, -276(%rbp)
.L4:
	cmpl	$254, -276(%rbp)
	jle	.L5
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits





*/
