#include <iostream>
#include <math.h>


using namespace std;
//Ejercicio 14: Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x
//e y: f(x,y) = √𝑥/ 𝑦2−1
int main()
{
    float x,y,resultado=0;
    float f = 0;

    cout << "Ingrese el valor de x: "<<endl;
    cin >> x;
    cout << "Ingrese el valor de y: "<<endl;
    cin >> y;

    resultado=(sqrt(x))/(pow(y,2)-1);

    cout<<"El resultado de la funcion es: "<<resultado<<endl;

    return 0;
}
