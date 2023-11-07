addi x1, x0, 5
addi x2, x0, 4
add x3, x1, x2
add x1, x3, x3
csrw proc2mngr, x1 > 18