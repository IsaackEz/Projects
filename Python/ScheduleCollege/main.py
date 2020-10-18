import re
import random
import time

with open("F:\Isaac\Documentos\GitHub\Proyects\Python\ScheduleCollege\profesores.txt", "r") as profesores:
    profs = profesores.read().splitlines()

with open("F:\Isaac\Documentos\GitHub\Proyects\Python\ScheduleCollege\disponibilidad.txt", "r") as disponibilidad:
    dispo = disponibilidad.read().splitlines()

with open("F:\Isaac\Documentos\GitHub\Proyects\Python\ScheduleCollege\materias.txt", "r") as materias:
    mater = materias.read().splitlines()

Nombre = []          #Nombres profesores
ID = []              #Ids
Horarios = []        #Horarios
NombreNuevo = []     #Nombres profesores de nuevo
IDNuevo = []         #ids de nuevo
NombreMateria = []   #Nombres de materias         

for x in range(len(dispo)):
    Horarios.append(re.findall(r'[0-9]+',dispo[x]))

for x in range(len(mater)):
    a = re.findall(r'[0-9]+', mater[x])
    b = a[0]
    IDNuevo.append(b)

for x in range(len(mater)):
    a = re.findall(r'\D+', mater[x])
    b = a[0]
    NombreMateria.append(b)

for x in range(len(dispo)):
    a = re.findall(r'\D+',dispo[x])
    b = a[0]
    NombreNuevo.append(b)

for x in range(len(profs)):
    a = re.findall(r'\D+',profs[x])
    b = a[0]
    Nombre.append(b)

for x in range(len(profs)):
    a = re.findall(r'^[0-9]+',profs[x])
    b = a[0]
    ID.append(b)

for x in range(len(Nombre)):
    Nombre[x] = Nombre[x].replace(",", "")

for x in range(len(NombreMateria)):
    NombreMateria[x] = NombreMateria[x].replace(";", "")

for x in range(len(NombreNuevo)):
    NombreNuevo[x] = NombreNuevo[x].replace(";", "")

def agendar(id,materia,nombre,horas):
    DIAS = ["Lunes","Martes","Miercoles","Jueves","Viernes"]
    HORAS = [7,8,9,10,11,12,13,14,15,16,17,18,19,20]
            #0,1,2,03,04,05,06,07,08,09,10,11,12,13
    HoraMatSem = 0  #Horas de la materia a la semana
    for i in range(len(DIAS)):
        HoraDisp = (int(horas[1])-int(horas[0])) #horas[1] hora de salida horas[0] hora de entrada  / HoraDisp = horas del dia dispoibles 
        for j in range(len(HORAS)):
            if((((int(horas[0]))- j)<=7) and ((int(horas[0])) != (13 or 14)) and (int(horas[0])<20) and (int(horas[0])>6)):
                if((int(horas[1])-j)>7 and ((int(horas[1])) != (14 or 15)) and (int(horas[1])<21) and (int(horas[1])>7)):
                    if(HoraMatSem < 4):
                        if(HoraDisp > 0):
                            if (DIAS[i],HORAS[j]) not in agenda:
                                agenda[DIAS[i],HORAS[j]] = materia
                                HoraMatSem += 1
                                HoraDisp -= 1
                                
    if(HoraMatSem != 4):
        print("La materia:",materia,"no se pudo agendar completamente.")

