csrr x1, mngr2proc < -17 #11101
nop
nop
nop
nop
nop
nop
nop
nop
srai x3, x1, 1
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


csrr x1, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
srai x3, x1, 0
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
nop
nop
nop
nop
nop
nop
nop
nop
srai x3, x1, 0
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0

csrr x1, mngr2proc < -1
srai x3, x1, 10
csrw proc2mngr, x3 > -1
srai x3, x1, 31
csrw proc2mngr, x3 > -1

csrr x1, mngr2proc < -3
srai x3, x1, 1
csrw proc2mngr, x3 > 0xfffffffe
csrr x1, mngr2proc < -5
srai x3, x1, 10
csrw proc2mngr, x3 > -1