csrr x1, mngr2proc < 17 #10001
csrr x2, mngr2proc < 5  #00101
nop
nop
nop
nop
nop
nop
nop
nop
or x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 21  #10101
nop
nop
nop
nop
nop
nop
nop
nop