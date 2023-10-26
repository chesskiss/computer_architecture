csrr x1, mngr2proc < 0
nop
nop
nop
nop
nop
nop
nop
nop
jal x2, lable_b
nop
nop
nop
nop
nop
nop
nop
nop
addi x1, x1, 4
nop
nop
nop
nop
nop
nop
nop
nop
lable_b:
addi x1, x1, 4
nop
nop
nop
nop
nop
nop
nop
nop
addi x1, x1, 4
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x1 > 8