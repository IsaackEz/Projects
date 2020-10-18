#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

//Doolitle (método para matrices)
//Desarrollado por Mario Alberto Ochoa González
//lo único que tienes que hacer es cambiar los valores de 
//la matriz A y los resultados de la matriz inicial A

using namespace std;

//Matriz A
float a11 = 4, a12 = 2, a13 = 18;
float a21 = 2, a22 = 18, a23 = 26;
float a31 = 18, a32 = 26, a33 = 114;

//Resultados de la matriz inicial A
float r1 = 18;
float r2 = 26;
float r3 = 114;

//Matriz lower
float L11 = 1, L12 = 0, L13 = 0;
float L21 = 0, L22 = 1, L23 = 0;
float L31 = 0, L32 = 0, L33 = 1;

//Matriz upper
float u11 = 0, u12 = 0, u13 = 0;
float u21 = 0, u22 = 0, u23 = 0;
float u31 = 0, u32 = 0, u33 = 0;

//Matriz Y
float Y1 = 0;
float Y2 = 0;
float Y3 = 0;

//Matriz x (resultados de x, y y z)

float x = 0;
float y = 0;
float z = 0;


int main()
{

	//Imprimiendo matriz ingresada

	cout << "Matriz ingresada" << endl << endl;
	cout << "( " << a11 << " " << a12 << " " << a13 << " )   (" << r1 << ")" << endl;
	cout << "( " << a21 << " " << a22 << " " << a23 << " ) = (" << r2 << ")" << endl;
	cout << "( " << a31 << " " << a32 << " " << a33 << " )   (" << r3 << ")" << endl << endl;


	//Encontrando valores de u y L
	//paso 1
	u11 = a11;
	u12 = a12;
	u13 = a13;

	//paso 2
	L21 = a21 / u11;
	u22 = a22 - (L21 * u12);
	u23 = a23 - (L21 * u13);

	//paso 3
	L31 = a31 / u11;
	L32 = (a32 - (L31 * u12)) / u22;
	u33 = a33 - (L31 * u13) - (L32 * u23);


	//Imprimir matriz upper

	cout << "Matriz Upper" << endl << endl;
	cout << "( " << u11 << " " << u12 << " " << u13 << " )" << endl;
	cout << "( " << u21 << " " << u22 << " " << u23 << " )" << endl;
	cout << "( " << u31 << " " << u32 << " " << u33 << " )" << endl << endl;


	//Imprimir matriz lower

	cout << "Matriz Lower" << endl << endl;
	cout << "( " << L11 << " " << L12 << " " << L13 << " )" << endl;
	cout << "( " << L21 << " " << L22 << " " << L23 << " )" << endl;
	cout << "( " << L31 << " " << L32 << " " << L33 << " )" << endl << endl;


	//Multiplicación de L por Y (se tiene que igualar a los 3 resultados r1, r2 y r3 de la matriz inicial)
	Y1 = r1;
	Y2 = r2 - (L21 * Y1);
	Y3 = r3 - (L31 * Y1) - (L32 * Y2);


	//Imprimir Y

	cout << "Imprimiendo Y:" << endl << endl;
	cout << "Y1 = " << Y1 << endl;
	cout << "Y2 = " << Y2 << endl;
	cout << "Y3 = " << Y3 << endl << endl;


	//Ahora se multimplica la matriz Upper por la matriz x 
	//(la matriz de los resultados de x, y y z) utilizando los valores de la 
	//martiz Y


	z = Y3 / u33;
	y = (Y2 - (u23 * z)) / u22;
	x = (Y1 - (u12 * y) - (u13 * z)) / u11;

	//imprimiendo la matriz x (resultados de x, y y z)

	cout << "Imprimiendo resultados:" << endl << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl << endl;


	return system("pause");
}
