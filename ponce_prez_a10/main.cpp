#include <iostream>
#include<ctime>

using namespace std;
/*10: Escriba un programa que lea de la entrada estándar el nombre de una persona en un arreglo de
caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.*/
int main()
{

    char nombre[50];
    int anio_nacimiento,edad;



    cout << "Ingrese su nombre" << endl;
    cin>> nombre;
       cout << "Ingrese su año de nacimiento" << endl;
    cin>> anio_nacimiento;


    time_t ahora = time(0); // Obtener el año actual
    tm *fechaActual = localtime(&ahora);
    int anio_actual = fechaActual->tm_year + 1900;// devuelve el año actual desde 1900, por lo que sumamos 1900 para obtener el año real

    edad=anio_actual-anio_nacimiento;



    cout << nombre << ", su edad es: " << edad << " años." << endl;






    return 0;
}
