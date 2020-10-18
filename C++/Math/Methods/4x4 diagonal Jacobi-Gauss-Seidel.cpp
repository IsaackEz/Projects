#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
	int ite, j=0;
	double x1 = 0, x2 = 0, x3 = 0, x4 = 0, fx1, fx2, fx3, fx4, e1, e2, e3, e4, aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;	
	cout<<"Iteraciones: ";
	cin>>ite;
	cout<<endl;

	for(int i = 0; i<ite; i++){
		cout<<"Iteraccion: "<<j+1<<endl;		
		fx1 = ((5+x2+x3-x4)/6);
		fx2 = ((-17-x1-x3+x4)/-10);
		fx3 = ((19-x1+x2+x4)/8);
		fx4 = ((-22-x1-x2-x3)/-7);
		cout<<"fx1: "<<fx1<<endl<<"fx2: "<<fx2<<endl<<"fx3: "<<fx3<<endl<<"fx4: "<<fx4<<endl;
		x1 = fx1;
		x2 = fx2;
		x3 = fx3;
		x4 = fx4;	
		e1 = aux1-fx1;
		aux1 = fx1;
		e2 = aux2-fx2;
		aux2 = fx2;
		e3 = aux3-fx3;
		aux3 = fx3;
		e4 = aux4-fx4;
		aux4 = fx4;	    
		cout<<"Error x1: "<<abs(e1)<<endl<<"Error x2: "<<abs(e2)<<endl<<"Error x3: "<<abs(e3)<<endl<<"Error x4: "<<abs(e4)<<endl;
		cout<<endl;
		j++;
	}    
}
