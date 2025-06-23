#include <iostream>
using namespace std;
/**
Hacer una funci¢n llamada CalcularMaximo que determine el m ximo entre
dos n£meros. La funci¢n debe recibir dos n£meros enteros por valor y devolver
el valor m s grande. Si los n£meros son iguales debe devolver cualquiera de
los dos. La funci¢n no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos n£meros y, utilizando CalcularMaximo,
emita luego el n£mero mayor de ambos.*/
int calcularMaximo(int n,int m){
    if(n>m){
       return n;
    }
    else{
        return m;
    }
}
int main(){
    int n;
    int m;
    int maximo;
    cout<<"ingrese 2 numeros"<<endl;
    cin>>n;
    cin>>m;

    maximo=calcularMaximo(n,m);
    cout<<"el maximo es "<<maximo<<endl;


return 0;
}
