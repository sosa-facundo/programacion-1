#include <iostream>
#include <iomanip>
using namespace std;
/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
por un operario y el valor que se le paga por hora trabajada y listar por pantalla
el sueldo que le corresponda.*/
int main(){

int horas;
float valorHora, sueldo;

cout<< "ingrese la cantidad de horas trabajadas: "<< endl;
cin>> horas;
cout<< "¨cuanto es el monto valor hora de este operario?"<< endl;
cin>> valorHora;

sueldo= horas*valorHora;

cout << fixed << setprecision(2);
cout<< "El sueldo correspondiente es de: "<< endl;
cout<< sueldo;

return 0;
}
