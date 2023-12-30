    .ORIG	x3000
    LD R1, ADDRES
    ADD R2, R2. #0
    ADD R2, R2, #10

LOOP

    .ADDRES .FILL	x5000
    .ALERT  .STRINGZ	"So chan co trong 10 so la"
    .END