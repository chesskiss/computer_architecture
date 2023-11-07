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
add x3, x1, x2 //x3=1001
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
sub x4, x1, x2 //x4=0001
nop
nop
nop
nop
nop
and x3, x3, x4 //x3=0001
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
or  x3, x1, x3 //x3=0101
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
xor  x3, x3, x4 //x3=0100
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
sub  x3, x3, x1 //x3=1111
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
slt  x3, x3, x2 //x3=0001
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
sub  x3, x3, x1 //x3=1111
nop
nop
nop
nop
nop
sltu  x3, x3, x2 //x3=0000
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
sra  x3, x1, x4 //x3=0010
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
srl  x3, x1, x4 //x3=0010
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
sll  x3, x1, x4 //x3=1010
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