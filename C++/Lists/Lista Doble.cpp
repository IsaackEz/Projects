//Carlos Isaac Espinoza Alvarez


#include<iostream>
#include<stdlib.h>
 
using namespace std;
 
typedef struct nodo elemento;  //inicializando el nodo
struct nodo {
    int dato;   //variable del dato
    nodo*sig;	//apuntador al nodo siguiente
    nodo*ant;	//apuntador al nodo anterior
};
 
elemento*nuevonodo(){ 	//creando nodo
    return ((elemento*) malloc (sizeof(elemento)));	//tama;o del nodo
}

int main(){
 
    elemento *v,*v1,*v2,*v3;			//variables que nos ayudaran a recorrer la lista e imprimirla
    char resp,resp1;			//variables donde se guardan las respuestas de derecha, izquierda, si y no
    int var=1;			//variable principal que decide si hay datos en la lista o no
    
    do{
    	v=nuevonodo();		//creamos el nuevo nodo en 'v'
    	cout<<"Ingrese un numero: ";
        cin>>v->dato; 
 
        if (var==1){    //Cuando la lista esta vacia
            v->sig=0;   //inicializar los apuntadores en 0 mientras sea el primer dato a ingresar
            v->ant=0;	//inicializar los apuntadores en 0 mientras sea el primer dato a ingresar
            v1=v;		//copiamos el nodo que creamos con v y se lo ponemos a v1
			v2=v;		//igual con v2
        }
        else{			//cuando ya hay mas de 1 dato
            cout<<"Derecha o izquierda?\nD=derecha / I=izquierda ";
            cin>>resp1;
            if(resp1 == 'd'|| resp1 == 'D'){
                v->sig=0;		//Si se quiere insertar en la derecha se inicializa el apuntador en 0
                v->sig=v;		//y se pone el 'nuevonodo'
                v->ant=v1;//el apuntador a anterior toma el valor de v1
				v1=v;		
            }
            else{ 
                v->ant=0;		//Si se quiere insertar en la izquierda se inicializa el apuntador en 0
                v->ant=v;		//y se pone el 'nuevonodo'
                v->sig=v2;		//el apuntador a siguiente toma el valor de v2
                v2=v;			//se copia v en v2
            }
        }
        var++;			//Aumenta la variable para decir que ya hay mas de 1 dato en la lista
        
        cout<<"Otro valor?\nS=si / N=no  ";
        cin>>resp;
    }
	while(resp =='s'|| resp=='S'); 	//mientras que la respuesta sea si, todo el codigo de 'do' se hara
	 
    v3=v2;			//copiamos el nodo de v2 a v3
    cout<<"Recorrido de Izquierda..\n";
    do{
    	cout<<"\n"<<v3->dato; 		//imprimios el dato alojado en v3
		v3=v3->sig;			//nos pasamos al siguiente dato
	}
	while (v3!=0);			//mientras que v3 sea diferente a 0 (que tenga valor)
	v3=v1;				//copiamos el nodo de v1 a v3
	cout<<"\nRecorrido de Derecha..";		
	
	do{
		cout<<"\n"<<v3->dato; 		//imprimimos el dato que esta en v3
		v3=v3->ant;					//nos pasamos al dato anterior
	}
	while(v3!=0);			//mientras que v3 tenga valor o un dato
	
	return 0;
 
}
