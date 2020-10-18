//Carlos Isaac Espinoza Alvarez   11/02/2020
//Programa Ordenamiento numeros pares e impares peor caso
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <ctime>
#include <time.h>

using namespace std;


int main(){
    char d[] = {'A','Z'};
    auto start = chrono::steady_clock::now();
    for(int i = 0; i<20; i++){
        if(d[i] >= 'a' && d[i] <= 'z'){
            d[i] =- 32;
        }
    }
    auto end = chrono::steady_clock::now();
    cout << "\nTiempo en nanosegundos: "<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()<< "ns" << endl;
    return 0;
}