#include <iostream>


using namespace std;
/* Realice un programa que lea de la entrada est�ndar n�meros hasta que se introduzca un cero. En ese
momento el programa debe terminar y mostrar en la salida est�ndar el n�mero de valores le�dos mayores que cero.
Usar una estructura do-while.*/
int main()
{
     int numero,contador=0;
    do
    {

        cout << "Ingrese un numero (presione 0 para salir)" << endl;
        cin>>numero;

        if(numero>0){
			contador++;
		}

    }while(numero!=0);
    	cout<<"El total de numeros ingresados mayores que 0 es: "<<contador;


    return 0;
}
