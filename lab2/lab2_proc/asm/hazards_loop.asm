# Example Assembly Code with RAW and WAR Hazards

# Initialization
addi x1, x0, 5
addi x2, x0, 10
addi x3, x0, 15
addi x21, x0, 5

loop:
# Example Assembly Code with RAW and WAR Hazards

# Initialization
addi x1, x0, 5
addi x2, x0, 10
addi x3, x0, 15

# RAW Hazard 1
add x4, x1, x2
add x5, x4, x3



# WAR Hazard 1
ori x1, x5, 20
add x6, x1, x2



# RAW Hazard 2
sub x7, x6, x3
and x8, x7, x2



# WAR Hazard 2
xori x2, x8, 7
mul x9, x2, x1



# RAW Hazard 3
sll x10, x9, x9
addi x11, x10, 1



# WAR Hazard 3
slt x3, x11, x7
sra x12, x3, x11




# RAW Hazard 4
sw x12, 0(x11)
lw x13, 0(x11)


# WAR Hazard 4
addi x14, x1, 5
srai x1, x14, 2



# RAW Hazard 5
lui x15, 4660
ori x16, x15, 0x567
sw x16, 0(x15)
lw x17, 0(x15)
addi x17, x16, 1 


# WAR Hazard 5
and x18, x17, x15
slt x19, x18, x17
sltiu x19, x19, -1
mul x19, x19, x19
sub x19, x19, x15

sltu x19, x19, x18
slti x19, x19, 1



# RAW Hazard 6
sw x19, 4(x18)
auipc x18, 2
lw x20, 4(x18)
mul x20, x19, x18


# WAR Hazard 6
or x1, x20, x15
slli x2, x1, 4



# RAW Hazard 7
sw x2, 8(x1)
lw x3, 8(x1)


# WAR Hazard 7
srl x4, x3, x1
mul x5, x4, x1

addi x21, x21, -1
bge x21, x0, loop

csrw proc2mngr, x2 > 0x12362900
csrw proc2mngr, x3 > 0x12362900
csrw proc2mngr, x4 > 0x00001236
csrw proc2mngr, x5 > 0xba64ea60
csrw proc2mngr, x12 > 0x00000000
csrw proc2mngr, x13 > 0x00000000
csrw proc2mngr, x15 > 0x01234000
csrw proc2mngr, x16 > 0x01234567
csrw proc2mngr, x17 > 0x01234568
csrw proc2mngr, x19 > 0x00000001
csrw proc2mngr, x20 > 0x00002290



 
 
 
 