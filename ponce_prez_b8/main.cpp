#include <iostream>

using namespace std;
/*En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se elija una opción
el número de: a) Alumnos que aprobaron todos los exámenes. b) Alumnos que aprobaron al menos un examen. c)
Alumnos que aprobaron únicamente el último examen.
*/
int main(){


int nota1,nota2,nota3,todos=0,ultimo=0,uno=0;


for(int i=1; i<=5; i++)
{
    cout<<"Introduce las 3 notas del alumno "<< i << ": "<<endl;

    cout<<"Introduce nota 1: "<<endl;
    cin>>nota1;
    cout<<"Introduce nota 2: "<<endl;
    cin>>nota2;
    cout<<"Introduce nota 3: "<<endl;
    cin>>nota3;

    if((nota1>=6) && (nota2>=6) && (nota3>=3))
    {
        todos++;
    }
    if((nota1>=6)|| (nota2>=6) ||(nota3>=6) )
    {
        uno++;
    }
    if((nota1<6) &&(nota2<6)  &&(nota3>=6) )//el que aprobo SOLO el ultimo examen
    {
        ultimo++;
    }
}


char opcion;
cout << "SELECCIONE UNA OPCION" << endl;
cout << "a) Alumnos que aprobaron todos los examenes" << endl;
cout << "b) Alumnos que aprobaron al menos un examen" << endl;
cout << "c) Alumnos que aprobaron unicamente el ultimo examen" << endl;
cin>> opcion;

switch(opcion)
{
case 'a':
    cout << "Cantidad de alumnos que aprobaron todos los examenes: " << todos<<endl;
    break;
case 'b':
    cout << "Cantidad de alumnos que aprobaron un examen: " << uno<< endl;
    break;
case 'c':
    cout << "Cantidad de alumnos que aprobaron el ultimo examen: "  <<ultimo<< endl;
    break;
default:

    break;
}
return 0;
}
