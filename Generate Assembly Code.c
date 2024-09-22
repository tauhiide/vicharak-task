/*int a;
int b;
int c;
a = 10;
b = 20;
c = a+b;
if(c==30){
c = c+1;
} */
// ASSEMBLY CODE: 
;Variable Declartions
LOAD #10 ; Load Immediate value 10 in register
STORE a  ; Store value in memory at a
LOAD #20 ; Load Immediate value 20 in register
STORE b  ; Store value in memory at b
LOAD a   ; Load value of a
ADD b    ; Add value of b with a
STORE c  ; Store result in c

;Conditional Check
LOAD c   ; Load value of c
SUB #30  ; Subtract 30
JNZ endif ; Jump to endif if result is not zero

;if body
LOAD c ; Load value of c
ADD #1 ; increment value by 1
STORE c ; Store result back in c

endif:
