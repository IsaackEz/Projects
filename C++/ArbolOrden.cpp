#include<iostream>
struct Nodo{
	int dato;
	Nodo *izq;
	Nodo *der;
	Nodo *padre;
};

struct ArbolBinario{
	Nodo *raiz;
	ArbolBinario(){
		raiz = 0;
	}
	//Esta funcion recibe una referencia a un nodo de  
	//un arbol binario en donde se pretende iniciar la navegacion 
	//usando el algoritmo de navegacion Pre-Order:
	void preOrder(Nodo *nav){
		if(nav == 0){
			return;
		}
		
		//visitar el dato en el nodo nav
		std::cout<<nav->dato;
		preOrder(nav->izq);
		preOrder(nav->der);
	}
	
	//Esta funcion recibe una referencia a un nodo de  
	//un arbol binario en donde se pretende iniciar la navegacion 
	//usando el algoritmo de navegacion in-Order:
	void inOrder(Nodo *nav){
		if(nav == 0){
			return;
		}
		inOrder(nav->izq);
		//visitar el dato en el nodo nav
		std::cout<<nav->dato;		
		inOrder(nav->der);
	}
	
	//Esta funcion recibe una referencia a un nodo de  
	//un arbol binario en donde se pretende iniciar la navegacion 
	//usando el algoritmo de navegacion post-Order:
	void postOrder(Nodo *nav){
		if(nav == 0){
			return;
		}
		postOrder(nav->izq);
		postOrder(nav->der);
		//visitar el dato en el nodo nav
		std::cout<<nav->dato;		
		
	}
	// void levelOrder(){
	// 	if(){
			
	// 	//	Declaracion de cola
	// 	//	Cola colaNodos;
			
	// 	//	colaNodos.enqueue(nav);
			
	// 	//	while(colaNodos.front != 0){
	// 	//	Nodo *frente = colaNodos.dequeue();
	// 	//	std::cout<<frente->dato;
			
	// 	//	if(frente->izq != 0){
	// 	//	colaNodos.equeue(frente->izq);
	// 	//	}
	// 	//	if(frente->der != 0){
	// 	//	colaNodos.enqueue(frente->der)
	// 	//	}
	// 	}
	// }
};
