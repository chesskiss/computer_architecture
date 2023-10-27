csrr x1, mngr2proc < 0x00002001
csrr x2, mngr2proc < 500
csrr x3, mngr2proc < 200
csrr x5, mngr2proc < -200

sw x2,  0(x1)
lw x8, 0(x1)


sw x3, 0(x1)
lw x4,  0(x1) 

sw x5, 5(x1)
lw x6, 5(x1)


addi x1, x1, 5
lw x7, -5(x1)


csrw proc2mngr, x8 > 500
csrw proc2mngr, x4 > 200
csrw proc2mngr, x6 > -200
csrw proc2mngr, x7 > 200