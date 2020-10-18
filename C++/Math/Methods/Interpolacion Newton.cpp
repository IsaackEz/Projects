#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
	int n;
	float Px, x, x0, x1, x2, x3, fx, fx1, fx2, fx3, fx4, fx12, fx23, fx34, fx45, fx56, fx123, fx234, fx345, fx456, fx1234, fx2345, fx3456, fx12345, fx23456, fx123456;
	cout<<"N: ";
	cin>>n;
	float cadenafx[n];
	float cadenax[n];
	for(int i; i < n; i++){
		cout<<"Datos X: ";
		cin>>cadenax[i];
		cout<<"Datos Fx: ";
		cin>>cadenafx[i];
	}
	x0 = cadenax[0];
	x1 = cadenax[1];
	x2 = cadenax[2];
	x3 = cadenax[3];
	fx = cadenafx[0];
	fx12 = (cadenafx[1]-cadenafx[0])/(cadenax[1]-cadenax[0]);
	fx23 = (cadenafx[2]-cadenafx[1])/(cadenax[2]-cadenax[1]);
	fx34 = (cadenafx[3]-cadenafx[2])/(cadenax[3]-cadenax[2]);
	fx45 = (cadenafx[4]-cadenafx[3])/(cadenax[4]-cadenax[3]);
	fx56 = (cadenafx[5]-cadenafx[4])/(cadenax[5]-cadenax[4]);
	
	fx123 = (fx23-fx12)/(cadenax[2]-cadenax[0]);
	fx234 = (fx34-fx23)/(cadenax[3]-cadenax[1]);
	fx345 = (fx45-fx34)/(cadenax[4]-cadenax[2]);
	fx456 = (fx56-fx45)/(cadenax[5]-cadenax[3]);
	
	fx1234 = (fx234-fx123)/(cadenax[3]-cadenax[0]);
	fx2345 = (fx345-fx234)/(cadenax[4]-cadenax[1]);
	fx3456 = (fx456-fx345)/(cadenax[5]-cadenax[2]);
	
	fx12345 = (fx2345-fx1234)/(cadenax[4]-cadenax[0]);
	fx23456 = (fx3456-fx2345)/(cadenax[5]-cadenax[1]);	
	
	fx123456 = (fx234-fx123)/(cadenax[5]-cadenax[0]);
	
	//Px = fx+(fx12*(x-x0))+(fx123*(x-x0)*(x-x1))+(fx1234*(x-x0)*(x-x1)*(x-x2))+(fx4*(x-x0)*(x-x1)*(x-x2)*(x-x3))+(fx5*(x-x0)*(x-x1)*(x-x2)*(x-x3)*(x-x4);
	cout<<fx1234;
}

