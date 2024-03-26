#include <iostream>

using namespace std;

//Ejercicio 9: Escriba un programa que calcule el valor de: 1 * 2 * 3 *...* n (factorial)

int main()
{
    int n;
    unsigned long long factorial = 1; //unsigned es para que tome solo valores negativos y long porque es un numero grande
    cout << "Ingrese un número positivo" << endl;
    cin >> n;
        if (n < 0) {
        cout << "El factorial no esta definido para números negativos." << endl;
    } else {
        // con un for calculamos el factorial
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }

    return 0;
}
