#include <iostream>
#include <vector> // biblio para vector

using namespace std;
/*Ejercicio 8: La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que
cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante.
Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su
nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar. */


double calculoNotaFinal(double practicas, double teoricas, double participacion)
{
    return (0.3 * practicas) + (0.6 * teoricas) + (0.1 * participacion);// media ponderada

}


int main()
{
    int num_alumnos;
    cout << "Ingrese la cantidad de alumnos a calificar: ";
    cin >> num_alumnos;


        vector<double> calificaciones_finales(num_alumnos);//usamos vector y no array ya que este ultimo necesita conocer su tamaño en tiempo de
                                                        // compilacion en cambio el vector puede especificar su tamaño en tiempo de ejecucion.

    for (int i = 0; i < num_alumnos; ++i)
    {
        double notaPractica, notaTeorica,notaParticipacion;

        cout << "Ingrese la nota de praticas del alumno " << i + 1 << ": "<<endl;
        cin >> notaPractica;
        cout << "Ingrese la nota Teorica del alumno "<< i + 1 << ": "<<endl;
        cin >> notaTeorica;
        cout << "Ingrese la nota de participacion del alumno"<< i + 1 << ": "<<endl;
        cin >> notaParticipacion;

        calificaciones_finales[i]=calculoNotaFinal(notaPractica,notaTeorica,notaParticipacion);
//el resultado de la función calculoNotaFinal (tipodouble) se va a asignar al elemento i del vector calificaciones_finales


    }

     cout << "Calificaciones finales de los " <<  num_alumnos << " alumnos:" << endl;
    for (int i = 0; i < num_alumnos; ++i)
    {
        cout << "Alumno " << i + 1 << ": " << calificaciones_finales[i] << endl;
    }
    return 0;
}
