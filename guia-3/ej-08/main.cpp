#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar una lista de 10 n£meros, luego informar el
porcentaje de positivos, negativos, y ceros.
*/
int main(){
    int numeros;
    int contadorPositivos=0;
    int contadorCero=0;
    int contadorNegativo=0;
    int porcentajePositivo;
    int porcentajeCero;
    int porcentajeNegativo;
    cout<<"ingresar una lista de 10 numeros y te diremos el porcentaje de los numeros positivos negativos y cero: "<<endl;
    for(int i=1;i<=10;i+=1){
        cin>>numeros;
        if(numeros>0){
            contadorPositivos=contadorPositivos+1;
        }
        else if(numeros==0){
            contadorCero=contadorCero+1;
        }
        else if(numeros<0){
            contadorNegativo=contadorNegativo+1;
        }
    }
    porcentajePositivo=(contadorPositivos*100)/10;
    porcentajeCero=(contadorCero*100)/10;
    porcentajeNegativo=(contadorNegativo*100)/10;

    cout<<endl<<"Porcentaje de numeros positivos: "<<porcentajePositivo<<"%"<<endl;
    cout<< "Porcentale de numeros cero: "<<porcentajeCero<<"%"<<endl;
    cout<< "Porcentaje de numeros negativos: "<<porcentajeNegativo<<"%"<<endl;


return 0;
}
