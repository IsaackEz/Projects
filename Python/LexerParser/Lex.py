import ply.lex as lex
import ply.yacc as yacc
import sys

tokens = [
    'INT',
    'FLOAT',
    'TIPO',
    'LETRA',
    'SUM',
    'RES',
    'MUL',
    'DIV',
    'IGUAL', 
    'SWITCH',
    'PARE1',
    'PARE2'
]

t_LETRA = r'[a-zA-Z_]+'
t_SUM = r'\+'
t_RES = r'\-'
t_MUL = r'\*'
t_DIV = r'\/'
t_IGUAL = r'\='
t_SWITCH = r'intercambio'
t_PARE1 = r'\('
t_PARE2 = r'\)'
t_TIPO = r'integer|real'


t_ignore = r' '

def t_FLOAT(t):
    r'\d+\.\d+'
    t.value = float(t.value)
    return t

def t_INT(t):
    r'\-?\d+'
    t.value = int(t.value)
    return t

def t_error(t):
    print("Caracter invalido.")
    t.lexer.skip(1)

lexer = lex.lex()



precedencia = (
    
    ('left', 'SUM', 'RES'),
    ('left', 'MUL', 'DIV')
)

dic = {}

def p_statement_var(t):
    'statement : TIPO LETRA IGUAL expression'
    if t[1]=='integer':
        if t[4]==int(t[4]):
            dic[t[2]] = t[4]
        else:
            print("Error: Assigning a real value to an integer")
    elif t[1] == 'real':
        if t[4] == float(t[4]) or t[4]==int(t[4]):
            dic[t[2]] = t[4]
        else:
            print("Error: Unkown value")    
    print(dic)

def p_statement_exp(p):
    ' statement : expression '
    print(run(p[1]))
    if run(p[1])==int(run(p[1])):
        print("El resultado es integer")
    elif run(p[1])==float(run(p[1])):
        print("El resultado es real")
    else:
        print("El resultado es invalido")

def p_intercambio(p):
    ' statement : SWITCH LETRA LETRA '
    try:
        temp = dic[p[2]]
        dic[p[2]] = dic[p[3]]
        dic[p[3]] = temp
        print(p[2] , " = " , dic[p[2]])
        print(p[3] , " = " , dic[p[3]])            
    except LookupError:
        return 'Alguna variable no fue declarada.'



def p_expression(p):
    '''
    expression : expression SUM expression
               | expression RES expression
               | expression MUL expression
               | expression DIV expression
    '''
    p[0] = (p[2], p[1], p[3])
    print(p[0])

def p_expression_pare(p):
    'expression : PARE1 expression PARE2'
    p[0] = p[2]

def p_expression_int_float(p):
    '''
    expression : INT
               | FLOAT
    '''
    p[0] = p[1]

def p_expression_var(p):
    '''
    expression : LETRA
    '''
    p[0] = ('var', p[1])

def p_error(p):
    print("Syntax error.")


parser = yacc.yacc()

def run(p):
    if type(p) == tuple:
        if p[0] == '+':
            return run(p[1]) + run(p[2])
        elif p[0] == '-':   #La resta funciona solo con espacios por detectar el signo en el numero correspondiente
            return run(p[1]) - run(p[2])
        elif p[0] == '*':
            return run(p[1]) * run(p[2])
        elif p[0] == '/':
            return run(p[1]) / run(p[2])
        elif p[0] == '=':
            dic[p[1]] = run(p[2])
        elif p[0] == 'var':
            if p[1] not in dic:
                return 'Variable no declarada'
            else:
                return dic[p[1]]
    else:
        return p

while True:
    try:
        s = input('>>')
    except EOFError:
        break
    parser.parse(s)