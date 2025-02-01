#include <IOSTREAM>
using namespace std;
/*Hacer un programa para ingresar por teclado un n£mero y luego emitir por
pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verique que el programa emita UN SOLO CARTEL.*/
main(){
int numero;
cout<< "ingrese un numero: ";
cin>>numero;
if (numero<0){
    cout<< "el numero es negativo. ";
}
 else if (numero>0){
    cout<< "el numero es positivo.";
}
else {
    cout<<"el numero es 0.";
}9

cout<< endl <<endl<<endl;

return 0;
}
