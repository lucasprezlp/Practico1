#include <iostream>

using namespace std;
/*6.1:Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas,
minutos y segundos.*/
int main()
{
    double segundos;
    double horas;
    double minutos;

    cout << "Ingrese la cantidad de segundos que desea convertir " << endl;
    cin >> segundos;

    horas=segundos/3600;
    minutos=segundos/60;

    cout << "Convertimos los segundos ingresados: "<< endl;
    cout << "Horas: " <<horas<< endl;
    cout << "Minutos: " <<minutos<< endl;
    cout << "Segundos: " <<segundos<< endl;

    /*6.2: Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para segundos, como
    resultado lo transforma y muestra el total a cantidad de segundos.*/
    int seg;
    int hs;
    int minu;
    double todo_a_segundos;


     cout << "Ingrese la cantidad de horas " << endl;
    cin >> hs;
    cout << "Ingrese la cantidad de minutos " << endl;
    cin >> minu;
     cout << "Ingrese la cantidad de segundos " << endl;
    cin >> seg;

    todo_a_segundos= (hs*3600)+(minu*60)+seg;

    cout << "Los datos ingresados transformados da un total de : " <<todo_a_segundos<< " segundos "<< endl;


    return 0;
}
