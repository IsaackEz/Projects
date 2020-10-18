/* CARLOS ISAAC ESPINOZA ALVAREZ
ENRIQUE ALEJANDRO GONZALES AMADOR
MARIO ALBERTO OCHOA GONZALEZ
MARCOS GARCIA TIZNADO
GREGORY GADJEE
TEORIA COMPUTACIONAL*/
#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include"Grafo.h"

using namespace std;

int main(){
	Grafo G;	//declaramos el grafo con una letra
	G.Inicializar();	//iniciamos el grafo
	char opc;		//opciones para guardar en el switch
	
		while(1<2){//se sigue mostrando el menu mientras que se salga
		system("cls"); 
		cout<<"             (\-."<< endl;
		cout<<"             / _`> .---------."<< endl;
		cout<<"     _)     / _)=  |'-------'|"<< endl;
		cout<<"    (      / _/    |O   O   o|"<< endl;
		cout<<"      `-._(_)      | o O . o |"<< endl;
		cout<<"                   `---------'"<< endl;					//menu de opciones
		cout<<"1. Ingresar Vertice."<<endl;
		cout<<"2. Ingresar Arista."<<endl;
		cout<<"3. Eliminar Vertice."<<endl;
		cout<<"4. Eliminar Arista."<<endl;
		cout<<"5. Recorrido Anchura."<<endl;
		cout<<"6. Salir."<<endl<<endl;
		cout<<"Elija una opcion. ";
		opc = NULL;
		cin>>opc;
		switch(opc){	//dependiendo la opcion se va a un caso distinto
			case '1':{
				string nombre;
				system("cls");
				cout<<"Ingrese el nombre del vertice: ";
				cin.ignore();
				getline(cin, nombre, '\n');
				G.InsertaVertice(nombre);
				//cout<<"Agregado: "<<nombre;
				//cin.get();
				cin.get();
				break;
			}
			case '2':{
				string origen, destino;
				int peso;
				//system("cls");
				if(G.Vacio()){
					cout<<"El grafo esta vacio."<<endl;
				}
				else{
					cout<<"Ingrese el nombre del vertice de origen: ";
					cin.ignore();
					getline(cin, origen, '\n');
					cout<<"Ingrese el nombre del vertice de destino: ";
					getline(cin, destino, '\n');
					//cout<<"Ingrese la distancia: ";
					//cin>>peso;
					if(G.GetVertice(origen) == NULL || G.GetVertice(destino) == NULL){
						cout<<"Uno de los vertices no es valido"<<endl;
					}
					else{
						G.InsertarArista(G.GetVertice(origen), G.GetVertice(destino), peso);
					}
				}
				//cout<<"Distancia entre: "<<origen<<" y "<<destino<<" es: "<<peso;
				//cin.get();
				//cin.get();
				break;
			}
			case '3':{
				string nombre;
				if(G.Vacio()){
					cout<<"El grafo esta vacio"<<endl;
					system("pause");
					break;
				}
				else{
					cout<<"Ingrese el nombre del vertice a eliminar: ";
					cin.ignore();
					getline(cin, nombre, '\n');
					if(G.GetVertice(nombre) == NULL){
						cout<<"Vertice invalido"<<endl;
					}
					else{
						G.EliminarVertice(G.GetVertice(nombre));
					}
					cout<<"El vertice: "<<nombre<<" ha sido eliminado";
					cin.get();
				}
				break;
			}
			case '4':{
				string origen, destino;
				if(G.Vacio()){
					cout<<"El grafo esta vacio"<<endl;
					system("pause");
					break;
				}
				else{
					cout<<"Ingrese el nombre del vertice origen: ";
					cin.ignore();
					getline(cin, origen, '\n');
					cout<<"Ingrese el nombre del vertice destino: ";
					getline(cin, destino, '\n');
					if(G.GetVertice(origen) == NULL || G.GetVertice(destino) == NULL){
						cout<<"Vertices no validos";
					}
					else{
						G.EliminarArista(G.GetVertice(origen), G.GetVertice(destino));
					}
				}
				cout<<"La arista de "<<origen<<" a "<<destino<<" ha sido eliminada";
				cin.get();
				break;
			}
			case '5':{
				string origen, destino;
				if(G.Vacio()){
					cout<<"El grafo esta vacio"<<endl;
					system("pause");
					break;
				}
				else{
					cout<<"En donde se encontrara el raton? ";
					cin.ignore();
					getline(cin, origen, '\n');
					cout<<"En que lugar estara el queso? ";
					getline(cin, destino, '\n');
					if(G.GetVertice(origen) == NULL || G.GetVertice(destino) == NULL){
						cout<<"Datos invalidos";
					}
					else{
						G.RecorridoAnchura(G.GetVertice(origen), G.GetVertice(destino));
					}
				}
				cin.get();
				break;
			}
			case '6':{
				return 0;
				break;
			}
			default:
				cout<<"Opcion invalida."<<endl;
				system("pause");
				break;	
		}
	}
}	

	

	


