# Use x3 to track the control flow pattern
addi x3, x0, 0                                             # 0x00000200

jal x1, label_f                     # j -.                 # 0x00000204
addi x3, x3, 0b000001               #    |                 # 0x00000208
                                    #    |                 #
label_g:                            # <--+-.               #
addi x3, x3, 0b000010               #    | |               # 0x0000020c
addi x5, x1, 0                      #    | |               # 0x00000210
jal x1, label_h                     # j -+-+-.             # 0x00000214
addi x1, x3, 0b000100               #    | | |             # 0x00000218
                                    #    | | |             #
label_f:                            # <--' | |             #
addi x3, x3, 0b001000               #      | |             # 0x0000021c
addi x4, x1, 0                      #      | |             # 0x00000220
jal x1, label_g                     # j ---' |             # 0x00000224
addi x3, x3, 0b010000               #        |             # 0x00000228
                                    #        |             #
label_h:                            # <------'             #
addi x3, x3, 0b100000               # # 0x0000022c
addi x6, x1, 0                      # # 0x00000230

# Carefully determine which bits are expected
# to be set if jump operates correctly.
csrw proc2mngr, x3 > 0b101010

# Check the link addresses
csrw proc2mngr, x4 > 0x00000208
csrw proc2mngr, x5 > 0x00000228
csrw proc2mngr, x6 > 0x00000218

csrr x1, mngr2proc < 10
jal x3, lable_b
addi x1, x1, 4
lable_b:
addi x1, x1, 4
csrw proc2mngr, x1 > 14
nop
csrr x1, mngr2proc < 5
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
jal x2, lable_c
jal x2, lable_d
jal x3, lable_d
jal x2, lable_d
jal x2, lable_d
jal x2, lable_d
jal x2, lable_d
nop
nop
nop
nop
addi x1, x1, -5
nop
nop
nop
nop
nop
nop
nop
jal x2, lable_d
nop
nop
nop
lable_c:
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
addi x1, x1, 5
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x1 > 10
nop
nop
nop
jal x2, lable_e
nop
lable_d:
addi x1, x1, 10
nop
nop
nop
lable_e:
nop
csrw proc2mngr, x1 > 10
csrw proc2mngr, x2 > 0x2f8
csrw proc2mngr, x3 > 0x208