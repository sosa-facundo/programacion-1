#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar una lista de 10 n£meros, luego informar
cu ntos son positivos, cu ntos son negativos, y cu ntos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
*/
int main(){
    int numeros;
    int contadorNegativos=0;
    int contadorCero=0;
    int contadorPositivo=0;
    cout<<"ingrese 10 numeros y recibira por pantalla cuantos son negativos, positivos o cero..."<<endl;
    for(int i=1; i<=10; i++){
        cin>>numeros;
        if(numeros<0){
            contadorNegativos=contadorNegativos+1;
        }
        else if(numeros==0){
            contadorCero=contadorCero+1;
        }
        else if (numeros>0){
            contadorPositivo=contadorPositivo+1;
        }
    }
    cout<<endl<<"Numeros de negativos: "<<contadorNegativos<<endl;
    cout<<"Numeros de positivos: "<<contadorPositivo<<endl;
    cout<<"Numeros cero: "<<contadorCero<<endl;

return 0;
}
