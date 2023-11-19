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
addi x3, x1, 5 //x3=1010
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
ori x3, x1, 2 //x3=0111
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
andi x3, x1, 4 //x3=0100
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
xori  x3, x1, 8 //x3=1101
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 13
nop
nop
nop
nop
nop
slti  x3, x1, -3 //x3=0000
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
sltiu  x3, x1, 10 //x3=0001
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
srai  x3, x1, 2 //x3=0001
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
srli  x3, x1, 2 //x3=0001
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
slli  x3, x1, 2 //x3=10100
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 20
nop
nop
nop
nop
nop
nop
nop
nop