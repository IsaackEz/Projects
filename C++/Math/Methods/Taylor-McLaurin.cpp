#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int factorial(int n){
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}

int main(){
	float funcionA, funcionX, der, der2, x, a, res, errorabs,errorrel;
	cout<<"X: ";
	cin>>x;
	cout<<"A: ";
	cin>>a;
	funcionA = exp(0.1*a)+tan(a);
	der = (0.1*exp(0.1*a)+1+pow(tan(a),2))*(x-a);
	der2 = ((0.01*exp(0.1*a)+2*(1+pow(tan(a),2))*tan(a))/factorial(2))*pow((x-a), 2);
	res = funcionA + der + der2;
	funcionX = exp(0.1*x)+tan(x);
    errorabs = res - funcionX;
    errorrel = errorabs/funcionX;
	cout<<"Funcion en A: "<<funcionA<<endl<<"Funcion en X: "<<funcionX<<endl
	<<"Primera derivada: "<<der<<endl<<"Segunda derivada: "<<der2<<endl<<"F(a): "
	<<res<<endl<<"Error absoluto: "<<abs(errorabs)<<endl<<"Error relativo: "<<abs(errorrel);
}
