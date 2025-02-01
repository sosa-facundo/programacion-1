#include <iostream>
using namespace std;
/*Hacer un programa para ingresar por teclado dos n£meros y luego informar por
pantalla con un cartel aclaratorio si el primer n£mero es m£ltiplo del segundo.
*/
int main(){

int num1,num2;
float resto,restoConFloat,numeroFinal;

cout<< "ingrese el numero para saber si es multiplo del siguente a ingresar: ";
cin>> num1;
cout<<"ingrese el numero: ";
cin>> num2;

resto= num1/num2;

restoConFloat=num1/(float)num2;

cout<<resto;
cout<<endl<<restoConFloat;

numeroFinal=restoConFloat-resto;

if(numeroFinal==0){
    cout<<endl<<"es multiplo";
}
else{
    cout<<endl<< "no es multiplo";
}


return 0;
}
