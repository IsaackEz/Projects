#include <iostream>
#include "Nodo.h"
#include "Colaprioridad"

using namespace std;

int main(){
	ColaPrioridad cp;
	
	cp.encolar(3);
	cp.encolar(0);
	cp.encolar(6);
	cp.encolar(5);
	cp.encolar(-3);
	cp.encolar(1);
	cp.encolar(2);
	
	while(cp.frente != 0){
		cout<<cp.desencolar()<<" ";
	}
	cout<<endl;
	cp.limpiar();
	return system("pause");

}
