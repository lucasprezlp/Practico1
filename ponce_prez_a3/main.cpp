#include <iostream>

using namespace std;

//Ejercicio 3.1: Realice un programa que lea de la entrada est�ndar los siguientes datos de una persona: Edad: dato
//de tipo entero. Sexo: dato de tipo car�cter. Altura en metros: dato de tipo real. Tras leer los datos, el programa
//debe mostrarlos en la salida est�ndar.
//3.2 Ejecute el programa del ejercicio anterior con entradas err�neas y observe los resultados. Por ejemplo,
//introduzca un dato de tipo car�cter cuando se espera un dato de tipo entero.

int main()
{
    int edad;
    char sexo;
    double altura;


    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    cout << "Ingrase su sexo (M/F): "<<endl;
    cin >> sexo;
    cout << "Ingrese su altura en metros :"<<endl;
    cin >> altura;

    cout << "La edad del usuario es " <<edad<< ", su sexo es " <<sexo<< " y su altura es " <<altura<< endl;

    return 0;
}
