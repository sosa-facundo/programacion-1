#include <IOSTREAM>
using namespace std;
/*Hacer un programa que solicite por teclado que se ingresen dos n£meros y
luego guardarlos en dos variables distintas. A continuaci¢n se deben
intercambiar mutuamente los valores en ambas variables y mostrarlos por
pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/
int main(){
int a, b,c;

cout<< "ingrese el primer numero: ";
cin>> a;
cout<< "ingrese el segundo numero: ";
cin>> b;
c=a;
a=b;
b=c;
cout<< "el primer numero fue cambiado, ahora es: " <<a<< endl;
cout<< "el segundo numero fue cambiado, ahora es: " <<b<< endl;

return 0;
}
