#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
ingresan dos n£meros consecutivos iguales, y luego informar el m ximo.
Cuando se ingresa el n£mero repetido el mismo debe ser descartado.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listar  M ximo 35.
En este caso, el segundo n£mero 22 no se analiza, solo sirve para finalizar el
ingreso.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listar  M ximo 55.
En este caso, el segundo n£mero 33 no se analiza, solo sirve para finalizar el
ingreso.
Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5, 88, 88. Se listar  M ximo 88.
En este caso, el segundo n£mero 88 no se analiza, solo sirve para finalizar el
ingreso.*/

int main (){
    int numeros;
    int primerVuelta=0;
    int maximo=0;
    int numeroAnterior;
    cout<< " ingresar una lista de n£meros que finaliza cuando se ingresan dos n£meros consecutivos iguales."<<endl;
    cout<<" Luego se informara el maximo. "<<endl;
    cin>>numeros;
    while(numeros!=numeroAnterior)
    {
        if (primerVuelta==0)
        {
            primerVuelta=primerVuelta+1;
            maximo=numeros;
        }
        if(numeros>maximo)
        {
            maximo=numeros;
        }
        numeroAnterior=numeros;
        cin>>numeros;
    }
    cout<<"el maximo es: "<< maximo<<endl;
return 0;
}
