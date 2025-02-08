#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar una lista de 10 n£meros e informar el m ximo
de los negativos y el m¡nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M ximo Negativo -3. M¡nimo Positivo 2.

*/
int main(){
    int maximoNegativo=0;
    int minimoPositivo=0;
    int numeros;

    cout<<"ingresar una lista de 10 numeros y recibiras el maximo de los negativos y el minimo de los positivos: "<<endl;

    for(int i=1;i<=10; i++){
        cin>>numeros;
        if(numeros>0){
            if(minimoPositivo==0){
                minimoPositivo=numeros;
            }
            else if(numeros<minimoPositivo){
                minimoPositivo=numeros;
            }
        }
        if(numeros<0){
            if(maximoNegativo==0){
                maximoNegativo=numeros;
            }
            else if (numeros>maximoNegativo){
                maximoNegativo=numeros;
            }
        }
    }

    cout<<"el menor de los positivos es: "<< minimoPositivo<<endl;
    cout<<"el mayor de los negativos es "<< maximoNegativo<<endl;

return 0;
}
