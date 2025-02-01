#include <iostream>
using namespace std;
/**
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
teclado la longitud de los tres lados de un tri ngulo y luego listar qu‚ tipo de
tri ngulo es:
- Equil tero: si los tres lados son iguales.
- Is¢sceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre s¡.
*/
int main(){
int ladoA, ladoB,ladoC;

cout<<"ingresar medidas en centimetros: "<<endl;
cin>> ladoA;
cout<< endl;
cin>> ladoB;
cout<< endl;
cin>> ladoC;
cout<<endl;

if(ladoA==ladoB && ladoB==ladoC && ladoC==ladoA){
    cout<<"Es EQUILATERO.";
}
else if(ladoA==ladoB && ladoB!=ladoC && ladoA!=ladoC || ladoB==ladoC && ladoC!=ladoA && ladoB!=ladoA || ladoC==ladoA && ladoA!=ladoB && ladoC!=ladoB){
       cout<<"Es ISOSCELES";
}
else if(ladoA!=ladoB && ladoB!=ladoC && ladoC!=ladoA){
    cout<<"Es ESCALENO";
}




return 0;
}
