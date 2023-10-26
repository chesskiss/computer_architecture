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
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, -1
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 4
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, 5
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 10
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, -100
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -95
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x3, 95
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0
