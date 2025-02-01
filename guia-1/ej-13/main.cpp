#include <iostream>
using namespace std;
/*Hacer un programa para un cajero autom tico para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
entregar.
Ejemplo A: Si el importe a retirar es $2500 se mostrar  por pantalla que se
deber n entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
billetes de $100.
Ejemplo B: Si el importe a retirar es $3400 se mostrar  por pantalla que se
deber n entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
billetes de $100.
Ejemplo C: Si el importe a retirar es $300 se mostrar  por pantalla que se
deber n entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0
billetes de $500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
los casos m£ltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o
$10.*/
int main (){

int billetes1000, billetes500, billetes200, billetes100,ingresado,resto;

cout<< "ingrese el monto a retirar: ";
cin>>ingresado;

billetes1000=ingresado/1000;
resto=ingresado%1000;

billetes500=resto/500;
resto=resto%500;

billetes200=resto/200;
resto=resto%200;

billetes100=resto/100;
resto=resto%100;

cout<< endl<<"bille 1000 = " <<billetes1000<<endl<< "  billete de 500 = " << billetes500 << endl<<"billetes 200  =  "<< billetes200<<endl<< "billete 100 =  "<< billetes100;

return 0;
}
