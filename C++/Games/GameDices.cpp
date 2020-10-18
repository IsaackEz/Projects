#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;



int main(){
	srand(time(NULL));
	const int TAM = 5;
	int rond, num, punt=0, puntfin;
	int dPtr;
	int *dadosPtr = &dPtr;
	int dados[TAM];
	cout<<"Bienvenido, cuantas rondas desea jugar? ";cin>>rond;
	for(int i = 0;i<rond;i++){
		cout<<"Es tu turno. Elija un numero entre 1 y 6: ";cin>>num;
		cout<<"Elegiste el numero: "<<num<<" Si el numero aparece en los dados ganaras puntos"<<endl;
		system("pause");
			for(int i = 0;i<TAM;i++){
				dPtr = rand()%6 + 1;
				cout<<dPtr<<" ";
				if(dPtr==num){
					punt++;
				}
		}
		cout<<endl;
		puntfin = punt*num;
		cout<<"Llevas: "<<puntfin<<" puntos."<<endl;
		punt = 0;	
		system("pause");
		}
		
	return 0;
}
