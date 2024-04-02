#include <iostream>

using namespace std;
/* 10: Escriba un programa que calcule el valor de:
 1! +2! + 3! + ... + n! (suma de factoriales)*/


int main()
{
    int num,suma=1;
    cout << "Ingrese el numero para la suma de factoriales" << endl;
    cin>> num

    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        for(int i=1; i<=num; i++)
        {

            suma*=i;

        }
         cout << "El factorial de " << num << " es: " << suma << endl;
    }

    return 0;
}
