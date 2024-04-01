#include <iostream>

using namespace std;

//Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se
//introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.

int main()
{
    int numero, suma=0;
    cout << "Ingrese un numero" << endl;
    cin >> numero;


    while((numero<=20 || numero>=30) && numero!=0 ){
    suma = suma + numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    }
    cout << "la suma es = " <<suma<< endl;
    return 0;
}
