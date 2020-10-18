MOV AH, 0Eh
MOV AL, 72		;Imprime H
INT 10h	
		
MOV AH, 0Eh
MOV AL, 111		;Imprime o
INT 10h

MOV AH, 0Eh
MOV AL, 108		;Imprime l
INT 10h

MOV AH, 0Eh
MOV AL, 97		;Imprime a
INT 10h

MOV AL, 32		; Espacio
INT 10H

MOV AH, 0Eh
MOV AL, 109		;Imprime m
INT 10h

MOV AH, 0Eh
MOV AL, 117		;Imprime u
INT 10h

MOV AH, 0Eh
MOV AL, 110		;Imprime n
INT 10h

MOV AH, 0Eh
MOV AL, 100		;Imprime d
INT 10h

MOV AH, 0Eh
MOV AL, 111		;Imprime o
INT 10h

RET			;Termina el programa