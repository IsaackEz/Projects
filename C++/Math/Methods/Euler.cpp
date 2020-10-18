#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

//MÉTODO DE EULER
//Desarrollado por Mario Alberto Ochoa González

/*
Solucion de ecuaciones diferenciales:
Ecuacion diferencial - una variable dependiente y sus derivadas con respecto a 
una o más variables independientes

dy/dx = f(x, y) 

Variable dependiente: y
Variable independiente: x

Se necesitan determinar los valores de 'y' en un problema de valor inicial:

y(x0) = y0
y(xf) = ?

? = yf		->		Es el valor que se busca

Se resuelve el problema de valor inicial en 'n' subintervalos de amplitud h 

h = (xf - x0) / n

Conociendo el valor de x, se puede encontrar un valor de y: 

yi+1 = yi +h * f(xi,yi)

Como ejemplo tenemos que:
n = 3
dy/dx + y = x	->		dy/dx = x - y
y(0) = 2
y(1) = ?

*/


//DEFINICION DE VARIABLES

double f(double x, double y); //funcion a utilizar, CAMBIAR POR FAVOR
int contador = 5; //define las veces que se repite el ciclo para sacar más valores de la tabla
const int TAM = 6;
double x[TAM]; //arreglo utilizado para valores de la tabla
double y[TAM]; //arreglo utilizado para valores de la tabla
double n = 3; //modificar, es una condicion inicial del problema n = 3
double xf = 1; //modificar, es una condicion inicial del problema y(1) = ?


double h = 0;

int main()
{
	x[0] = 0; //modificar, es una condicion inicial del problema y(0) = 2
	y[0] = 2; //modificar, es una condicion inicial del problema y(0) = 2

	h = (xf - x[0]) / n;

	for (int i = 0; i < contador; i++) {
		x[i + 1] = x[i] + h;
		y[i + 1] = y[i] + h * f(x[i],y[i]);

	}

	for (int i = 0; i < contador; i++) {
		cout <<"x"<<i<<" = "<< x[i] << ", y"<<i<<" = " << y[i] << endl;
	}

	cout << endl;
	return system("pause");
}


double f(double x, double y) {
	double fxy = 0;
	fxy = x - y;

	return fxy;
}