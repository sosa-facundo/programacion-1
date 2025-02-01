#include <iostream>
using namespace std;
/**Un negocio de perfumer¡a efect£a descuentos seg£n el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y se
informe por pantalla el importe con el descuento ya aplicado.
Importante: Verique que el programa emita UN SOLO CARTEL.*/
int main(){

 float importeFinal, importeOriginal;

 cout<< "ingrese el importe original: $";
 cin>> importeOriginal;

 if (importeOriginal<100){
    importeFinal=importeOriginal*0.95;
 }
 if(importeOriginal>=100 && importeOriginal<=500){
    importeFinal=importeOriginal*0.90;
 }
 if(importeOriginal>500){
    importeFinal=importeOriginal*0.85;
 }
 cout<< "el descuento queda en: $"<< importeFinal;
return 0;
}
