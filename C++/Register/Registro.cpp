#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void registro();

int main(){
	registro();	
	return 0;
}
void registro(){
	string regis;
	ofstream datos;
	
	datos.open("registro.txt",ios::app);
	
	if(datos.fail()){
		cout<<"No ha sido posible abrir el archivo.";
		exit(0);
	}
	cout<<"Ingresa la fecha (dd/mm/aa), nombre y hora de ingreso: ";
	getline(cin,regis); 
	datos<<regis<<endl;
	datos.close();
	exit (0);
}
