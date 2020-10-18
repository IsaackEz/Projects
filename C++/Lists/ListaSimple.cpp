#include<iostream>
#include "listasimple.h"

using namespace std;

void imprimir(ListaSimple lista);
void invertir(ListaSimple lista);
void ordenar(ListaSimple lista);

int main()
{
	ListaSimple lista;
//	lista.inicio = 0; // No es necesario si ListaSimple tiene una funci�n de inicializaci�n.

	lista.agregar(5);
	lista.eliminar(5);
	lista.agregar(7);
	lista.agregar(-2);
	
	cout << "Antes de insertar: " << endl;
	imprimir(lista);

	lista.insertar(7, 9);
	lista.insertar(-2, -9);
	
	cout << endl << "Despues de insertar: " << endl;
	imprimir(lista);
	
	cout<< endl << "Invertir" << endl;
	invertir(lista);
	imprimir(lista);
	
	cout<<endl<<"Ordenada"<<endl;
	

	
	// Limpiar la lista (liberar memoria):
	lista.limpiar();


	return system("pause");
}

void imprimir(ListaSimple lista){
	Nodo *actual = lista.inicio;
	// Mientras exista un dato en la lista:
	while (actual != 0)
	{
		//imprimir el dato actual:
		cout << actual->dato << endl;

		// Moverse al siguiente nodo en la lista:
		actual = actual->next;
	}
}

void invertir(ListaSimple lista)
{
	Nodo *actual = lista.inicio;
    Nodo* prev   = NULL;
    Nodo* next = NULL;
    while (actual != 0)
    {
        next  = actual->next;  
        actual->next = prev;   
        prev = actual;
        actual = next;
    }
}
