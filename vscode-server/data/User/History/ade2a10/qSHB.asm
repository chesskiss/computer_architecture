.accumulate // a = 
        xor x1, x1        
        xor x2, x2
.Loop:
        lw x2, 0(ebx)
        add x1, x1, x2
        addi ebx, 4
        addi ecx, -1
        bne ecx, x0, Loop



??
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)
   #data section
   .data
   label_a:
   .word 5000

        
