/* CARLOS ISAAC ESPINOZA ALVAREZ
ENRIQUE ALEJANDRO GONZALES AMADOR
MARIO ALBERTO OCHOA GONZALEZ
MARCOS GARCIA TIZNADO
GREGORY GADJEE
TEORIA COMPUTACIONAL*/
#include <iostream>
#include "Grafo.h"
//EN LA LINEA 154 ESTA EL COUT QUE HACE QUE SE IMPRIMAN LOS NUMEROS QUE NO HAN SIDO VISITADOS
void Grafo::Inicializar(){ //se inicializa el grafo
	h=NULL;
}
bool Grafo::Vacio(){ //Decide si el grafo esta vacio o no
	if(h==NULL){
		return true; //esta vacia
	}
	else{
		return false; //no esta vacia
	}
}

Vertice *Grafo::GetVertice(string nombre){
	Vertice *aux;
	aux = h;
	while(aux != NULL){ //recorrer en el grafo para saber si existe ese vertice
		if(aux->nombre == nombre){
			return aux;
		}
		aux = aux->sig;
	}
	return NULL; //no existe regresa null
}

void Grafo::InsertaVertice(string nombre){
	Vertice *nuevo = new Vertice;	//crea un vertice
	nuevo->nombre = nombre;	//recibe el nombre que se ingrese por el usuario
	nuevo->sig = NULL;	//declara el siguiente  como nulo
	nuevo->ady = NULL;	//declara su adyacente en nulo
	
	if(Vacio()){
		h = nuevo;	//si esta vacio h se convierte en nuevo para agregar datos
	}
	else{
		Vertice *aux;	//se crea un auxiliar para tomar su valor
		aux = h;	
		while(aux->sig != NULL){		//si no esta vacio h se recorre para insertar nuevos datos
			aux = aux->sig;
		}
		aux->sig = nuevo;
	}
}
void Grafo::InsertarArista(Vertice *origen, Vertice *destino, int peso){
	Arista *nueva = new Arista; //crear nueva arista
	nueva->peso = peso; 	//inicializando nueva el peso que le da el usuario
	nueva->sig = NULL; //declarar siguiente y adyacente nulo ya que no tiene por que es el primero
	nueva->ady = NULL;
	
	Arista *aux;		//declarar un auxiliar para tomar su valor e irlo moviendo
	aux = origen->ady;	//lo declaramos en el origen con su adyacente
	
	if(aux == NULL){
		origen->ady = nueva;		//origen sera la nueva arista
		nueva->ady = destino;		//el destino se convierte en el adyacente de la nueva arista ingresada
	}
	else{
		while(aux->sig != NULL){	//mientras que no sea nulo
			aux = aux->sig;	//recorremos
		}
		aux->sig = nueva;	//recorremos la nueva arista se convierte en el siguiente de el auxiliar
		nueva->ady = destino;	//y su adyacente en el destino
	}
}

void Grafo::EliminarArista(Vertice *origen, Vertice *destino){
	bool band = false;	//bandera para declarar si ya lo visito o no
	Arista *actual, *anterior;	//apuntadores a actual y a su anterior
	actual = origen->ady;	
	if(actual == NULL){	//si el origen no tiene aristas
		cout<<"El vertice origen no tiene aristas"<<endl;
	}
	else if(actual->ady == destino){	//si el que queremos elimnar es la primer arista al origen
		origen->ady = actual->sig; //ligamos el de origen al siguiente del actual
		delete(actual)	;
	}
	else{
		while(actual != NULL){ //recorremos hasta que la arista a eliminar sea nulo
			if(actual->ady == destino){ //si el adyacente es el destino
				band = true; //si lo visito
				anterior->sig = actual->sig; //conectar el anterior con el siguiente
				delete(actual);
				break;
			}
			anterior = actual;
			actual = actual->sig;
		}
		if(band == false){ //si no encuentra la arista
			cout<<"Esos dos vertices no estan conectados"<<endl;
		}
	}
}

