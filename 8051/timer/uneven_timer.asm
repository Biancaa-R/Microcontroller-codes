MOV TMOD ,#01H
AGAIN: MOV TL0,#8AH
MOV TH0,#0EAH
MOV P0,#0FFH
ACALL DELAY
ORG 300H
DELAY: SETB TR0
HERE: JNB TF0,HERE
CLR TF0
CLR TR0
RET
MOV TH0 ,#0B8H
MOV TL0, #75H
MOV P0,#00H
ACALL DELAY
LJMP AGAIN