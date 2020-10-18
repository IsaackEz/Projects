#include<iostream>

using namespace std;

void IngresarValores(int [], int);
float promedio(int *, int);
void menor(int *, int);

int main(){
	int cantidad = 0;
	cout<<"Indica cuantos datos ingresaras: ";
	cin>>cantidad;
	if(cantidad < 1){
		cout<<"Error: cantidad debe ser mayor a cero..."<<endl;
		return 0;
	}
	int *valores = new int[cantidad];
	IngresarValores(valores, cantidad);
	float prom = promedio(valores, cantidad);
	cout<<"Promedio de los valores ingresados: "<<prom<<endl;
	delete[] valores;
	menor(valores, cantidad);
	
	return 0;
}

void IngresarValores(int vals[], int tam){
	for(int i = 0;i<tam;i++){
		cout<<"Ingresa el valor No. "<<(i+1)<<": ";
		cin>>vals[i];
	}
	cout<<endl;
}

float promedio(int *vals, int tam){
	int suma = *vals; //Inicializar suma con el primer elemento del arreglo que apunta vals.
	for(int i = 1;i<tam;i++){
		vals++;   //Desplazar una posicion el apuntador para que apunte al siguiente elemento
		suma += *vals;
	}
	return suma / (tam*1.0); //Regresar el promedio
}
void menor(int *vals, int tam){
	int min=0;	
}