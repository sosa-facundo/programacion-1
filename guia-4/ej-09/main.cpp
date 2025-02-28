#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
ingresa un cero, luego informar el m ximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listar  M ximo 36.
Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listar  M ximo 4.
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listar  M ximo -8.*/
int main(){

    int numero;
    int esMaximoPar=1;

    cout<<"Ingresa un numero y al final te listaremos el maximo par: "<<endl;
    cin>>numero;

    while (numero!=0)
    {
        if (numero%2==0)
        {
            if (esMaximoPar== 1)
            {
                esMaximoPar=numero;
            }
            else
            {
                if (numero>esMaximoPar)
                    esMaximoPar=numero;
            }
        }
        cout<<"Ingresa un numero y al final te listaremos el maximo par: "<<endl;
        cin>>numero;
    }
    if(esMaximoPar !=1)
    {
    cout<<"el maximo par es= "<<esMaximoPar<<endl;
    }
    else
    {
        cout<<"no se ingresaron numeros pares"<<endl;
    }
return 0;
}
