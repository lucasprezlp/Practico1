#include <iostream>

using namespace std;

//Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
//su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.

// no entiendo a que se refiere con "Use un menú para elegir varias tablas diferentes a elección."???

void escribirtabla(int numero){
    for (int i=0;i<=10;i++){
        cout << numero << " x " << i <<" = "<< numero*i<< endl;
    }
}

int main()
{
 int n;
 do {
    cout << "Menu" << endl;
    cout <<"0- Salir"<<endl;
    cout <<"1- Tabla del 1"<<endl;
    cout <<"2- Tabla del 2"<<endl;
    cout <<"3- Tabla del 3"<<endl;
    cout <<"4- Tabla del 4"<<endl;
    cout <<"5- Tabla del 5"<<endl;
    cout <<"6- Tabla del 6"<<endl;
    cout <<"7- Tabla del 7"<<endl;
    cout <<"8- Tabla del 8"<<endl;
    cout <<"9- Tabla del 9"<<endl;
    cin >>n;
    }while(n<=0 || n>10);

    switch(n){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        escribirtabla(n);
        break;
    case 0:
        cout <<"Ha salido del programa."<<endl;
        break;
    default:
        cout <<"Ha salido del programa."<<endl;
    }



    return 0;
}
