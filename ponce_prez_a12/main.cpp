#include <iostream>
#include <math.h>

using namespace std;

/*o 12: Escriba un programa que calcule las soluciones de una ecuación de segundo grado
 de la forma ax^2+ bx + c = 0,
  teniendo en cuenta que: f(a,b,c) =−𝑏+√(𝑏2−4𝑎𝑐)
2�*/

int main()
{
    float a,b,c;
    double x1=0,x2=0;

    cout << "Ingrese el valor de a: "<<endl;
    cin >> a;
    cout << "Ingrese el valor de b: "<<endl;
    cin >> b;
    cout << "Ingrese el valor de c: "<<endl;
    cin >> c;

    if (a==0 )
    {
        cout << "El valor de a debe ser distinto a 0" << endl;
        //si la var a es cero no podemos resolver la ecuacion general
    }
    else
    {
        double d=b * b - 4 * a * c;

        if (d<0)
        {
            cout << "La ecuación no tiene soluciones reales." << endl;

        }
        else
        {
            x1 = ((-1*b) + sqrt(d)) / (2 * a);
            x2 = ((-1*b )- sqrt(d)) / (2 * a);
            cout<<"x1= "<<x1<<endl;
            cout<<"x2= "<<x2<<endl;

        }
    }




    return 0;
}






