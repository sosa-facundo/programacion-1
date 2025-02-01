#include <iostream>
using namespace std;
/**
Este ejercicio lo resolver n en la parte de c¢digo de la materia.
El costo de un desarrollo de un proyecto de software se calcula en base al
lenguaje que se necesita:
------------------------
Nombre Tipo Valor hora
C/C++ 'C' $ 7500
C# '#' $ 6100
Python 'P' $ 5400
Go 'G' $ 5000
------------------------
Adem s, si el proyecto es marcado como Urgente, se le aumenta un 120 % m s
al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto
basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o
no (bool)
*/
int main (){

int cantHoras,precioHora;
char respuesta,var;
bool esUrgente;
float sueldo;
cout<<"ingrese cantidad de horas: "<<endl;
cin>>cantHoras;




/// designar el PROGRAMA///
cout<< endl<<endl<<"ingrese"<<endl<<" 'C' para C/C++." <<endl<< "'#' para C#."<<endl<<" 'P' para Python."<<endl<<" 'G' para Go: "<<endl<< endl;

cin>>var;
switch (var){
case 'C':
case 'c':
precioHora=7500;

    break;
case '#':
precioHora=6100;

    break;
case 'P':
case 'p':
precioHora=5400;

    break;
case 'G':
case 'g':
precioHora=5000;

    break;
default:

    break;
}

///urgencia del proyecto///
cout<<"el proyecto es urgente? [S/N]: ";
cin>>respuesta;

if(respuesta=='s' ||respuesta=='S'){
    esUrgente=1;
}
else {
    esUrgente=0;
}

///designar SUELDO A PAGAR///
if(esUrgente==1){
    sueldo=precioHora*cantHoras*2.2;
}
else {
    sueldo=precioHora*cantHoras;
}


cout<< "el precio a pagar es: " <<sueldo;



return 0;
}
