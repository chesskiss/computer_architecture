#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, 2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 7
/*
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, -1
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 4
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, 4
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
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, -100
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
csrr x1, mngr2proc < 0
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, 2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 2
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
addi x3, x1, -2
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
csrr x1, mngr2proc < -1
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, 0
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
add x3, x3, -1
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -2
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x3, -8
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -10
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x3, 20
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 10
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x3, -10
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
nop */