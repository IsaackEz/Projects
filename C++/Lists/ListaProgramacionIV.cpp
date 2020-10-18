#include <iostream>
using namespace std;
 
struct lista{
	double dato;
	lista *sig;

} *lista1, *lista2 ;
 
void menu();
void ingresarDato();
void actualizar_lista();	
 
int main(){	
	menu();	
}

void menu(){
	int opcion;
	while(1){
		cout<<"\n(1) Ingresar datos";
		cout<<"\n(0) Terminar"<<endl;
		cout<<"\nIngrese una opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: ingresarDato();
			break;
			case 0: cout<<endl<<"Ha salido con exito. "; exit(1); 
			default: cout<<"\n Opcion no valida!!"; 
			break;
		}
		system("cls");
		
		actualizar_lista();
		cout<<endl;
	}
}
 
void ingresarDato (){
	if(!lista1){
		lista1=new(lista);
		cout<<"Ingrese elemento: ";
		cin>>lista1->dato;
		lista1->sig=NULL;
		return;
	}
	
	lista2=new(lista);
	cout<<"\nIngrese elemento: ";
	cin>>lista2->dato;
	lista2->sig = lista1;
	lista1 = lista2;
}

void actualizar_lista(){
	int i, tope = 0;
	lista2 = lista1;
	while(lista2){
		tope++;
		lista2=lista2->sig;
	} 
	
	for(i = 0; i <= tope; i++){
		cout<<" ";
	} 
	
	i=0;
	lista2=lista1;
	while(lista2){             
		cout<<"\n";
		cout<<++i<<".- "<<lista2->dato;
		lista2=lista2->sig;
	}
}
