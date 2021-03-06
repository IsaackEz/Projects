;Carlos Isaac Espinoza Alvarez		Programacion en ensamblador
;Primer Examen Parcial
;Cibernetica

ORG 0100H			

MOV DX, OFFSET CADENA			;DESPLAZAMOENTO DE LA CADENA
MOV AH, 9				;CODIGO PARA IMPRIMIR CADENA
INT 21H					;LLAMA A LA INTERRUPCION 21

MOV AH, 0EH		
MOV AL, 09				;TAB
INT 10H

MOV AH, 0EH		
MOV AL, 09				;TAB
INT 10H

MOV SI, 0				;ASEGURAR QUE COMIENCE EN CERO
MOV BX, 5				;ASEGURAR QUE COMIENCE EN EL ULTIMO DIGITO EN ESTE CASO POSICION 5

COMPARAR:
	MOV AL, CADENA[SI]		;MUEVE EL PRIMER NUMERO DE LA CADENA A AL
	CMP AL, CADENA[BX]		;COMPARA 'AL' CON APUNTADOR 'SI', CON EL APUNTADOR DE 'BX'
	JNE SAL				;BRINCA CUANDO BX Y SI SON DIFERENTES
	INC SI				;INCREMENTAR SI
	DEC BX				;DECREMENTAR BX
	CMP CADENA[SI], "$"		;COMPARACION HASTA LLEGAR AL FINAL
	JZ BIEN				;BRINCA A BIEN
	LOOP COMPARAR
SAL:

MOV DX, OFFSET ERROR			;DESPLAZAMIENTO DE LA CADENA
MOV AH, 9				;CODIGO PARA IMPRIMIR CADENA
INT 21H					;LLAMA A LA INTERRUPCION 21

JMP FIN

BIEN:

MOV DX, OFFSET OK			;DESPLAZAMIENTO DE LA CADENA
MOV AH, 9				;CODIGO PARA IMPRIMIR CADENA
INT 21H					;LLAMA A LA INTERRUPCION 21
			
FIN:

MOV AH, 0EH		
MOV AL, 10				;SALTO DE LINEA
INT 10H	

MOV AH, 0EH		
MOV AL, 13				;RETORNO DE CARRO
INT 10H

MOV DX, OFFSET CADENA2			;DESPLAZAMOENTO DE LA CADENA
MOV AH, 9				;CODIGO PARA IMPRIMIR CADENA
INT 21H					;LLAMA A LA INTERRUPCION 21

MOV AH, 0EH		
MOV AL, 09				;TAB
INT 10H

MOV AH, 0EH		
MOV AL, 09				;TAB
INT 10H

MOV SI, 0				;ASEGURAR QUE COMIENCE EN CERO
MOV BX, 5				;ASEGURAR QUE COMIENCE EN EL ULTIMO DIGITO EN ESTE CASO POSICION 5

COMPARAR2:
	MOV AL, CADENA2[SI]		;MUEVE EL PRIMER NUMERO DE LA CADENA A AL
	CMP AL, CADENA2[BX]		;COMPARA 'AL' CON APUNTADOR 'SI', CON EL APUNTADOR DE 'BX'
	JNE SAL2			;BRINCA CUANDO BX Y SI SON DIFERENTES
	INC SI				;INCREMENTAR SI
	DEC BX				;DECREMENTAR BX
	CMP CADENA2[SI], "$"		;COMPARACION HASTA LLEGAR AL FINAL
	JZ BIEN2			;BRINCA A BIEN2
	LOOP COMPARAR2
SAL2:

MOV DX, OFFSET ERROR			;DESPLAZAMIENTO DE LA CADENA
MOV AH, 9				;CODIGO PARA IMPRIMIR CADENA
INT 21H					;LLAMA A LA INTERRUPCION 21

JMP FIN2

BIEN2:

MOV DX, OFFSET OK			;DESPLAZAMIENTO DE LA CADENA
MOV AH, 9				;CODIGO PARA IMPRIMIR CADENA
INT 21H					;LLAMA A LA INTERRUPCION 21

FIN2:
RET



;* DECLARACION DE CADENAS **
OK DB "SI ES CAPICUA $"
CADENA  DB "123321$"
CADENA2  DB "54856$"
ERROR DB "NO ES CAPICUA $"



;**************** CODIGO DEL EJERCICIO 7 DEL EXAMEN *******************************

;CARLOS ISAAC ESPINOZA ALVAREZ
;EJERCICIO 7 EXAMEN PRIMER PARCIAL

MOV AL, 'H'		;H SERA NUESTRA "BANDERA" DE HABILITADO
		
OUT INT, AL		;ESTOS REGISTROS SON LOS QUE TOMAN LA BANDERA H EN AL POR LO TANTO ESTAN HABILITADOS
OUT INH, AL		;USAMOS LA INSTRUCCION OUT PARA QUE TENGA DE SALIDA LOS REGISTROS QUE SE PIDEN
OUT MC, AL
OUT CONT, AL
OUT EXT, AL
OUT RTG, AL


MOV AL, 'I'		;CAMBIAMOS EL VALOR DEL REGISTRO DE AL, YA QUE TENERMOS QUE PONER INHABILITADOS CON 'I'

OUT EN, AL		;TODOS ESTOS REGISTROS ESTAN INHABILITADOS
OUT RIU, AL
OUT ALT, AL
OUT P, AL

RET