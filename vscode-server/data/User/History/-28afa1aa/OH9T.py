csrr x1, mngr2proc < 1
csrr x2, mngr2proc < -1
nop
nop
nop
nop
nop
nop
nop
nop
or x3, x1, x2
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
or x3, x1, x2
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
csrr x2, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
or x3, x1, x2
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
csrr x2, mngr2proc < 0
nop
nop
nop
nop
nop
nop
nop
nop
or x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 5
nop
nop
nop
nop
nop
nop
nop
nop
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 0
nop
nop
nop
nop
nop
nop
nop
nop
or x3, x1, x2
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
csrr x1, mngr2proc < 10
csrr x2, mngr2proc < 3
nop
nop
nop
nop
nop
nop
nop
nop
or x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 11
nop
nop
nop
nop
nop
nop
nop
nop
