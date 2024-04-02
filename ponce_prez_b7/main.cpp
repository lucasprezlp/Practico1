#include <iostream>

using namespace std;



int main()
{

    //Ejercicio 7: A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n.
//
//    int numero,n=1, suma=0;
//    cout << "Ingrese un numero" << endl;
//    cin >> numero;
//
//    while(n<=numero){
//    suma = suma + n;
//    n++;
//    }
//    cout <<suma<<endl;


    // B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1
    int numero, suma=0;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    for(int i=1; i<=numero;i++){
        suma += 2*i-1;
    }
    cout <<suma<<endl;



    return 0;
}