def imprimir():
  
  print("\nHora\t\tLunes\t\t\t\tMartes\t\t\t\tMiercoles\t\t\tJueves\t\t\t\tViernes")
  print("\n")
  
  ##################7AM#########################
  print("7-8 \t\t", end='')
  if("Lunes",7) in agenda:
    print(agenda["Lunes",7],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",7) in agenda:
    print(agenda["Martes",7],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",7) in agenda:
    print(agenda["Miercoles",7],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",7) in agenda:
    print(agenda["Jueves",7],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",7) in agenda:
    print(agenda["Viernes",7],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  print("\n")
    ##################8AM#########################
  print("8-9 \t\t", end='')
  if("Lunes",8) in agenda:
    print(agenda["Lunes",8],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",8) in agenda:
    print(agenda["Martes",8],"\t\t\t" , end='')
  else:
    print("----------\t\t\t ", end='')
  if("Miercoles",8) in agenda:
    print(agenda["Miercoles",8],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",8) in agenda:
    print(agenda["Jueves",8],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",8) in agenda:
    print(agenda["Viernes",8],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  print("\n")
    ##################9AM#########################
  print("9-10 \t\t", end='')
  if("Lunes",9) in agenda:
    print(agenda["Lunes",9],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",9) in agenda:
    print(agenda["Martes",9],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",9) in agenda:
    print(agenda["Miercoles",9],"\t\t\t" , end='')
  else:
    print("----------\t\t\t ", end='')
  if("Jueves",9) in agenda:
    print(agenda["Jueves",9],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",9) in agenda:
    print(agenda["Viernes",9],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')

  print("\n")

    ##################10AM#########################

  print("10-11 \t\t", end='')
  if("Lunes",10) in agenda:
    print(agenda["Lunes",10],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",10) in agenda:
    print(agenda["Martes",10],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",10) in agenda:
    print(agenda["Miercoles",10],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",10) in agenda:
    print(agenda["Jueves",10],"\t\t\t" , end='')
  else:
    print("----------\t\t\t ", end='')
  if("Viernes",10) in agenda:
    print(agenda["Viernes",10],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')

  print("\n")
    ##################11AM#########################

  print("11-12 \t\t", end='')
  if("Lunes",11) in agenda:
    print(agenda["Lunes",11],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",11) in agenda:
    print(agenda["Martes",11],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",11) in agenda:
    print(agenda["Miercoles",11],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",11) in agenda:
    print(agenda["Jueves",11],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",11) in agenda:
    print(agenda["Viernes",11],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')

  print("\n")


    ##################12PM#########################

  print("12-13 \t\t", end='')
  if("Lunes",12) in agenda:
    print(agenda["Lunes",12],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",12) in agenda:
    print(agenda["Martes",12],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",12) in agenda:
    print(agenda["Miercoles",12],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",12) in agenda:
    print(agenda["Jueves",12],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",12) in agenda:
    print(agenda["Viernes",12],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')

  print("\n\n")

  print("13-15       --------------------------------------HORA DE COMIDA---------------------------------------")
  print("\n")
  ##################15PM#########################
  print("15-16 \t\t", end='')
  if("Lunes",15) in agenda:
    print(agenda["Lunes",15],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",15) in agenda:
    print(agenda["Martes",15],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",15) in agenda:
    print(agenda["Miercoles",15],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",15) in agenda:
    print(agenda["Jueves",15],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",15) in agenda:
    print(agenda["Viernes",15],"\t\t\t" , end='')
  else:
    print("----------\t\t\t\t", end='')

  print("\n")
  ##################16PM#########################
  print("16-17 \t\t", end='')
  if("Lunes",16) in agenda:
    print(agenda["Lunes",16],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",16) in agenda:
    print(agenda["Martes",16],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",16) in agenda:
    print(agenda["Miercoles",16],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",16) in agenda:
    print(agenda["Jueves",16],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",16) in agenda:
    print(agenda["Viernes",16],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  print("\n")
  ##################17PM#########################
  print("17-18 \t\t", end='')
  if("Lunes",17) in agenda:
    print(agenda["Lunes",17],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",17) in agenda:
    print(agenda["Martes",17],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",17) in agenda:
    print(agenda["Miercoles",17],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",17) in agenda:
    print(agenda["Jueves",17],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",17) in agenda:
    print(agenda["Viernes",17],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  print("\n")
  ##################18PM#########################
  print("18-19 \t\t", end='')
  if("Lunes",18) in agenda:
    print(agenda["Lunes",18],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",18) in agenda:
    print(agenda["Martes",18],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",18) in agenda:
    print(agenda["Miercoles",18],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",18) in agenda:
    print(agenda["Jueves",18],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",18) in agenda:
    print(agenda["Viernes",18],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  print("\n")
  ##################19PM#########################
  print("19-20 \t\t", end='')
  if("Lunes",19) in agenda:
    print(agenda["Lunes",19],"\t\t\t" ,end='')
  else:
    print("----------\t\t\t", end='')
  if("Martes",19) in agenda:
    print(agenda["Martes",19],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Miercoles",19) in agenda:
    print(agenda["Miercoles",19],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Jueves",19) in agenda:
    print(agenda["Jueves",19],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  if("Viernes",19) in agenda:
    print(agenda["Viernes",19],"\t\t\t" , end='')
  else:
    print("----------\t\t\t", end='')
  print("\n\n")

  for x in range(len(NombreMateria)):
    print(ID[x],"\t",NombreMateria[x]," \t",Nombre[x])

  return

class Materia:
    def __init__(self, materia_Id, nombre_Materia, nombre_Prof, horas_Clases = [2]):
        self.materia_Id = materia_Id
        self.nombre_Materia = nombre_Materia
        self.nombre_Prof = nombre_Prof
        self.horas_Clases = horas_Clases

    def imprimir_todo(self):
        print(self.materia_Id)
        print(self.nombre_Materia)
        print(self.nombre_Prof)
        print(self.horas_Clases)

ProfesDic = {}  #Llaves de id y contenidos de nombres de profesores
HorarioDic = {}  #Llaves de nombre y contenido de horarios
MateriaDic = {}  #Llaves de id y contenido de nombres de materias
agenda = {} #Agenda

for x in range(len(Nombre)):
    ProfesDic[ID[x]] = Nombre[x]  

for x in range(len(Horarios)):
    HorarioDic[NombreNuevo[x]] = Horarios[x]

for x in range(len(IDNuevo)):
    MateriaDic[IDNuevo[x]] = NombreMateria[x]

objs = []   

for x in range(len(NombreMateria)):
    objs.append(Materia(IDNuevo[x],MateriaDic[IDNuevo[x]],ProfesDic[IDNuevo[x]],HorarioDic[ProfesDic[IDNuevo[x]]]))

tam = len(objs)
order = random.sample(range(1,tam+1), tam)

inicio = time.perf_counter()
for x in range(tam):
  agendar(objs[order[x]-1].materia_Id, objs[order[x]-1].nombre_Materia, objs[order[x]-1].nombre_Prof, objs[order[x]-1].horas_Clases)
fin = time.perf_counter()

imprimir()
print("\nEl programa tardo:",(fin - inicio),"segundos.")