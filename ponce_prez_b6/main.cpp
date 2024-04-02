#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
/*Ejercicio 6: Escriba un programa que calcule num^exp, donde tanto num
como exp son enteros positivos, sin utilizar la función pow.
 Donde num será una base generada de forma aleatoria entre 2 y 42,
  y exp será ingresada por teclado nomayor a 5.
  Usar las librerías stdlib.h y cmath.
*/
int main()
{

    int base = rand() % 41 + 2;//num aleatorio
    int exponente,multiplica=1;
    cout<<"Ingrese el exponente (menor o igual a 5): ";
    cin>>exponente;

    if (exponente > 5)
    {
        printf("El exponente debe ser mayor a 5.\n");
        return 1;// sin este return muestra el mensaje del if  pero tambien hace la cuenta
    }

    for(int i=0; i<exponente; i++) //la cantidad de multiplicacioes segun el expo
    {

        multiplica*=base;
    }

    cout<< base <<" elevado a la " <<exponente<<" es igual a: "<<multiplica<<endl;

//

    return 0;
}
