#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int ite, c=0,j=0;
	double fxi, dfxi, xi, x, e, aux = 0;	
	cout<<"Iteraciones: ";
	cin>>ite;
	cout<<endl;
	cout<<"Ingresa xi: ";
	cin>>xi;	
	
	for(int i = 0; i<ite; i++){
		cout<<"Iteraccion: "<<j+1<<endl;		
		fxi = pow(xi, 3)+2*pow(xi, 2)+10*xi-20;
		dfxi = 3*pow(xi, 2)+4*xi+10;
		
		x = xi - (fxi)/dfxi;
		xi = x;
		
		e = aux-x;
		aux = x;
		
		cout<<"Fxi: "<<fxi<<endl<<"Derivada Fxi: "<<dfxi<<endl<<"X"<<c+1<<": "<<x<<endl<<"Error: "<<abs(e)<<endl;
		j++;
		c++;
		cout<<endl;
	}    
}
