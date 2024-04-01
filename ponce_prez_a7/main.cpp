#include <iostream>
#include <cmath> // Necesario para la funci�n sqrt()
using namespace std;
//Ejercicio 7: Escriba un programa que lea de la entrada est�ndar los dos catetos de un tri�ngulo rect�ngulo y escriba
//en la salida est�ndar: A) per�metro y superficie y B) su hipotenusa.

double perimetro(double cat1, double cat2){
    return cat1*2+cat2*2;
}
double area(double cat1, double cat2){
return (cat1*cat2)/2;
}

double hipotenusa(double cat1, double cat2){
return sqrt(cat1*cat1+cat2*cat2);
}


int main()
{
    double catetoMayor;
    double catetoMenor;
    std::cout << "Ingrese el primer cateto: " <<endl;
    std::cin >> catetoMayor;
    std::cout << "Ingrese el segundo cateto: " <<endl;
    std::cin >> catetoMenor;
    double peri = perimetro(catetoMayor,catetoMenor);
    double are = area(catetoMayor,catetoMenor);
    double hipot = hipotenusa(catetoMayor,catetoMenor);
    std:: cout << "El perimetro es: "<< peri << std::endl;
    std:: cout << "El area es: "<< are << std::endl;
    std:: cout << "La hipotenusa es: "<< hipot << std::endl;
    return 0;
}
