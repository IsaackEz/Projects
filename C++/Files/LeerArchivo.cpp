#include <iostream>
#include <fstream>

using namespace std;

void leer();	//crear funcion para leer el archivo

int main(){
	leer(); //llamar a la funcion leer
	return 0;
}

void leer(){
	ifstream archivoCSV;	//ifstream para leer en el archivo
	string texto;		//variable string para imprimir en programa
	
	archivoCSV.open("archivoCSV.txt",ios::in); //abrir el archivo en modo lectura
	
	if(!archivoCSV){ //Si el archivo no se encuentra
		cout<<"No se pudo abrir el archivo"<<endl;
		return;
	}
	
	while(!archivoCSV.eof()){  //mientras que no sea el final del archivo
		getline(archivoCSV,texto);	//copiar todo lo del archivo
		cout<<texto<<endl;	//imprimir info
	}
	archivoCSV.close(); //cerrar archivo
}
