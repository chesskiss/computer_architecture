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