/* CARLOS ISAAC ESPINOZA ALVAREZ
ENRIQUE ALEJANDRO GONZALES AMADOR
MARIO ALBERTO OCHOA GONZALEZ
MARCOS GARCIA TIZNADO
GREGORY GADJEE
TEORIA COMPUTACIONAL*/

#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <queue>
#include <list>
#include <stack>

using namespace std;

class Arista; 

class Vertice{
	Vertice *sig;	//apuntador al vertice siguiente
	Arista *ady;	//apuntador al adyacente del vertice
	string nombre;	//el nombre que se le de
	friend class Grafo;	//puede usar los atributos de grafo
};

class Arista{
	Arista *sig;	//apuntador a la arista siguiente
	Vertice *ady; 	//apuntador al adyacente de arista siguiente
	int peso;		//distancia o peso que se le da a esa relacion
	friend class Grafo;	//puede usar los atributos de grafo
};

class Grafo{
	Vertice *h; //identificador para el primer vertice
	public:
		void Inicializar(); //Iniciar el  grafo
		bool Vacio(); //Esta vacio o no?
		Vertice *GetVertice(string nombre); //Regresa la direccion del vertice con 'nombre'
		void InsertarArista(Vertice *origen, Vertice *destino, int peso); //Agregar una arista
		void InsertaVertice(string nombre); //Agregar un vertice
		void EliminarArista(Vertice *origen, Vertice *destino); //Eliminar una arista
		void EliminarVertice(Vertice *vert); //Eliminar un vertice
		void RecorridoAnchura(Vertice *origen, Vertice *destino); //HAcer el recorrido en anchura
	
};
