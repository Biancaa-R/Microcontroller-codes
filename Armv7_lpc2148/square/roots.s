	AREA SQUARE,CODE,READONLY
ENTRY
	LDR R0,=TABLE
	LDR R1,=3
	SUB R1,#1
	ADD R0,R0,R1
	LDRB R2,[R0]
STOP B STOP
TABLE DCB 01,04,06,09,16,25,49
	END