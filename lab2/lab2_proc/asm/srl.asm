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
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 1
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < 0
csrr x2, mngr2proc < 0
nop
nop
nop
nop
nop
nop
nop
nop
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < 2
csrr x2, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 1
srl x3, x3, x2
csrw proc2mngr, x3 > 0
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < 2
csrr x2, mngr2proc < 3
nop
nop
nop
nop
nop
nop
nop
nop
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0x7fffffff
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < 4
csrr x2, mngr2proc < 2
nop
nop
nop
nop
nop
nop
nop
nop
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 1
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 31
nop
nop
nop
nop
nop
nop
nop
nop
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 1
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 31
srl x3, x1, x2
csrw proc2mngr, x3 > 1
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 32
srl x3, x1, x2
csrw proc2mngr, x3 > -1