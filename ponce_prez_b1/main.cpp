#include <iostream>

using namespace std;

//Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
//su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.

// no entiendo a que se refiere con "Use un menú para elegir varias tablas diferentes a elección."???
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
