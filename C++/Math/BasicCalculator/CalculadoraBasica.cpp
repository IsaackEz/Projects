//Carlos Isaac Espinoza Alvarez			Cibernetica 4to			Programacion IV
#include<iostream>
using namespace std;
int x = 0;
double n1, n2, res;
void menu();
int main(){	
	cout<<"			Menu		"<<endl;
	cout<<"1. Suma."<<endl;
	cout<<"2. Resta."<<endl;
	cout<<"3. Divison."<<endl;
	cout<<"4. Multiplicacion."<<endl;
	menu();	
	system("pause");
}
void menu(){
	cout<<"Eliga la opcion que desee."<<endl;
	cin>>x;
	switch(x){
		case 1: cout<<"Ha escogido suma"<<endl;
		cout<<"Primer numero a sumar: ";cin>>n1;
		cout<<"Segundo numero a sumar: ";cin>>n2;
		res = n1+n2;
		cout<<"El resultado es: "<<res<<endl;
		break;
		case 2: cout<<"Ha escogido resta"<<endl;
		cout<<"Primer numero a restar: ";cin>>n1;
		cout<<"Segundo numero a restar: ";cin>>n2;
		res = n1-n2;
		cout<<"El resultado es: "<<res<<endl;
		break;
		case 3: cout<<"Ha escogido division"<<endl;
		cout<<"Primer numero a division: ";cin>>n1;
		cout<<"Segundo numero a division: ";cin>>n2;		
		res = (n1)/n2;		
		cout<<"El resultado es: "<<res<<endl;
		break;
		case 4: cout<<"Ha escogido multiplicacion"<<endl;
		cout<<"Primer numero a multiplicar: ";cin>>n1;
		cout<<"Segundo numero a multiplicar: ";cin>>n2;
		res = n1*n2;
		cout<<"El resultado es: "<<res<<endl;
		break;
		default: cout<<"No ha sido una opcion valida."<<endl;
	}

}
