addi x1, x0, 5
addi x2, x0, 4
mul x3, x1, x2 // 20
mul x3, x3, x3 // 400
add x3, x3, x3 // 800
add x3, x3, x3 //1600
csrw proc2mngr, x3 > 1600