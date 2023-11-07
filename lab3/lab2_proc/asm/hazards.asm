# Example Assembly Code with RAW and WAR Hazards

# Initialization
addi x1, x0, 5
addi x2, x0, 10
addi x3, x0, 15

# RAW Hazard 1
add x4, x1, x2
add x5, x4, x3
csrw proc2mngr, x4 > 0x0000000f
csrw proc2mngr, x5 > 0x0000001e

# WAR Hazard 1
ori x1, x5, 20
add x6, x1, x2
csrw proc2mngr, x1 > 0x0000001e
csrw proc2mngr, x6 > 0x00000028

# RAW Hazard 2
sub x7, x6, x3
and x8, x7, x2
csrw proc2mngr, x7 > 0x00000019
csrw proc2mngr, x8 > 0x00000008

# WAR Hazard 2
xori x2, x8, 7
mul x9, x2, x1
csrw proc2mngr, x2 > 0x0000000f
csrw proc2mngr, x9 > 0x000001c2

# RAW Hazard 3
sll x10, x9, x9
addi x11, x10, 1
csrw proc2mngr, x10 > 0x00000708
csrw proc2mngr, x11 > 0x00000709

# WAR Hazard 3
slt x3, x11, x7
sra x12, x3, x11
csrw proc2mngr, x3 > 0x00000000
csrw proc2mngr, x12 > 0x00000000


# RAW Hazard 4
sw x12, 0(x11)
lw x13, 0(x11)
csrw proc2mngr, x12 > 0x00000000
csrw proc2mngr, x13 > 0x00000000

# WAR Hazard 4
addi x14, x1, 5
srai x1, x14, 2
csrw proc2mngr, x1 > 0x00000008
csrw proc2mngr, x14 > 0x00000023

# RAW Hazard 5
lui x15, 4660
ori x16, x15, 0x567
sw x16, 0(x15)
lw x17, 0(x15)
addi x17, x16, 1 
csrw proc2mngr, x15 > 0x01234000
csrw proc2mngr, x16 > 0x01234567
csrw proc2mngr, x17 > 0x01234568

# WAR Hazard 5
and x18, x17, x15
slt x19, x18, x17
sltiu x19, x19, -1
mul x19, x19, x19
sub x19, x19, x15
csrw proc2mngr, x19 > 0xfedcc001
sltu x19, x19, x18
slti x19, x19, 1
csrw proc2mngr, x18 > 0x01234000
csrw proc2mngr, x19 > 0x00000001

# RAW Hazard 6
sw x19, 4(x18)
auipc x18, 2
lw x20, 4(x18)
mul x20, x19, x18
csrw proc2mngr, x19 > 0x00000001
csrw proc2mngr, x20 > 0x000022d8

# WAR Hazard 6
or x1, x20, x15
slli x2, x1, 4
csrw proc2mngr, x1 > 0x012362d8
csrw proc2mngr, x2 > 0x12362d80

# RAW Hazard 7
sw x2, 8(x1)
lw x3, 8(x1)
csrw proc2mngr, x2 > 0x12362d80
csrw proc2mngr, x3 > 0x12362d80

# WAR Hazard 7
srl x4, x3, x1
mul x5, x4, x1
csrw proc2mngr, x4 > 0x00000012
csrw proc2mngr, x5 > 0x147cf330
