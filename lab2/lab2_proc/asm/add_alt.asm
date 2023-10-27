#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 9
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < -20
csrr x2, mngr2proc < -100
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -120
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < 4
csrr x2, mngr2proc < 5
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 9
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < 0
csrr x2, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, x2
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
add x3, x1, x2
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
add x3, x1, x2
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
csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
add x3, x1, x2
add x4, x3, x2
add x5, x4, x3
csrw proc2mngr, x3 > 9
csrw proc2mngr, x4 > 13
csrw proc2mngr, x5 > 22