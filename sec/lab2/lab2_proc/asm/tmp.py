csrr x1, mngr2proc < 1
csrr x2, mngr2proc < -1
or x3, x1, x2
csrw proc2mngr, x3 > -1
csrr x1, mngr2proc < 0
csrr x2, mngr2proc < 0
or x3, x1, x2
csrw proc2mngr, x3 > 0
csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 1
or x3, x1, x2
csrw proc2mngr, x3 > 1
csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 0
or x3, x1, x2
csrw proc2mngr, x3 > 5
csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 0
or x3, x1, x2
csrw proc2mngr, x3 > -1
csrr x1, mngr2proc < 10
csrr x2, mngr2proc < 3
or x3, x1, x2
csrw proc2mngr, x3 > 11
