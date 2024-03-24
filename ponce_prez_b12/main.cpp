#include <iostream>
using namespace std;
//E12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n
int main()
{
    int n,suma;

    cout<< "Ingrese el total de elementos a calcular"<<endl;
    cin>> n;


   for(int i = 1 ; i <=  n; i ++){//debemos inicializar en 1
        if(i%2 == 0){
            suma -= i;//los pares son negativos segun la secuencia por eso restamos
        }else{
            suma += i;//impares se suman
        }
    }

  cout <<"El resultado es: "<< suma <<endl;

    return 0;
}
