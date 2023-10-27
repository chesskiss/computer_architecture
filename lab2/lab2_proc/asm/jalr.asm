csrr x1, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
addi x4, x0, offset
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
jalr x2, x4, 1
nop
nop
nop
nop
nop
nop
nop
nop
addi x1, x1, 4
nop
nop
nop
nop
nop
nop
nop
nop
offset:
addi x1, x1, 4
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x1 > 5
csrr x1, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
addi x4, x0, offset_a
jalr x2, x4, 5
addi x1, x1, 4

offset_a:
addi x1, x1, 4
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x1 > 1
csrw proc2mngr, x2 > 0x00002ec