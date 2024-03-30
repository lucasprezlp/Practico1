#include <iostream>

using namespace std;
//
//Ejercicio 13: Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el 1..hasta n. Ej.: si
//n=13, nos muestra la salida: Fibonacci(13)= 1 1 2 3 5 8 13


int main()
{
    int n, a, b, c;
    // este n es la cantidad de veces que ser se ejecutara la el ciclo for.
     a = 0; // "a" es el primero número de la serie.
     b = 1; // "b" es el segundo número de la serie.
            // "c" es el que va acumulado las sumas.
    cout << "Ingrese el número hasta donde quiere que se realice la serie" << endl;
    cin >> n;
    for (int i=1; i<=n; i++){
         cout << a << " ";
        c= a + b;
        a= b;
        b= c;
    }
    return 0;
}
