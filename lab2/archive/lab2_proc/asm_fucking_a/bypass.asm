csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
add x3, x1, x2
add x1, x3, x3
csrw proc2mngr, x1 > 18