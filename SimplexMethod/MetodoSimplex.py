import numpy as np  #Libreria de python para dar soporte a largas matrices y operaciones matematias
                   #Z   X1  X2   S1  S2   Res
Tabla = np.array(((0.0, 1,  1,   0,  1, 0, 200),   #Matrix
                  (0,   1,   1,   -1, 0, 1, 150),
                  (1,  -3000, -1000,  1000, 0, 0, 0)))

decision = input("Max o Min: ") #Se decide si el problema es de maximizacion o de minimizacion
variables = input("Numero de variables: ")  #Se decide cuantas variables existen

def maximizacion(var):
    for i in range(var):    #Loop para saber los resultados de las variables
        if (sum(Tabla[:,i+1])==1):  #Comprobamos si la columna que estamos checando sea = 1 (Esto para encontrar X y comprobar que son las variables reales)
            filaX = np.where(Tabla[:,i+1]==1)   #Obtenemos la fila de nuestra variable X
            x = Tabla[int(filaX[0])][-1]    #Guardamos en x la solucion para X
        else:
            x = 0   #Si no hay solucion se le asigna 0
        print("X"+str(i+1)+": "+str(x)) #Imprimimos el valor de las variables
    print("Z:", Tabla[-1][-1])    #Imprimimos el valor de Z

def minimizacion(var):
    for i in range(var):    #Loop para saber los resultados de las variables
        x = Tabla[-1][-2-i]    #Guardamos en x la solucion para X
        print("X"+str(i+1)+": "+str(x)) #Imprimimos el valor de las variables
    print("Z:", Tabla[-1][-1])    #Imprimimos el valor de Z

flag = 1 #Bandera que indica si encuentra negativos en fZ
while(flag != 0):   #Loop para quitar los negativos en fZ
    cocRadios = []  #Array para los cocientes de Radio
    min_funcionZ = np.amin(Tabla[-1][:])   #Encontramos el minimo en la fZ
    cPivote = np.where(Tabla[-1][:] == min_funcionZ) #Obtenemos la fila y la columna del minimo en FZ
    if min_funcionZ < 0:  #Si el minimo fZ es menor a 0 realizamos el sig code
        filasPositivas = np.where((Tabla[:,cPivote[0][0]] > 0))  #Obtenemos los valores positivos de la cPivote Fila y Columna  
        for i in range(len(filasPositivas[0])):     #Loop para obtener los cocientes de radio y saber el minimo
            cocRadio = np.divide((Tabla[filasPositivas[0][i]][-1]),(Tabla[filasPositivas[0][i]][cPivote[0][0]]))  #Division del cociente de Radio
            cocRadios.append(cocRadio)  #Los vamos colocando en otro array que definimos en la linea 10
            cosPivote = np.amin(cocRadios)  #Obtenemos el minimo de los cociente de radio
            igcosPivote = [j for j, igcosPivote in enumerate(cocRadios) if igcosPivote == cosPivote] #Aqui guardamos todos los minimos para fPivote
            posCosPivote = np.where(cosPivote == cocRadios)
            if(len(igcosPivote) > 1):  #Checamos si existen mas de una fila pivote
                fPivote = filasPositivas[0][0]  #Si hay mas de 1 se guarda la primera posicion del minimo en variable fPivote
            else:
                fPivote = filasPositivas[0][int(posCosPivote[0])]  #Si no hay se guarda la posicion del minimo en variable fPivote
        Tabla[fPivote][:] = (Tabla[fPivote][:])/(Tabla[fPivote][cPivote[0][0]]) #Recalculamos la fila pivote la cual sera nuestra fila entrante
        for i in range(len(Tabla)):   #Loop para recalcular las demas filas
            if (i != fPivote):  #Sentencia para evitar modificar nuestra fila entrante
                Tabla[i][:] = Tabla[i][:] - (Tabla[i][cPivote[0][0]]*Tabla[fPivote][:])   #Formula para calcular las filas nuevas
    else:
        flag = 0    #El programa no encontro negativos en fZ y cambia la bandera

if(decision == "Max" or decision == "max"): #Si es de maximizacion se ejecuta la funcion de maximizacion
    maximizacion(int(variables))
elif(decision == "Min" or decision == "min"):  #Si es de maximizacion se ejecuta la funcion de minimizacion
    minimizacion(int(variables))
#print("\n",Tabla)
