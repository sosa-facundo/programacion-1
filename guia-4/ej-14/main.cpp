#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar si todos están ordenados en forma creciente. En caso
de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto
Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No
Ordenado”*/
int main (){
    int numeros;
    int numeroAnterior=0;
    int contadorDeVueltas=0;
    int contadorDeNumerosOrdenados=0;

    cout<< " Ingresar una lista de numeros y sele informara si todos están ordenados en forma creciente."<<endl;
    cin>>numeros;

    while(numeros!=0){

        if(numeroAnterior==0)
        {
            contadorDeNumerosOrdenados=contadorDeNumerosOrdenados+1;
        }
        else if (numeroAnterior<numeros)
        {
            contadorDeNumerosOrdenados=contadorDeNumerosOrdenados+1;

        }
        numeroAnterior=numeros;
        contadorDeVueltas=contadorDeVueltas+1;
        cin>>numeros;
    }
    if (contadorDeNumerosOrdenados==contadorDeVueltas)
    {
        cout<< "Es un conjunto ordenado."<<endl;
    }
    else{
        cout<< "Es un conjunto desordenado"<<endl;
    }
return 0;
}
