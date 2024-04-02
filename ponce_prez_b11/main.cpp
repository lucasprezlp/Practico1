#include <iostream>
#include <cmath> // para poder usar expresiones matemáticas
using namespace std;
//Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
int main()
{
    int n,suma;
    cout << "Ingrese un numero" << endl;
    cin >>n;
    for(int i=1;i<=n;i++){
        suma +=  pow(2,i);
    }
    cout <<"La suma es: " <<suma<< endl;
    return 0;
}
