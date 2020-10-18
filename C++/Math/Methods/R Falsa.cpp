#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
	int ite, j=0;
	double fxi, fxf, xi, xf, xm1, fxm1, e, aux = 0;	
	cout<<"Iteraciones: ";
	cin>>ite;
	cout<<endl;
	cout<<"Ingresa xi: ";
	cin>>xi;	
	cout<<"Ingresa xf: ";
	cin>>xf;	
	for(int i = 0; i<ite; i++){
		cout<<"Iteraccion: "<<j+1<<endl;		
		fxi = cos(xi)-log(xi);
		fxf = cos(xf)-log(xf);
		xm1 = xf-((xf-xi)*(fxf))/(fxf-(fxi));
		fxm1 = cos(xm1)-log(xm1);
		cout<<"a: "<<xi<<endl<<"b: "<<xf<<endl<<"fxa: "<<fxi<<endl<<"fxb: "<<fxf<<endl<<"xm: "<<xm1<<endl<<"fxm: "<<fxm1<<endl;
		
		if(fxm1 && fxi < 0 || fxm1 && fxi > 0){
			xi = xm1;
		}
		else if(fxm1 > 0 && fxf > 0 || fxm1 > 0 && fxf > 0){
			xf = xm1;
		}
		j++;		
		e = aux-xm1;
		aux = xm1;	    
		cout<<"Error: "<<abs(e)<<endl;
		cout<<endl;
	}    
}
