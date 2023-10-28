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
csrw proc2mngr, x1 > 1
csrw proc2mngr, x2 > 0x00002ec


000002D8:13000000
000002DC:13000000
000002E0:13000000
000002E4:1302002F


000002E8:67015200
000002EC:93804000
000002F0:93804000
000002F4:7390007C
000002F8:7310017C
000002FC:F32000FC