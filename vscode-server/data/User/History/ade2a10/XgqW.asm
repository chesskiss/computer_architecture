accumulate(int* a = x9, int n = x8):


        xor x1, x1
        xor x2, x2
        mov x3, 0x2000
.Loop:
        lw x4, 0(x3)
        add x2, x2, x4
        addi x3, 4

        bne x1


   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)
   #data section
   .data
   label_a:
   .word 5000

        
