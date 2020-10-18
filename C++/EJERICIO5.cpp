#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void suma();
void resta();
void multiplicacion();
void division();
void todo();
int preg, opcion, num, num1, contador=0, contador1=0;
float res, res1;
int main(){
	cout<<"Bienvenido al programa con que deseas trabajar?"<<endl;
	cout<<"1.- Suma"<<endl;
	cout<<"2.- Resta"<<endl;
	cout<<"3.- Multiplicacion"<<endl;
	cout<<"4.- Division"<<endl;
	cout<<"5.- Todo"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"Trabajaras con sumas"<<endl;
			suma();
			break;
		case 2:
			cout<<"Trabajaras con restas"<<endl;
			resta();
			break;
		case 3:
			cout<<"Trabajaras con multiplicacion"<<endl;
			multiplicacion();
			break;
		case 4:
			cout<<"Trabajaras con division"<<endl;
			division();
			break;
		case 5:
			cout<<"Trabajaras con todo tipo de operaciones"<<endl;
			todo();
			break;
	}
	return 0;
}
void suma(){
	srand(time(NULL));
	cout<<"Cuantas preguntas desea contestar?";cin>>preg;
	cout<<"A continuacion se presentaran: "<<preg<<" preguntas."<<endl;
	cout<<"Introduce un grado de valores a trabajar."<<endl;
	cout<<"1.- Un digito (0-9)"<<endl;
	cout<<"2.- Dos digitos (0-99)"<<endl;
	cout<<"3.- Tres digitos (0-999)"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1: 
		for(int i = 0;i<preg;i++){
			num = 1+rand()%9;
			num1 = 1+rand()%9;
			cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
			res1 = num+num1;
			cin>>res;
			if(res==res1){
				cout<<"Muy bien!"<<endl;
				contador++;
			}
			else {
				cout<<"Incorrecto"<<endl;
				contador1++;
			}
		}
		break;
		case 2:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%99;
				num1 = 1+rand()%99;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num+num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
		break;
		case 3:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%999;
				num1 = 1+rand()%999;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num+num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
			break;
	}
	cout<<"Respuestas correctas: "<<contador<<endl;
	cout<<"Respuestas incorrectas: "<<contador1<<endl;
}
void resta(){
	srand(time(NULL));
	cout<<"Cuantas preguntas desea contestar?";cin>>preg;
	cout<<"A continuacion se presentaran: "<<preg<<" preguntas."<<endl;
	cout<<"Introduce un grado de valores a trabajar."<<endl;
	cout<<"1.- Un digito (0-9)"<<endl;
	cout<<"2.- Dos digitos (0-99)"<<endl;
	cout<<"3.- Tres digitos (0-999)"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1: 
		for(int i = 0;i<preg;i++){
			num = 1+rand()%9;
			num1 = 1+rand()%9;
			cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
			res1 = num-num1;
			cin>>res;
			if(res==res1){
				cout<<"Muy bien!"<<endl;
				contador++;
			}
			else {
				cout<<"Incorrecto"<<endl;
				contador1++;
			}
		}
		break;
		case 2:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%99;
				num1 = 1+rand()%99;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num-num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
		break;
		case 3:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%999;
				num1 = 1+rand()%999;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num-num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
			break;
	}
	cout<<"Respuestas correctas: "<<contador<<endl;
	cout<<"Respuestas incorrectas: "<<contador1<<endl;
}
void multiplicacion(){
	srand(time(NULL));
	cout<<"Cuantas preguntas desea contestar?";cin>>preg;
	cout<<"A continuacion se presentaran: "<<preg<<" preguntas."<<endl;
	cout<<"Introduce un grado de valores a trabajar."<<endl;
	cout<<"1.- Un digito (0-9)"<<endl;
	cout<<"2.- Dos digitos (0-99)"<<endl;
	cout<<"3.- Tres digitos (0-999)"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1: 
		for(int i = 0;i<preg;i++){
			num = 1+rand()%9;
			num1 = 1+rand()%9;
			cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
			res1 = num*num1;
			cin>>res;
			if(res==res1){
				cout<<"Muy bien!"<<endl;
				contador++;
			}
			else {
				cout<<"Incorrecto"<<endl;
				contador1++;
			}
		}
		break;
		case 2:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%99;
				num1 = 1+rand()%99;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num*num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
		break;
		case 3:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%999;
				num1 = 1+rand()%999;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num*num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
			break;
	}
	cout<<"Respuestas correctas: "<<contador<<endl;
	cout<<"Respuestas incorrectas: "<<contador1<<endl;
}
void division(){
	srand(time(NULL));
	cout<<"Cuantas preguntas desea contestar?";cin>>preg;
	cout<<"A continuacion se presentaran: "<<preg<<" preguntas."<<endl;
	cout<<"Introduce un grado de valores a trabajar."<<endl;
	cout<<"1.- Un digito (0-9)"<<endl;
	cout<<"2.- Dos digitos (0-99)"<<endl;
	cout<<"3.- Tres digitos (0-999)"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1: 
		for(int i = 0;i<preg;i++){
			num = 1+rand()%9;
			num1 = 1+rand()%9;
			cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
			res1 = num/num1;
			cin>>res;
			if(res==res1){
				cout<<"Muy bien!"<<endl;
				contador++;
			}
			else {
				cout<<"Incorrecto"<<endl;
				contador1++;
			}
		}
		break;
		case 2:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%99;
				num1 = 1+rand()%99;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num/num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
		break;
		case 3:
			for(int i = 0;i<preg;i++){
				num = 1+rand()%999;
				num1 = 1+rand()%999;
				cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
				res1 = num/num1;
				cin>>res;
				if(res==res1){
					cout<<"Muy bien!"<<endl;
					contador++;
				}
				else {
					cout<<"Incorrecto"<<endl;
					contador1++;
				}
			}
			break;
	}
	cout<<"Respuestas correctas: "<<contador<<endl;
	cout<<"Respuestas incorrectas: "<<contador1<<endl;
}
void todo(){
	srand(time(NULL));
	cout<<"Cuantas preguntas desea contestar?";cin>>preg;
	cout<<"A continuacion se presentaran: "<<preg<<" preguntas."<<endl;
	cout<<"Introduce un grado de valores a trabajar."<<endl;
	cout<<"1.- Un digito (0-9)"<<endl;
	cout<<"2.- Dos digitos (0-99)"<<endl;
	cout<<"3.- Tres digitos (0-999)"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			for(int i = 0;i<preg;i++){
			switch(1+rand()%4){
				case 1:
						num = 1+rand()%9;
						num1 = 1+rand()%9;
						cout<<"Cuanto es "<<num<<" mas "<<num1<<"?"<<endl;
						res1 = num+num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}					
					break;			
				case 2:
						num = 1+rand()%9;
						num1 = 1+rand()%9;
						cout<<"Cuanto es "<<num<<" menos "<<num1<<"?"<<endl;
						res1 = num-num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					
					break;
				case 3:				
						num = 1+rand()%9;
						num1 = 1+rand()%9;
						cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
						res1 = num*num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					
					break;
				case 4:
						num = 1+rand()%9;
						num1 = 1+rand()%9;
						cout<<"Cuanto es "<<num<<" entre "<<num1<<"?"<<endl;
						res1 = num/num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}			
					break;		
			}
		}
		break;
		case 2:
			for(int i = 0;i<preg;i++){
			switch(1+rand()%4){
				case 1:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%99;
						num1 = 1+rand()%99;
						cout<<"Cuanto es "<<num<<" mas "<<num1<<"?"<<endl;
						res1 = num+num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
					break;			
				case 2:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%99;
						num1 = 1+rand()%99;
						cout<<"Cuanto es "<<num<<" menos "<<num1<<"?"<<endl;
						res1 = num-num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
					break;
				case 3:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%99;
						num1 = 1+rand()%99;
						cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
						res1 = num*num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
					break;
				case 4:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%99;
						num1 = 1+rand()%99;
						cout<<"Cuanto es "<<num<<" entre "<<num1<<"?"<<endl;
						res1 = num/num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
					break;		
			}
		}
		break;
		case 3:
			for(int i = 0;i<preg;i++){
			switch(1+rand()%4){
				case 1:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%999;
						num1 = 1+rand()%999;
						cout<<"Cuanto es "<<num<<" mas "<<num1<<"?"<<endl;
						res1 = num+num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
					break;			
				case 2:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%999;
						num1 = 1+rand()%999;
						cout<<"Cuanto es "<<num<<" menos "<<num1<<"?"<<endl;
						res1 = num-num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
					break;
				case 3:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%999;
						num1 = 1+rand()%999;
						cout<<"Cuanto es "<<num<<" por "<<num1<<"?"<<endl;
						res1 = num*num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
					break;
				case 4:
					for(int i = 0;i<preg;i++){
						num = 1+rand()%999;
						num1 = 1+rand()%999;
						cout<<"Cuanto es "<<num<<" entre "<<num1<<"?"<<endl;
						res1 = num/num1;
						cin>>res;
						if(res==res1){
							cout<<"Muy bien!"<<endl;
							contador++;
						}
						else {
							cout<<"Incorrecto"<<endl;
							contador1++;
						}
					}
				break;		
			}
		}
		break;
	}
	cout<<"Respuestas correctas: "<<contador<<endl;
	cout<<"Respuestas incorrectas: "<<contador1<<endl;	
}
