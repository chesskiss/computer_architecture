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
addi x3, x1, 5
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
addi x3, x1, -100
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -95
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x3, 95
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
addi x3, x3, 0
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
addi x3, x3, -1
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
nop
nop
nop
nop
nop
nop
nop
nop
addi x3, x1, 0
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
addi x3, x1, -1
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
addi x3, x1, 100
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 100
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
addi x3, x1, 0
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
addi x3, x1, -1
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
addi x3, x1, 1
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
addi x3, x1, 100
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 99
csrr x1, mngr2proc < 5
addi x3, x1, 2
csrw proc2mngr, x3 > 7
addi x3, x1, -1
csrw proc2mngr, x3 > 4
addi x3, x1, 5
csrw proc2mngr, x3 > 10
addi x3, x1, -100
csrw proc2mngr, x3 > -95
addi x3, x3, 95
csrw proc2mngr, x3 > 0
addi x3, x3, 0
csrw proc2mngr, x3 > 0
addi x3, x3, -1
csrw proc2mngr, x3 > -1
csrr x1, mngr2proc < 0
addi x3, x1, 0
csrw proc2mngr, x3 > 0
addi x3, x1, -1
csrw proc2mngr, x3 > -1
addi x3, x1, 100
csrw proc2mngr, x3 > 100
csrr x1, mngr2proc < -1
addi x3, x1, 0
csrw proc2mngr, x3 > -1
addi x3, x1, -1
csrw proc2mngr, x3 > -2
addi x3, x1, 1
csrw proc2mngr, x3 > 0
addi x3, x1, 100
csrw proc2mngr, x3 > 99
