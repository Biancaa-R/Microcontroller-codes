;TTL PROGRAM:
	AREA Addition, CODE, READONLY
ENTRY
	MOV R0,#10
	MOV R1,#0
LOOP 
	ADD R1, R0
	SUBS R0, #1
	BNE LOOP
	LDR R2,=SUM
	STR R1,[R2]
STOP B STOP
	AREA RESULT, DATA, READWRITE
SUM DCD 0
	END