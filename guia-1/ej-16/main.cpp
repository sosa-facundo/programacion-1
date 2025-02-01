#include <iostream>
using namespace std;
/*El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un
pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
Sinítico que son necesarios para elaborarlos.*/
int main(){

int frasco, pildoras, acidoSinitico,micilina ,betamol;

cout<< "ingresar la cantidad de frascos: "<< endl;
cin>> frasco;

pildoras=frasco *75;

acidoSinitico= pildoras * 7;
micilina= pildoras*2;
betamol=pildoras *45;

cout<< endl <<"necesitas " <<acidoSinitico<< " de acido sinitico."<< endl;
cout<< "necesitas "<< micilina << " de micilina."<< endl;
cout<< "necesitas "<< betamol << " de betamol"<< endl;

return 0;
}
