#include <iostream>

using namespace std;

/*: Escribe un programa que lea de la entrada estándar el precio de un producto
y muestre en la salida estándar, el precio del producto al aplicarle el IVA.*/

int main()
{
   double precio;
    double precio_con_iva;


    cout << "Ingrese el precio del producto: " << endl;
    cin >> precio;

    precio_con_iva=precio*0.21+precio;

    cout << "Precio con IVA incluido " <<precio_con_iva<< "$ " << endl;
    return 0;
}
