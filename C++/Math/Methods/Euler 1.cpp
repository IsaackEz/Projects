#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

double f(double x, double y);
int contador = 7; 
const int TAM = 8;
double x[TAM]; 
double y[TAM]; 
double n = 2; 
double xf = 3; 

double h = 0;

int main()
{
	x[0] = 0; 
	y[0] = 1; 


	h = (xf - x[0]) / n;
	for (int i = 0; i < contador; i++) {
		x[i + 1] = x[i] + h;
		y[i + 1] = y[i] + (h * f(x[i], y[i]));

	}

	for (int i = 0; i < contador; i++) {
		cout << "x" << i << " = " << x[i] << ", y" << i << " = " << y[i] << endl;
	}

	cout << endl;
	return system("pause");
}


double f(double x, double y) {
	double fxy = 0;
	fxy = exp(x);

	return fxy;
}
