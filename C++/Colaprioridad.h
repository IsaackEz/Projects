#include "Nodo.h"

struct ColaPrioridad {
	Nodo *frente;
	
	ColaPrioridad(){
		frente = 0;
	}
	void encolar(int nuevodato){
		Nodo *nuevo = new Nodo;
		nuevo->dato = nuevodato;
		nuevo->next = 0;
		
		if(frente == 0){
			frente = nuevo;
			return;
		}
		
		Nodo *tmp = frente;
		Nodo *anterior = 0;
		
		while(tmp != 0){
			if(nuevodato > tmp->dato){
				anterior = tmp;
				tmp = tmp->next;
				continue;
			}
			
			break;
		}
		
		if(anterior != 0){
			anterior->next = nuevo;
		}
		
		nuevo->next = tmp;
		
	}
	
	int desencolar(){
		int salida = 0;
		if(frente != 0){
			salida = frente->dato;
			Nodo *tmp = frente;
			frente = frente->next;
			delete tmp;
		}
		return salida;
	}
	void limpiar(){

		while(frente != 0){
			Nodo *tmp = frente;
			frente = frente->next;
			delete tmp;
		}
	}
};
