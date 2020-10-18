
.model small
.stack
.data

cadena1 db "ESTOS SON LOS MACROS$"
cadena2 db "DAME UN NUMERO$"

IMPRIME MACRO CAD
	MOV AX, @DATA	;esto es nuevo
	MOV DS,AX	
	MOV AH, 09H	;configuro para imprimir cadena
	MOV DX, OFFSET CAD
	INT 21H

ENDM

SALTO MACRO SL
	MOV AH, 0EH
	MOV AL, SL
	INT 10H
ENDM

.code
IMPRIME cadena1

SALTO 10
SALTO 13

IMPRIME cadena2


MOV AH, 0EH
MOV AL, 109
INT 10H

MOV AH, 04CH	; es para salir sino se queda ciclando
INT 21H	; ret