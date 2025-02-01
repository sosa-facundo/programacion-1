#include <iostream>
using namespace std;
/*Hacer un programa para ingresar el importe de una compra y el descuento a
aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
importe total a cobrar.
Ejemplo: se ingresa importe 4500, descuento 40; se deber  mostrar
Importe: 4500, Descuento: 1800, total: 2700.
*/
int main (){

int importe, descuento,importeFinal;

cout<< "ingresa el importe a cobrar: ";
cin >> importe;
cout<<"ingresa el descuento a realizar: ";
cin>> descuento;

importeFinal=(importe*(100-descuento)) /100;


cout << "el importe es de: " << importe<< "el descuento es del: "<< descuento<< " importe final:  " <<importeFinal;
return 0;
}
