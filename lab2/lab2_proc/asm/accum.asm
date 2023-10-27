# load array pointers
csrr  x1, mngr2proc < 0
csrr  x2, mngr2proc < 0x2000
addi x3, x1, -99
sw x3, 0(x2)
addi x3, x1, -1
sw x3, 4(x2)
addi x3, x1, 40
sw x3, 8(x2)
addi x3, x1, 2
sw x3, 12(x2)
addi x3, x1, 0
sw x3, 16(x2)
addi x3, x1, 1000
sw x3, 20(x2)
addi x3, x1, -3
sw x3, 24(x2)
addi x3, x1, 1
sw x3, 28(x2)
addi x3, x1, 11
sw x3, 32(x2)

addi x1, x1, 8
add x5, x0, x0

loop:
lw x4, 0(x2)
add x5, x5, x4
addi x2, x2, 4
addi x1, x1, -1
bne x1, x0, loop

csrw proc2mngr, x5 > 0x3ac



