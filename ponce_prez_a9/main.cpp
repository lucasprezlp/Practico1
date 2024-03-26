#include <iostream>

using namespace std;

//Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. Luego determine y
//muestre cuál de ellas llego primero.
//



int main()
{
    string nombre1;
    int tiempoDeNado1;
    string nombre2;
    int tiempoDeNado2;
    cout << "Ingrese el nombre del primer nadador: " << endl;
    cin >> nombre1;
    cout << "ingrese su tiempo: ";
    cin >> tiempoDeNado1;
    cout << "Ingrese el nombre del segundo nadador: " << endl;
    cin >> nombre2;
    cout << "Ingrese el tiempo: ";
    cin >> tiempoDeNado2;

    if(tiempoDeNado1 > tiempoDeNado2){
        cout << "Llego primero " + nombre1 << endl;
    }
    if (tiempoDeNado1 < tiempoDeNado2) {
        cout << "Llego primero " + nombre2 << endl;
    }
    if (tiempoDeNado1 == tiempoDeNado2)  {
        cout << "Empataron" << endl;
    }


    return 0;
}
