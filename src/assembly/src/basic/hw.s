section .data
  msg db "hello world", 0

section .text
  global _start

_start:
  ; write the message to stdout
  mov rax, 1
  mov rdi, 1
  mov rsi, msg
  mov rdx, 11
  syscall

  ; exit the program
  mov rax, 60
  xor rdi, rdi
  syscall
