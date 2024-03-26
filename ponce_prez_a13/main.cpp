#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;


//Ejercicio 13: Escribe la siguiente expresión en C++. Use precisión para redondear la salida del cout.
//A) f(a,b)= (a/b) + 1
//B) f(a,b)= (a+b)/(c+d)
//C) f(a,b)= (a+(b/c))/(d+(e/f))
//D) f(a,b)= a + (b/(c-d))


int main()
{
    double a,b,c,d,e,f;
    cout << "Ingrese el valor de A" << endl;
    cin >> a;
    cout << "Ingrese el valor de B" << endl;
    cin >> b;
    cout << "Ingrese el valor de C" << endl;
    cin >> c;
    cout << "Ingrese el valor de D" << endl;
    cin >> d;
    cout << "Ingrese el valor de E" << endl;
    cin >> e;
    cout << "Ingrese el valor de F" << endl;
    cin >> f;

    //a)
    double resultadoA = (a / b) + 1;
    cout << "f(a,b)= (a/b) + 1 = " << fixed << setprecision(2) << resultadoA << endl;

    //b)
    double resultadoB = (a + b) / (c + d);
    cout << "f(a,b,c,d)= (a+b)/(c+d) = " << fixed << setprecision(2) <<resultadoB << endl;

    //c)
    double resultadoC = (a + (b / c)) / (d + (e / f));
    cout << "f(a,b,c,d,e,f)= (a+(b/c))/(d+(e/f)) = " << fixed << setprecision(2) <<resultadoC << endl;

    //d)
    double resultadoD = a + (b / (c - d));
    cout << "f(a,b,c,d)= a + (b/(c-d)) = " << fixed << setprecision(2) << resultadoD << endl;


    return 0;
}
