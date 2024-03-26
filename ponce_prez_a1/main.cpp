#include <iostream>
using namespace std;

//Ejercicio 1:
//A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del usuario, además
//debe mostrar el nombre_completo por pantalla. (considera los espacios)
//B) Ejemplifique, como se coloca un comentario de una o varias líneas.
//C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.



int main()
{
    string nombre, apellido;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    string nombre_completo = nombre + " " + apellido;
    cout << "El nombre completo es: "<< nombre_completo << endl;

    // B) los comentarios se deben colocar entre "/*" y "*/" o con "//". El primero se usa para varias lineas y segundo solo una linea.

    // ejemplo

    /*
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    */

    //C) Opciones: endl, '\n' son para bajar un renglón
    return 0;
}
