#include <iostream>
using namespace std;
/**Hacer una funci¢n llamada EsPar que determine si un n£mero es par o no. La
funci¢n debe recibir un n£mero entero por valor y devolver true si es par o false
si no lo es. La funci¢n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n£mero y, utilizando EsPar, emita luego un
cartel indicando si el n£mero ingresado es par o no es par.*/
bool esPar(int numero){
    return numero%2==0;
    }

int main (){

    int n;

    cin>>n;

    if(esPar(n))
    {
        cout<<"Es par"<<endl;
    }
    else
    {
        cout<<"no es par"<<endl;
    }

return 0;
}
