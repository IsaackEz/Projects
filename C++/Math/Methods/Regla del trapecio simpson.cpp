#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

//REGLA DEL TRAPECIO SIMPSON
//Desarrollado por Mario Alberto Ochoa González

/*
Esta regla se basa en aproximar el valor de una integral por una funcion lineal.
La integral de esta funcion lineal es igual al area debajo del trapecio

Se tienen aproximaciones de diferentes grados:
1er grado: se deben de utilizar por lo menos 3 puntos = (h/2) * [1, 2, 2,... , 1]
2do grado: se deben de utilizar por lo menos 5 puntos = (h/3) * [1, 4, 2, 4, 2, ..., 1]
3er grado: se deben de utilizar por lo menos 7 puntos = (3*h/8) * [1, 3, 3, 2, ..., 1]

Se tienen que multiplicar por cada punto en la tabla que se nos de o los valores que 
se obtenga de una funcion.

(h/2) * [1 * f(x1), 2 * f(x2), 2 * f(x3),... , 1 f(xn)]

la h se obtiene por medio de la formula:

h = (b-a)/(n-1)

sabiendo que 'n' es el numero de datos de la tabla, 'b' es el limite superior 
de la integral y 'a' es el limite inferior de la integral

*/

//DECLARACION DE VARIABLES
float pi = 3.1416;
const int TAM = 8;
double xArray[TAM];
double fArray[TAM];

int main()
{
	for (int i = 0; i < TAM; i++) { //inicia los valores de los arreglos en NULL
		xArray[i] = NULL;
		fArray[i] = NULL;
	}

	int funcion = 1; //si funcion es 1, sí me van a dar una funcion para sacar los datos, en
	//caso de que funcion sea 0, me van a dar los valores de la tabla

	if (funcion == 1) {
		double f = (1 / sqrt(2 * pi))*exp((pow(x, 2) / 2)*-1);//funcion f(x)

	}


	return system("pause");
}
