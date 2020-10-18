#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

//MÉTODO DE CUADRATURAS DE GAUSS
//Desarrollado por Mario Alberto Ochoa González

/*
tenemos la integral de una funcion f(x) con límite inferior 'a' y límite superior 'b'
El objetivo de este método es cambiar los límites [a, b] a [-1, 1] usando la siguiente
fórmula:

z = (2x - (a+b))/ b - a

cuya equivalencia sería:

integral de -1 a 1 de f(z)dz = w1*F(z1) + w2*F(z2) + ... + wn*F(zn)

Se pueden utilizar cierta cantidad de puntos cuyos coeficientes de w y abscisas de z 
fueron definidas por Gauss

*/

//DECLARACION DE VARIABLES
//hay que cambiar los limites ('a' y 'b'), la funcion 'f' y el numero de puntos que se quiere

double pi = 3.1416;
double a = -0.8;
double b = 1.5;
double rdz = (b - a) / 2;
int puntos = 3;//soportando actualmente 2 y 3 puntos
double z = 0;
double x = 0;
double f = 0;

const int TAM = 4;
double wa[TAM];
double za[TAM];
double mult[TAM];
double res = 0;

int main()
{
	for (int i = 0; i < TAM; i++) {
		wa[i] = 0.0;
		za[i] = 0.0;
		mult[i] = 0.0;
	}

	cout << "x = " << rdz << "z + " << (a + b) / 2 << endl;
	cout << "dx = " << rdz << "dz" << endl;
	cout << "Numero de puntos: " << puntos << endl;


	if (puntos == 2) {
		wa[0] = 1;
		wa[1] = 1;

		za[0] = -0.5773502692;
		za[1] = 0.5773502692;

	}

	if (puntos == 3) {
		wa[0] = 0.5555555555;
		wa[1] = 0.8888888888;
		wa[2] = 0.5555555555;

		za[0] = -0.7745966692;
		za[1] = 0.0000000000000000000000001; //por alguna razón 0 lo toma como NULL, por esto ponemos un numero muy cercano a 0
		za[2] = 0.7745966692;

	}

	cout << endl;
	for (int i = 0; i < TAM; i++) {
		z = za[i];
		x = (rdz * z) + (a + b) / 2;
		f = (1 / sqrt(2 * pi))*exp((pow(x, 2) / 2)*-1);//funcion f(x)

		mult[i] = wa[i] * f; 
		cout<<"("<< wa[i] << " x " << f << ") ";

		if (za[i+1] == 0.0) {
			break;
		}
		cout << "+ ";
	}
	cout << endl;


	for (int i = 0; i < TAM; i++) {
		res = res + mult[i];

		if (za[i + 1] == 0.0) {
			break;
		}
	}
	
	res = res * rdz;
	cout << endl << "El resultado es: " << res << endl;

	return system("pause");
}
