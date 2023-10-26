#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
nop
nop
nop
nop
nop
csrr x2, mngr2proc < 4
nop
nop
addi x2, x1, 0
addi x1, x2, 0
nop
mul x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 16
nop
nop
nop
nop
nop
nop
nop
nop