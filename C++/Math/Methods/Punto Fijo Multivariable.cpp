#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
	int ite, j=0;
	double gx1, gx2, x = 0, y = 0, aux = 0, auxy = 0, ex, ey;	
	cout<<"Iteraciones: ";
	cin>>ite;
	cout<<endl;	
	
	for(int i = 0; i<ite; i++){
	cout<<"Iteracion: "<<j+1<<endl;			
		gx1 = (pow(x,2)+pow(y,2)+8)/10;
		gx2 = (x*pow(y,2)+x+8)/10;
		cout<<"g1(x) es: "<<gx1<<endl<<"g2(x) es: "<<gx2<<endl;
		
		x = gx1;
		y = gx2;
		
		ex = aux - x;
		aux = x;
		ey = auxy - y;
		auxy = y;
		cout<<"Error x: "<<abs(ex)<<endl<<"Error y: "<<abs(ey)<<endl;
		j++;
		cout<<endl;
	}    
}
