#include <iostream>
using namespace std;
/*Hacer un programa para ingresar por teclado la cantidad de asientos totales en
un avi¢n y la cantidad de pasajes ocupados y luego calcular e informar el
porcentaje de ocupaci¢n y el porcentaje de no ocupaci¢n del mismo.
Ejemplo si el avi¢n tiene 200 asientos totales y se vendieron 80 pasajes, el
porcentaje de ocupaci¢n que se informar  ser  de un 40% y el porcentaje de no
ocupaci¢n ser  de un 60%.
*/
int main(){


int asientosTotales, pasajesOcupados;
float porcentajeOcupados,porcentajeNoOcupados;

cout<<"informar el numero de asientos totales del avion: ";
cin>> asientosTotales;
cout<<"informar el numero de pasajes ocupados: ";
cin>> pasajesOcupados;

porcentajeOcupados=(pasajesOcupados*100)/(float)asientosTotales;

porcentajeNoOcupados= ((asientosTotales-pasajesOcupados)*100)/(float)asientosTotales;

cout<<endl<< "el porcentaje de asientos ocupados es de: " << porcentajeOcupados << "%"<<endl<<endl;
cout<< "el porcentaje de asientos NO ocupados es de: " <<porcentajeNoOcupados<<"%"<<endl<<endl<<endl<<endl<<endl<<endl;


return 0;
}
