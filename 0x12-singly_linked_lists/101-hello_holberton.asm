section .data
	len db "%s", 10, 0
	msg db "Hello, Holberton!", 0xa

	section .text
	extern printf
	global main

main:
	push rbp
	mov rsi, msg
	mov rdi, len
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
