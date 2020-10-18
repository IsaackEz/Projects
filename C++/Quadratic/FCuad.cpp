//FCuad.cpp
#include <iostream>
using namespace std;
#include "Encabezado.h"
#include<math.h>

namespace nmspace
{
 	void myclass::FCuad()
 	{
		float a=2.1, b=4.2, c=1.4, d=0, x, y;
		d = b*b-4*a*c;
		if(d>0){
			x = (-b+sqrt(d))/(2*a);
       			y = (-b-sqrt(d))/(2*a);
		}
		else if (d == 0) {
        	x = (-b)/(2*a);
       	 	cout<<"x "<<"="<<x<<endl;
    		}
    		else{
       		 cout<<"La ecuacion no tiene solucion";
		}
	}
}