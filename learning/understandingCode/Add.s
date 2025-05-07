.text
.globl  add
.type	add, @function
add:
  pushq %rbp
  movq %rsp, %rbp
  subq $16, %rsp
  movl %esi, -4(%rbp) 
  movl -4(rbp), %eax
  addl %edi, %eax
  movq %rbp, %rsp
  popq %rbp
  ret

.globl main 
.type	main, @function
main:
  pushq %rbp
  movq %rsp, %rbp
  movl $5, %esi
  movl $30, %edi
  call add
  movq %rbp, %rsp
  popq %rbp
  ret
