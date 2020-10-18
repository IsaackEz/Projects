#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
	int ite, j=0, c=0;
	double fx0, fx1,xi, x0, x1, e, aux = 0;	
	cout<<"Iteraciones: ";
	cin>>ite;
	cout<<endl;
	cout<<"Ingresa x0: ";
	cin>>x0;	
	cout<<"Ingresa x1: ";
	cin>>x1;	
	
	for(int i = 0; i<ite; i++){
		cout<<"Iteraccion: "<<j+1<<endl;		
		fx0 = pow(x0, 3)+2*pow(x0, 2)+10*x0-20;
		fx1 = pow(x1, 3)+2*pow(x1, 2)+10*x1-20;			
		xi = x1-((x1 - x0)*(fx1))/((fx1)-(fx0));			
		x0 = x1;
		x1 = xi;				
		e = aux- x1;
		aux = x1;
		cout<<"x"<<c+1<<": "<<x0<<endl<<"Error: "<<abs(e)<<endl;
		j++;
		c++;
		cout<<endl;
	}
		cout<<endl;
}    

