#include <iostream>

using namespace std;

//Ejercicio 1: Realice un programa que solicite de la entrada est�ndar un entero del 1 al 10 y muestre en la salida est�ndar
//su tabla de multiplicar. Use un men� para elegir varias tablas diferentes a elecci�n.

// no entiendo a que se refiere con "Use un men� para elegir varias tablas diferentes a elecci�n."???
int main()
{
    int numero;
    cout << "Ingrese un numero del 1 al 10" << endl;
    cin >> numero;

    for (int i=0;i<=10;i++){
        cout << numero << " x " << i <<" = "<< numero*i<< endl;
    }

    return 0;
}
