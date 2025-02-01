#include <iostream>
using namespace std;
/*Hacer un programa para ingresar por teclado el importe de una venta y el
porcentaje de descuento aplicada a la misma y luego informar por pantalla el
importe a pagar.
Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
el total a pagar ser  de $1020.
Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
total a pagar ser  de $800.
*/
int main(){
int importe, descuento, total;
cout<< "ingrese el importe de la venta: ";
cin>> importe;
cout<< endl<<"ingrese el descuento aplicado: ";
cin>> descuento;

if(descuento>0&&descuento<100){
    total=(importe*(100-descuento))/100;
}
else{
    total=importe;
}


cout<< endl<< "con un importe a pagar de " <<importe<<endl<< " el descuento aplicado es " <<descuento<<"%"<<endl<<endl<< "El total a pagar es: " <<total;

return 0;
}
