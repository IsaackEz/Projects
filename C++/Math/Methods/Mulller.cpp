#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
	int ite, j=0, signo = 0;
	double x0, x1, x2, x3, a, b, c, fx0, fx1, fx2, e, aux = 0;	
	cout<<"Iteraciones: ";
	cin>>ite;
	cout<<endl;
	cout<<"Ingresa x0: ";
	cin>>x0;	
	cout<<"Ingresa x1: ";
	cin>>x1;	
	cout<<"Ingresa x2: ";
	cin>>x2;
	
	
	for(int i = 0; i<ite; i++){
		cout<<"Iteraccion: "<<j+1<<endl;	
		fx0 = pow(x0, 3)+2*pow(x0, 2)+10*x0-20;
		fx1 = pow(x1, 3)+2*pow(x1, 2)+10*x1-20;	
		fx2 = pow(x2, 3)+2*pow(x2, 2)+10*x2-20;
		
		a = ((x1-x2)*((fx0)-(fx2))-(x0-x2)*((fx1)-(fx2)))/((x0-x2)*(x1-x2)*(x0-x1));
		b = (pow((x0-x2),2)*((fx1)-(fx2))-pow((x1-x2), 2)*((fx0)-(fx2)))/((x0-x2)*(x1-x2)*(x0-x1));
		c = fx2;
		if(b<0){
			signo = -1;
		}
		else if(b>0){
			signo = 1;
		}
		x3 = x2 - ((2*c)/(b+signo*sqrt(pow(b, 2)-4*a*c)));
		
		x0 = x1;
		x1 = x2;
		x2 = x3;
		
		e = aux-x3;
		aux = x3;
		
		cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl<<"x3: "<<x3<<endl<<"Error: "<<abs(e)<<endl<<endl;
		j++;
	}
}    
