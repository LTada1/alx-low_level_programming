section .text
	global _start

_start :

mov edx, len
mov ecx, msg
;move ebx, 1
;move eax, 4	;system call (sys_write)
int 0x80	;To call kernal

mov eax, 1	;system call (sys_exit)

section .data
	msg db "Hello, Holberton", 10 ; 0xa
	len equ $ -msg
