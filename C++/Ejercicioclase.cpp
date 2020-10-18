#include<iostream>

using namespace std;

const int TAM = 10;

struct Pila{
	int contador;
	int datos[TAM];
};

void push(int, Pila);
int pop(Pila);
int peek(Pila);

int main(){	

	Pila x;//Crear una pila llamada x
	x.contador = 0;//Inicializar la pila con cero elementos
	
	//Aventar los datos a la pila
	push(0, x);
	push(5, x);
	push(2, x);
	push(4, x);
	push(9, x);
	push(5, x);
	push(6, x);
	
	//Ver el tope de la pila
	while(x.contador > 0){
		
		cout<<pop(x)<<endl;
	}
	
	
	return(0);
}
void push(int dato, Pila laPila){	
	//Ya esta llena la pila
	if(laPila.contador == TAM){
		//SI, ignorar la aplicacion
		return;
	}
	//NO esta llena, entonces colocar el nuevo dato
	int pos = (TAM - laPila.contador)- 1;
	laPila.datos[pos] = dato;
	//Incrementar el contador de datos
	laPila.contador++;
}
int peek(Pila laPila){
	int tope = pop(laPila);
	push(tope, laPila);
	
	return tope;
}
int pop(Pila &laPila){
	if(laPila)
}
