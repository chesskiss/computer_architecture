#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 0
nop
nop
nop
nop
nop
nop
nop
nop
xor x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 1
