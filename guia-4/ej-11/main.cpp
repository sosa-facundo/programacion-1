#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
ingresa un cero, informar el m ximo de los negativos y el m¡nimo de los
positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
M ximo Negativo: -3.
M¡nimo Positivo: 2.*/
int main (){
    int maximoNegativo=0;
    int minimoPositivo=0;
    int numeros;

    cout<<"ingrese una lista de numeros y finalice la lista con un [0]: "<<endl;
    cin>>numeros;
    while(numeros!=0)
    {
        if (numeros<0)
        {
            if (maximoNegativo==0)
            {
                maximoNegativo=numeros;
            }
            else if(numeros>maximoNegativo)
            {
                maximoNegativo=numeros;
            }
        }
        if (numeros>0)
        {
            if (minimoPositivo==0)
            {
                minimoPositivo=numeros;
            }
            else if(numeros<minimoPositivo)
            {
                minimoPositivo=numeros;
            }
        }

        cin>>numeros;
    }

    cout<<" el maximo de los negativos es "<<maximoNegativo<<endl;
    cout<<" el minimo de los positivo es "<<minimoPositivo<<endl;
return 0;
}
