#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
add x3, x1, x2
add x4, x3, x2
add x5, x4, x3
csrw proc2mngr, x3 > 9
csrw proc2mngr, x4 > 13
csrw proc2mngr, x5 > 22