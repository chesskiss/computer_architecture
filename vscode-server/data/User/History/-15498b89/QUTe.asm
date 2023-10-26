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
sub x3, x1, x2
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
sub x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 80
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < -100
csrr x2, mngr2proc < -20
nop
nop
nop
nop
nop
nop
nop
nop
sub x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -80
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
sub x3, x1, x2
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
csrr x1, mngr2proc < 3
csrr x2, mngr2proc < 2
nop
nop
nop
nop
nop
nop
nop
nop
sub x3, x1, x2
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
sub x3, x1, x2
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
sub x2, x1, x3
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x2 > 1