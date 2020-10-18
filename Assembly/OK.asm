;Carlos Isaac Espinoza Alvarez
;Programacion en Ensamblador

;Corregir error de direccion inicial y la basura que sale al imprimir

.model small
.stack
.data
cadena1 db "Primera cadena $"
cadena2 db "Segunda cadena $"

IMPRIME MACRO CAD
	MOV AX, @DATA		;@Data esl aposicion de memoria del inicio del segmento de datos
	MOV DS, AX		;Guarda en DS la posicion del segmento de datos
	MOV AH, 09H		;configuro para imprimir cadena
	MOV DX, OFFSET CAD
	INT 21H

ENDM				;Termina la primer macro

SALTO MACRO SL
	MOV AH, 0EH
	MOV AL, SL
	INT 10H
ENDM				;Termina la segunda macro

.code
start:
	IMPRIME cadena1
	SALTO 10
	SALTO 13

	IMPRIME cadena2
	INT 10H
	MOV AH, 04CH		;Salir, sino se queda en un ciclo	
	INT 21H			; Ret
end start