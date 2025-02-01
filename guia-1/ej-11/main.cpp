#include<IOSTREAm>
using namespace std;
/*Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cu ntos d¡as, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrar  por pantalla que
equivalen a 1 d¡a, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrar  por pantalla que
equivalen a 0 d¡a, 8 horas y 0 minutos.*/
int main(){
int minutosIngresados,diasFinales,horasFinales,minutosFinales,minutosSobrantes;

cout<<"ingresar cantidad de minutos: ";
cin>>minutosIngresados;


// 60 minutos * 24 horas = 1.440 minutos tiene el dia.
diasFinales=minutosIngresados/1440;
minutosSobrantes=minutosIngresados%1440;
horasFinales=minutosSobrantes/60;
minutosFinales=minutosSobrantes%60;


cout<<endl<<"son "<<diasFinales<< "dia/s ," << horasFinales<< " hora/s y " <<minutosFinales <<" minuto/s.";






return 0;
}
