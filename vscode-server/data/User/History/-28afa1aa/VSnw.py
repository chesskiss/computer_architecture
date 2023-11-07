#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 0








xor x3, x1, x2








csrw proc2mngr, x3 > 1








csrr x1, mngr2proc < 3
csrr x2, mngr2proc < 0








xor x3, x1, x2








csrw proc2mngr, x3 > 0








csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 1








xor x3, x1, x2








csrw proc2mngr, x3 > 0








csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 0








xor x3, x1, x2








csrw proc2mngr, x3 > 5








csrr x1, mngr2proc < -1
csrr x2, mngr2proc < 0








xor x3, x1, x2








csrw proc2mngr, x3 > -1








csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 2








xor x3, x1, x2








csrw proc2mngr, x3 > 7








csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 5








xor x3, x1, x2








csrw proc2mngr, x3 > 0








csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4








xor x3, x1, x2








csrw proc2mngr, x3 > 1







