;; prints a message to stdout using printf

	section .data 		;data section start
msg:	db "Hello, Holberton", 10, 0

	section .text 		;text section start
	extern printf
	global main
main:
	push rbp
	mov rbp, rsp

	lea rdi, [msg]
	call printf

	mov rsp, rbp
	pop rbp
	mov rax, 0
	ret
