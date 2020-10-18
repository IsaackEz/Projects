;Carlos Isaac Espinoza Alvarez
;Cibernetica
;Programacion en ensamblador
;Modo grafico nivel pixel iniciales 'CIEA'

MOV AH, 0h			;CONFIGURAR PANTALLA
MOV AL, 13h
INT 10H

MOV AH, 0CH
MOV AL, 1
MOV DX, 30
MOV CX, 20
LOOP:
	INC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 90		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ SAL		;BRINCO SI ES CERO
	JMP LOOP
SAL:
MOV DX, 40
MOV CX, 10
LOOP1:
	INC CX			;SE INCREMENTA EN HORIZONTAL
	DEC DX
	INT 10H
	CMP CX, 1		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	CMP DX, 1
	JZ FIN
	JMP LOOP1
FIN:
	
	INC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 120		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ SAL2			;BRINCO SI ES CERO
	JMP FIN
SAL2:

	INC CX			;SE INCREMENTA EN HORIZONTAL
	INC DX
	INT 10H
	CMP CX, 150		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	CMP DX, 40
	JZ FIN2
	JMP SAL2
FIN2:

MOV DX, 30
MOV CX, 150

LINEA3:
	INC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 90		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FIN3			;BRINCO SI ES CERO
	JMP LINEA3
FIN3:
	DEC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 20		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FIN4			;BRINCO SI ES CERO
	JMP FIN3
FIN4:
RET
;Carlos Isaac Espinoza Alvarez
;Cibernetica
;Programacion en ensamblador
;Modo grafico nivel pixel iniciales 'CIEA'

MOV AH, 0h			;CONFIGURAR PANTALLA
MOV AL, 13h
INT 10H

MOV AH, 0CH
MOV AL, 1
MOV DX, 30
MOV CX, 20
LOOP:
	INC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 90		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ SAL		;BRINCO SI ES CERO
	JMP LOOP
SAL:
MOV DX, 40
MOV CX, 10
LOOP1:
	INC CX			;SE INCREMENTA EN HORIZONTAL
	DEC DX
	INT 10H
	CMP CX, 1		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	CMP DX, 1
	JZ FIN
	JMP LOOP1
FIN:


MOV DX, 40
MOV CX, 35

VENT:
	INC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 55		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV			;BRINCO SI ES CERO
	JMP VENT
FINV:
	INC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 60		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV1			;BRINCO SI ES CERO
	JMP FINV
FINV1:
	DEC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 35		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV2			;BRINCO SI ES CERO
	JMP FINV1
FINV2:

	DEC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 40		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV3			;BRINCO SI ES CERO
	JMP FINV2
FINV3:

MOV DX, 50

VENT1:
	INC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 55		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV5			;BRINCO SI ES CERO
	JMP VENT1
FINV5:

MOV CX, 45
MOV DX, 40

VENT3:
	INC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 60		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV6			;BRINCO SI ES CERO
	JMP VENT3
FINV6:

MOV DX, 40
MOV CX, 85

VENT11:
	INC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 105		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV11			;BRINCO SI ES CERO
	JMP VENT11
FINV11:
	INC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 60		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV111			;BRINCO SI ES CERO
	JMP FINV11
FINV111:
	DEC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 85		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV21			;BRINCO SI ES CERO
	JMP FINV111
FINV21:

	DEC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 40		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV31			;BRINCO SI ES CERO
	JMP FINV21
FINV31:

MOV DX, 50

VENT111:
	INC CX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP CX, 105		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV51			;BRINCO SI ES CERO
	JMP VENT111
FINV51:

MOV CX, 85
MOV DX, 40

VENT31:
	INC DX			;SE INCREMENTA EN HORIZONTAL
	INT 10H
	CMP DX, 60		;COMPARA CX HASTA QUE LA DIFERENCIA SEA '0'
	JZ FINV61			;BRINCO SI ES CERO
	JMP VENT31
FINV61:
RET