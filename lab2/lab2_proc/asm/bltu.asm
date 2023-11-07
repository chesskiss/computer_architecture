csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
csrr x3, mngr2proc < 0
nop
nop
nop
nop
nop
nop
nop
nop
bltu x1, x2, lable_b
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x3, 4
nop
nop
nop
nop
nop
nop
nop
nop
lable_b:
addi x3, x3, 4
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x3, 4
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 12