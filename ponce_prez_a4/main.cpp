#include <iostream>

#include <math.h> //necesito esta biblio para usar round

using namespace std;
/* Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida
será el monto convertido a dólares. Tome la cotización actual de dólar blue, redondear a 2 cifras.*/

int main()
{

    double cotizacion_blue=1150.50;
    double monto_pesos, monto_dolares;
    cout << "Ingrese la cantidad de dinero en pesos argentinos: "<<endl;
    cin >> monto_pesos;

    monto_dolares = monto_pesos / cotizacion_blue;
    monto_dolares = round(monto_dolares * 100.0) / 100.0; // Redondear a dos decimales(si no le agrgarmos el .0 redondearia el entero)

    cout << "El monto equivalente en dolares es: $"<< monto_dolares<<endl ;


}
