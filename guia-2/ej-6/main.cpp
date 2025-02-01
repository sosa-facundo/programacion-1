#include <iostream>
using namespace std;
 /*Hacer un programa para ingresar por teclado tres n£meros y luego determinar e
informar con una leyenda aclaratoria si los tres son iguales entre s¡, caso
contrario no emitir nada.
Tener en cuenta: Si A es igual a B y B es igual a C, entonces A y C son iguales.*/
int main (){
int n1,n2,n3;
cout<< "ingrese los 3 numeros: "<<endl;
cin>> n1;
cout<<endl;
cin>> n2;
cout<<endl;
cin>> n3;
cout<<endl;
if(n1==n2&&n2==n3&&n3==n1){
    cout<<endl<<"son los 3 numeros iguales";
}
else {
    cout<<endl<<"son los 3 numeros diferentes";
}

 cout<<endl<<endl<<endl<<endl;
return 0;
}
