#include<iostream>
#include "listasimple.h"

using namespace std;

void imprimir(ListaSimple lista);

int main()
{
	ListaSimple lista;
	lista.inicio = 0; // No es necesario si ListaSimple tiene una función de inicialización.

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
	
	// Limpiar la lista (liberar memoria):
	lista.limpiar();


	return system("pause");
}

void imprimir(ListaSimple lista)
{
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
