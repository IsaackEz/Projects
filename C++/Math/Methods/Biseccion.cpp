#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
    int ite, j = 0;
    float fxi, fxm, temp, xi, xf, xm, absoluto, aux = 0;
    cout<<"Xi: ";
    cin>>xi;
    
    cout<<"Xf: ";
    cin>>xf;
   
    cout<<"Iteraciones: ";
    cin>>ite;
	cout<<endl;
    for(int i = 0; i<ite; i++){
    	cout<<"Iteracion: "<<j+1<<endl;
        xm = (xi+xf)/2;        
        fxi = pow(xi,3)+(2*pow(xi, 2))+10*xi-20;
        fxm = pow(xm, 3)+(2*pow(xm, 2))+10*xm-20;
        temp = fxi*fxm;
        cout<<"xi: "<<xi<<endl;
        cout<<"xf: "<<xf<<endl;
        cout<<"xm: "<<xm<<endl;
            
    	if(temp == 0.0){
       	 cout<<"llegaste a la raiz";
    	}
    	else if(temp<0){
    		xf = xm;
		}
    	else if(temp>0){
			xi = xm;
		}			
		absoluto = aux-xm;			
		aux = xm; 
		cout<<"ERROR: "<<abs(absoluto)<<endl<<endl;        
    	j++;    
    } 
}
