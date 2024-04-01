#include <iostream>

using namespace std;
//Ejercicio 7: A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n.
// B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1

int main()
{
    int numero,n=1, suma=0;
    cout << "Ingrese un numero" << endl;
    cin >> numero;

    while(n<=numero){
    suma = suma + n;
    n++;
    }
    cout <<suma<<endl;
    return 0;
}
