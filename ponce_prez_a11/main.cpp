#include <iostream>

using namespace std;
//Ejercicio 11: Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su
//suma, resta, multiplicación y división.

double suma(double numero1, double numero2){
    return numero1+numero2;
}
double resta(double numero1, double numero2){
    return numero1-numero2;
}
double multiplicacion(double numero1, double numero2){
     return numero1/numero2;
}
double division(double numero1, double numero2){
     return numero1/numero2;
}


int main()
{
    double n1;
    double n2;
    cout << "Ingrese un número" << endl;
    cin >>n1;
    cout << "Ingrese el otro número" <<endl;
    cin >>n2;
    double sum = suma(n1,n2);
    double rest = resta(n1,n2);
    double milt = multiplicacion(n1,n2);
    double div = division(n1,n2);

    cout << "La suma es: "<<sum<< endl;
    cout << "La resta es: "<<rest<< endl;
    cout << "La multiplicado es: "<<milt<< endl;
    cout << "La division es: "<<div<< endl;
    return 0;
}
