csrr x1, mngr2proc < 0x00002001
csrr x2, mngr2proc < 500
nop
nop
nop
nop
nop
nop
nop
nop
sw x2,  0(x1)
nop
nop
nop
nop
nop
nop
nop
nop
lw x3,  0(x1) 
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 500
