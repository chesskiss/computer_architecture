csrr x1, mngr2proc < 0x11 #10001
csrr x2, mngr2proc < 0x5  #00101
nop
nop
nop
nop
nop
nop
nop
nop
xor x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0x14  #10100
nop
nop
nop
nop
nop
nop
nop
nop