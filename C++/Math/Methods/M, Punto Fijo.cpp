#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
	int ite, j=0;
	double gx, xo, aux = 0, e;	
	cout<<"Iteraciones: ";
	cin>>ite;
	cout<<endl;
	cout<<"Ingresa Xo: ";
	cin>>xo;	
	
	for(int i = 0; i<ite; i++){
	cout<<"Iteraccion: "<<j+1<<endl;			
		gx = cos(xo)-log(xo)+xo;
		cout<<"g(x) es: "<<gx<<endl;
		e = aux - xo;
		aux = xo;
		xo = gx;
		cout<<"Error: "<<abs(e)<<endl;
		j++;
		cout<<endl;
	}    
}
