section .data
hello db 'Hello, Holberton', 0
format db '%s', 10, 0

section .text
global _start

_start:
; Prepare arguments for printf
mov rdi, format
mov rsi, hello
xor rax, rax

; Call printf
call printf

; Exit the program
mov rdi, 0
call exit

section .bss
resb 1

extern printf
extern exit
