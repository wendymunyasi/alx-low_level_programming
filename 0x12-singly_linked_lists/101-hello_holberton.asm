; Filename: 101-hello_holberton.asm - Print a string using printf
; Author: Wendy Munyasi
; Assemble: nasm -f elf64 101-hello_holberton.asm
; Link: gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; Run: ./hello
; You are only allowed to use printf
; You are not allowed to use interrupts
; Your program will be compiled using nasm and gcc

; Equivalent C code
; #include <stdio.h>
; int main(void)
; {
; 	char msg[] = "Hello, Holberton";
;   printf("%s\n",msg);
;   return (0);
; }

; Declare needed C functions
			extern printf               ; the C function to be called

			SECTION .data               ; Data section, initialized variables
message:    db "Hello, Holberton", 0    ; strings must be terminated with 0 in C
format:     db "%s", 10, 0              ; the printf format, "\n", '0'

			SECTION .text

			global main
main:                                   ; the program label for the entry point
			push rbp                 	; set up stack frame, must be alligned

			mov rdi,format
			mov rsi,message
			mov rax,0		        	; or can be  xor  rax,rax
			call printf		        	; Call C function

			pop rbp		            	; restore stack

			mov rax,0		        	; normal, no error, return value
			ret			                ; return

