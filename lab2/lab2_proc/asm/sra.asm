csrr x1, mngr2proc < -17 #11101
csrr x2, mngr2proc < 1 #00001
nop
nop
nop
nop
nop
nop
nop
nop
sra x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -9  #11000
nop
nop
nop
nop
nop
nop
nop
nop
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
sra x3, x1, x2
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
sra x3, x1, x2
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
sra x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 1
sra x3, x3, x2
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
sra x3, x1, x2
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
sra x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -1
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
sra x3, x1, x2
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
sra x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -1
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 10
sra x3, x1, x2
csrw proc2mngr, x3 > -1
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 32
sra x3, x1, x2
csrw proc2mngr, x3 > -1

csrr x1, mngr2proc < -3
csrr x2, mngr2proc < 1
sra x3, x1, x2
csrw proc2mngr, x3 > 0xfffffffe
csrr x1, mngr2proc < -5
csrr x2, mngr2proc < 10
sra x3, x1, x2
csrw proc2mngr, x3 > -1