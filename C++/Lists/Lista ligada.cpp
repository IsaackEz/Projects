#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct nodo{
	int dato;	//dato 
	nodo *sig;   //apuntador a siguiente
		
};

void insertarDato(nodo *&, int n);  //funcion insertar
void mostrarLista(nodo *&);			//funcion mostrar

int main(){
	nodo *inicio = 0;			//declaramos cabeza en null o 0
	int dato, num;				//variables de dato a ingresar y cuantos datos
	
	cout<<"Cuantos datos ";
	cin>>num;
	for(int i = 0; i<num; i++){				//Se repite dependiento cuantos datos desea ingresar
		cout<<"Inserte un dato: "<<endl;
		cin>>dato;
		insertarDato(inicio ,dato);			//regresa la funcion de insertar para a;adir el dato
	}
	mostrarLista(inicio);				//imprime la lista
	
	
	return 0;
}

void insertarDato(nodo *&inicio, int n){
	nodo *nuevonodo = new nodo();				//creamos un nuevo nodo en la lista
	nuevonodo->dato = n;						//asignamos el valor ingresado al nodo creado recientemente
	
	nodo *aux1 = inicio;						//creamos un apuntador que apunte al apuntador de inicio 
	nodo *aux2;									//creamos otro apuntador para despues utilizarlo como temporal
	
	while((aux1 != NULL) && (aux1->dato < n)){		//solo se ejecuta si ya hay al menos un dato en la lista decidimos si va a la derecha o izquierda 
		aux2 = aux1;							//aux2 toma el valor de aux1 que vendria siendo el inicio  (en este punto aux1 aux2 e inicio tienen el mismo valor)
		aux1 = aux1->sig;						//movemos aux1 al siguiente ya que estamos en el inicio y se pondra como el anterior al nuevonodo	
	}
	
	if(inicio == aux1){					//preguntamos si el inicio es igual a el aux1 si se cumple se determina el nuevonodo ingresado como el inicio o cabeza 
		inicio = nuevonodo;				//esto solo sera posible si se accedio al while ya que aux1 tiene el mismo valor que inicio sin el while
	}
	else{								//si el inicio no es igual al aux1 el siguiente de aux2 que apuntaba a null toma el dato del nuevonodo que ingresamos
		aux2->sig = nuevonodo;
	}
	
	nuevonodo->sig = aux1;				//aux1 que tiene el valor de inicio se lo pasamos al nuevonodo que ingresamos ya que fue menor que el inicio original
}

void mostrarLista(nodo *&inicio){		//funcion de mostrar lista
	nodo *actual = new nodo();			//creando un nodo llamado actual para imprimir la lista
	actual = inicio;					//asignamos el apuntador inicio al nodo creado
	cout<<endl;							
	while(actual != 0){					//mientras que el actual sea diferente de 0, quiere decir que mientras haya datos en la lista 
		cout<<actual->dato<<endl;		//se imprime el dato que tiene actual, en el primero recorrideo es igual que inicio, despues inicio se queda con su valor de memoria
		actual = actual->sig;			//actual lo movemos a siguiente, aqui es donde se recorre la lista en orden ascendente
	}
}

