#include <iostream>
#include<ctime>

using namespace std;
/*10: Escriba un programa que lea de la entrada est�ndar el nombre de una persona en un arreglo de
caracteres. Adem�s, pide el a�o de nacimiento, y determina su edad en a�os complidos.*/
int main()
{

    char nombre[50];
    int anio_nacimiento,edad;



    cout << "Ingrese su nombre" << endl;
    cin>> nombre;
       cout << "Ingrese su a�o de nacimiento" << endl;
    cin>> anio_nacimiento;


    time_t ahora = time(0); // Obtener el a�o actual
    tm *fechaActual = localtime(&ahora);
    int anio_actual = fechaActual->tm_year + 1900;// devuelve el a�o actual desde 1900, por lo que sumamos 1900 para obtener el a�o real

    edad=anio_actual-anio_nacimiento;



    cout << nombre << ", su edad es: " << edad << " a�os." << endl;






    return 0;
}
