#include <iostream>
using namespace std;
  /*Hacer un programa para ingresar por teclado un n£mero y luego informar por
pantalla con un cartel aclaratorio si el mismo es par o impar.
*/
int main (){

int n1,numeroFinal;
cin>> n1;
numeroFinal = n1 %2;

if (numeroFinal!=0){
    cout<<"el numero es impar";
}
else{
    cout<<"el numero es par";
}

 cout<<endl<<endl<<endl<<endl<<endl;
return 0;
}
