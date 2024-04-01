#include <iostream>

using namespace std;

//Ejercicio 5: Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables


// declaremos una funcion

void swap(int a, int b){
int temp = a;
a = b;
b = temp;
}



int main()
{
    int x;
    int y;
    cout << "Ingrese el primer valor :" << endl;
    cin >> x;
    cout << "ingrese el segundo valor :" << endl;
    cin >> y;
    cout << "El valor de x es: "<<x<< " y el valor de y es: "<<y<< endl;
    swap(x,y);
    cout << "El nuevo valor de x es: "<<x<< " y el nuevo valor de y es: "<<y<< endl;

    return 0;
}
