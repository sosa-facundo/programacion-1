#include <iostream>
using namespace std;
/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 m s
$700 de premio por cada auto vendido. Hacer un programa que permita
ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
pagar es de $7800*/
int main(){

const int sueldofijo = 5000;
int autos, sueldofinal, premioxautos;

cout<< "ingrese la cantidad de autos vendidos: ";
cin>> autos;
premioxautos=autos*700;
sueldofinal= sueldofijo+premioxautos;
cout<< "su sueldo es: "<< sueldofinal;

return 0;
}
