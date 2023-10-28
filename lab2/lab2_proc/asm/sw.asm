csrr x1, mngr2proc < 0x2000
addi x2, x0, 500
nop
nop
nop
nop
nop
nop
nop
nop
sw x2,  0(x1)
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
lw x3,  0(x1) 
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 500

addi x2, x2, -400
sw x2,  0(x1)
lw x3,  0(x1) 
addi x3, x3, 1
csrw proc2mngr, x3 > 101

