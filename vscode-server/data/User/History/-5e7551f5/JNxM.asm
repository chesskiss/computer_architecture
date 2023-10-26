#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, 2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 7
