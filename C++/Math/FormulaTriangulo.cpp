#include  <iostream>
#include <cmath>

using  namespace  std;

double hipotenusa(double, double);
double area(double, double);
double perimetro(double, double);

int  main()  {
	//Contexto
	int cantidad = 0;
	double *bases = 0, *alturas = 0;
	//Ingresar datos
	cout<<"Cuantos triangulos ingresaras?";cin>>cantidad;
	//Verificacion de datos
	if(cantidad < 1){
		cout<<"ERROR: La cantidad debe ser mayor a 1...";
		system("pause");
		return -1;
	}
	bases = new double[cantidad];
	alturas = new double[cantidad];
	
	for(int i = 0;i<cantidad;i++){
		cout<<"Ingresa base: ";
		cin>>*(bases+1);
		cout<<"Ingresa altura: ";
		cin>>*(alturas+1);
	}
	//calculo de resultados
	for(int j = 0;j < cantidad;j++){
		cout<<"Datos resultantes para el triangulo No. "<<(j+1)<<endl;
		//Calcular la hipotenusa
		cout<<"Hipotenusa: "<<hipotenusa(*(bases+1), *(alturas+1))<<endl;
		//Calcular el area
		cout<<"Area: "<<area(*(bases+1), *(alturas+1))<<endl;
		//Calcular el perimetro
		cout<<"Perimetro: "<<perimetro(*(bases+1), *(alturas+1))<<endl;
	}
	//Liberar memoria
	delete[]bases;
	delete[]alturas;
	return 0;
}
double hipotenusa(double b, double a){
	return sqrt(a*a+b*b);
}
double area(double b, double a){
	return (b*a)/2;
}
double perimetro(double b, double a){
	return a + b + hipotenusa(a,b);
}

