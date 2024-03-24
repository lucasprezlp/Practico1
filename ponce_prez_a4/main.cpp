#include <iostream>
#include <iomanip>

using namespace std;
/* Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida
será el monto convertido a dólares. Tome la cotización actual de dólar blue, redondear a 2 cifras.lucas*/

int main(){

    double cotizacion_blue=1150.50;
     double monto_pesos, monto_dolares;
   cout << "Ingrese la cantidad de dinero en pesos argentinos: "<<endl;
   cin >> monto_pesos;

    monto_dolares = monto_pesos / cotizacion_blue;
    cout << "El monto equivalente en dolares es: $" << fixed<< setprecision (2)<< monto_dolares<<endl ;
                                                    //para usar setprecision se debe incluir su biblioteca <iomanip>
                            //fixed: exige que se tactue sobre las decimas
    return 0;
}
