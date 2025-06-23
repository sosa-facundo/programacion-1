#include <iostream>
using namespace std;
/**Hacer una funci¢n llamada EsPrimo que determine si un n£mero es primo o
no. La funci¢n debe recibir el n£mero y devolver true si es primo o false si no lo
es. La funci¢n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n£mero y, utilizando EsPrimo, emita luego
un cartel indicando si el n£mero ingresado es primo o no es primo.*/
bool esPrimo(int numero){
    int contador=0;

    for(int i=1;i<=numero;i++){
        if(numero%i==0){
            contador++;
        }
    }
    if (contador==2){
        return true;
    }
    else{
        return false;
    }


}
int main(){
    int n;

    cin>>n;

    if (esPrimo(n)){
        cout<<"es primo"<<endl;
    }
    else{
        cout<<"no es primo"<<endl;
    }

return 0;
}
