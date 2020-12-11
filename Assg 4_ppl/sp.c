#include<stdio.h>
#include<stdlib.h>
unsigned long get_sp(void) {
__asm__("movl %esp,%eax"); }
void main() {  printf("0x%ld\n", get_sp()); }


//0x359520384