void Grafo::EliminarVertice(Vertice *vert){ 
	Vertice *actual, *anterior;
	Arista *aux;
	actual = h;
	while(actual != NULL){ //primero se eliminan las conexiones que se tenga con otros vertices
		aux = actual->ady;
		while(aux != NULL){
			if(aux->ady == vert){
				EliminarArista(actual, aux->ady); //eliminamos la arista que esta en el vertice a eliminar
				break;
			}
			aux = aux->sig;
		}
		actual = actual->sig; //se eliminan las conexiones
	}
	actual = h;
	if(h == vert){ //si es el primer vertice
		h = h->sig; //se mueve h al siguiente y despues se elimina
		delete(actual);
	}
	else{
		while(actual != vert){ //hasta que llegue al que queremos eliminar
			anterior = actual;	//el anterior se convierte en el actual
			actual = actual->sig;	//se recorre	
		}
		anterior->sig = actual->sig;	//ligar el anterior al siguiente del actual
		delete(actual);	//eliminamos el vertice
	}
}

void Grafo::RecorridoAnchura(Vertice *origen, Vertice *destino){
	bool band = false, band2 = false, band3; //banderas para declarar si ya visitamos algun vertice
	Vertice *VerticeActual, *DestinoActual, *DestinoAnterior;
	Arista *aux;
	typedef pair<Vertice*, Vertice*>VerticeVertice;
	queue<Vertice*>cola; //cola de vertices
	stack<VerticeVertice>pila; //agregamos una pila de pares con vertices
	list<Vertice*>lista;
	list<Vertice*>::iterator i; //iterador para recorrer la lista
	
	cola.push(origen); //colocamos el origen en la cola
	
	while(!cola.empty()){//mientras que la cola no este vacia
	band = false;	
		VerticeActual = cola.front(); //encolamos
		cola.pop(); //desencolamos al actual
		
		for(i = lista.begin(); i != lista.end(); i++){
			 //recorremos la lista
			if(VerticeActual == *i){ //si el actual esta en el que estamos recorriendo
				band = true; //cambiamos la bandera
				
			}
			
			
			
		}
		if(band == false){
		cout<<VerticeActual->nombre<<"->"; //ESTE COUT ES EL QUE FALTABA PARA QUE MOSTRARA EL RECORRIDO PRIMERO EN ANCHURA AQUI CON EL WHILE DE -143 IMPRIME CADA VEZ QUE VISITA A UN VERTICE NUEVO
			if(VerticeActual == destino){ 
			//si lo encontramos
				band3 = true; 
				DestinoActual = destino; 
				while(!pila.empty()){
			; //mientras que la pila no este vacia la imprimimos
					
					 //primero nos da el destino y luego el origen
					while(!pila.empty() && pila.top().second != DestinoActual){ 
					;//mientras que la pila no este vacia y el destino en el tope sea diferet al actual
						pila.pop(); //desapilar 
					}
					if(!pila.empty()){
					 //si la pila no esta vacia
						DestinoActual = pila.top().first; //el vertice orien en el tope se convierte en el actual
					}
				}
				break;
			}
			lista.push_back(VerticeActual); //colocamos el vertice en la lsita que ya visitamos
			aux = VerticeActual->ady; //auxiliar para recorrer
			while(aux != NULL){ //sigue recorriendo mientras no sea nulo
				band2 = false;
				for(i = lista.begin(); i != lista.end(); i++){ //recorrer si no ha llegado al final
					if(aux->ady == *i){ //si su adyacente es igual al que estamos recorriendo
						band2 = true; //se dice que si llego
					}
				}
				if(band2 == false){	//si no lo encontro
					cola.push(aux->ady);	//encolamos el vertice
					pila.push(VerticeVertice(VerticeActual, aux->ady)); //llamamos a la pareja de vertices y apilamos el actual y el destino
				}
				aux = aux->sig; //recorremos
			}
		}
	}
	if(band3 == false){ //si la cola se vacio sin encontrar el destino 
		cout<<"No hay una ruta entre esos dos vertices."<<endl;
	}
}
