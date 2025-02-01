#include <iostream>
using namespace std;
/*Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
por pantalla a cuantos d¡as y horas equivalen.
Ejemplo A: si se ingresan 26 horas el programa mostrar  por pantalla que
equivalen a 1 d¡a y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrar  por pantalla que
equivalen a 3 d¡as y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrar  por pantalla que
equivalen a 0 d¡as y 20 horas.
*/
int main(){

int horas, diasFinales,horasFinales;
cout<<"ingrese la cantidad de horas: ";
cin>> horas;

diasFinales=horas/24;
horasFinales=horas%24;

cout<<"equivalen a " <<diasFinales<<" dias y a "<< horasFinales <<" horas.";

return 0;
}
