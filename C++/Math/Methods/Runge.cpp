#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>



using namespace std;

//MÉTODO DE RUNGE KUTTA
//Desarrollado por Mario Alberto Ochoa González
/*
Es de orden superior - 4to orden
Sirve para sacar los siguientes datos de datos ya especificados, sabiendo que tenemos condiciones
iniciales
*/

//DECLARACION DE VARIBLES

double f(double x, double y); //funcion a utilizar, CAMBIAR POR FAVOR
int contador = 3; //define las veces que se repite el ciclo para sacar más valores de la tabla
const int TAM = 5;
double x[TAM]; //arreglo utilizado para valores de la tabla
double y[TAM]; //arreglo utilizado para valores de la tabla
double k[4];
double n = 2; //modificar, es una condicion inicial del problema n = 2
double xf = 3; //modificar, es una condicion inicial del problema y(3) = ?


double h = 0;

int main()
{
	x[0] = 1; //modificar, es una condicion inicial del problema y(1) = 1.5
	y[0] = 1.5; //modificar, es una condicion inicial del problema y(1) = 1.5

	h = .2;

	for (int i = 0; i < contador; i++) {
		x[i + 1] = x[i] + h;

		k[0] = f(x[i], y[i]);
		k[1] = f(x[i] + (h / 2), y[i] + ((h*k[0]) / 2));
		k[2] = f(x[i] + (h / 2), y[i] + ((h*k[1]) / 2));
		k[3] = f(x[i] + h, y[i] + (k[2] * h));

		y[i + 1] = y[0] + h / 6 * (k[0] + (2 * k[1]) + (2 * k[2]) + k[3]);

	}

	for (int i = 0; i < contador; i++) {
		cout << "x" << i << " = " << x[i] << ", y" << i << " = " << y[i] << endl;
	}

	cout << endl;
	return system("pause");
}


double f(double x, double y) {
	double fxy = 0;
	fxy = pow(x,2) + pow(y, 2);

	return fxy;
}