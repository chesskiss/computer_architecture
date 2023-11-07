#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
nop
nop
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
csrw proc2mngr, x3 > 20
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < -1
mul x3,x2,x1
csrw proc2mngr, x3 > 1
mul x3,x1,x2
csrw proc2mngr, x3 > 1
nop
nop
nop
nop
csrr x1, mngr2proc < 0
csrr x2, mngr2proc < -1
mul x3,x2,x1
csrw proc2mngr, x3 > 0
mul x3,x1,x2
csrw proc2mngr, x3 > 0
nop
nop
nop
nop
csrr x1, mngr2proc < 5
csrr x2, mngr2proc < -1
mul x3,x2,x1
csrw proc2mngr, x3 > -5
mul x3,x1,x2
csrw proc2mngr, x3 > -5
nop
nop
nop
csrr x1, mngr2proc < 5
csrr x2, mngr2proc < -1
mul x3,x2,x1
csrw proc2mngr, x3 > -5
mul x3,x1,x2
mul x1,x3,x2
csrw proc2mngr, x1 > -25
nop
nop
nop
nop
csrr x1, mngr2proc < 1000
csrr x2, mngr2proc < 20
mul x3,x2,x1
csrw proc2mngr, x3 > 20000
mul x3,x1,x2
csrw proc2mngr, x3 > 20000