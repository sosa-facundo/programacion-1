#include <IOSTREAM>
using namespace std;
/*Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuantas horas y minutos equivalen.
Ejemplo A: si se ingresan 380 minutos el programa mostrar  por pantalla que
equivalen a 6 horas y 20 minutos.
Ejemplo B: si se ingresan 720 minutos el programa mostrar  por pantalla que
equivalen a 12 horas y 0 minutos.
Ejemplo C: si se ingresan 50 minutos el programa mostrar  por pantalla que
equivalen a 0 horas y 50 minutos*/
int main(){
int minutos, horas,minutosFinales;
cout<< "ingresar cantidad de minutos: ";
cin >> minutos;
horas=minutos/60;
minutosFinales= minutos%60;
cout<<endl<< "el tiempo recibido equivale a "<< horas << " hora/s y " << minutosFinales << " minuto/s";

return 0;
}
