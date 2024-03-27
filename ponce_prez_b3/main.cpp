#include <iostream>

using namespace std;

//Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar, la suma de los cuadrados de los 10
//primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.



int main()
{
    int suma = 0;

    for (int i =1; i<=10; ++i){
        suma = suma + i*i;
    }

    // como son los 10 promeros enteneros de mayores que 0 entonces sean siempre positivo.Ádemas de eso los elevas al cuadrado, siendo otra razón de que no pueden ser negativos.
    std::cout << "La suma de los cuadrados de los 10 primeros enteros es: " << suma << std::endl;


    return 0;
}
