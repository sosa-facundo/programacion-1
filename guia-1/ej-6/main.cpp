#include <iostream>
using namespace std;
/*Hacer un programa para que un comercio ingrese por teclado la recaudaci¢n en
pesos para cada una de las cuatro semanas del mes. El programa debe listar la
recaudaci¢n promedio por semana y el porcentaje de recaudaci¢n por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listar  como recaudaci¢n
promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/
int main(){

int semana1, semana2, semana3, semana4;
float recaudacionPromedio, porcentaje1, porcentaje2, porcentaje3,porcentaje4;


cout<< "ingresar los numeros recaudados de cada semana. "<<endl;
cout << "semana 1: ";
cin>> semana1;
cout<< "semana 2: ";
cin>> semana2;
cout<< "semana 3: ";
cin>>semana3;
cout<< "semana 4: ";
cin>>semana4;

recaudacionPromedio=(semana1+semana2+semana3+semana4)/4;

porcentaje1=(semana1*100)/(float)(semana1+semana2+semana3+semana4);
porcentaje2=(semana2*100)/(float)(semana1+semana2+semana3+semana4);
porcentaje3=(semana3*100)/(float)(semana1+semana2+semana3+semana4);
porcentaje4=(semana4*100)/(float)(semana1+semana2+semana3+semana4);

cout<<endl<<"recaudacion promedio de las 4 semanas : " <<recaudacionPromedio<<endl;
cout<<"porcentaje de la semana 1: " <<porcentaje1<<endl;
cout<<"porcentaje de la semana 2: " <<porcentaje2<<endl;
cout<<"porcentaje de la semana 3: " <<porcentaje3<<endl;
cout<<"porcentaje de la semana 4: " <<porcentaje4<<endl;




return 0;
}
