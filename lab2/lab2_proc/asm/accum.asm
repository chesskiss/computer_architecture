# load array pointers
csrr  x1, mngr2proc < 100
csrr  x2, mngr2proc < 0x2000
add   x3, x0, x1
add x5, x0, x0

.Loop:
        lw x4, 0(x2)
        add x5, x5, x4
        addi x2, 4
        addi x3, -1
        bne x3, x0, Loop



   sw x3,  label_a(x1)
   #data section
   .data
   label_a:
   .word 5000

