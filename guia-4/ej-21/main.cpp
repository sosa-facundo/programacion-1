#include <iostream>
using namespace std;
/**Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor
a 10. Calcular e informar:
- La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7*/

int main (){

    int numeros;
    int segundoNumero;
    int mayor;
    int menor;
    int diferencia;
    int cantidadNumeros;
    cout<<"ingresar una lista de numeros hasta que haya una diferencia de 10 numeros."<<endl;
    cin>>numeros;
    cin>>segundoNumero;
    if(numeros>segundoNumero)
    {
        mayor=numeros;
        menor=segundoNumero;
    }
    else
    {
        mayor=segundoNumero;
        menor=numeros;
    }
    diferencia=mayor-menor;
    cantidadNumeros=2;
    while(diferencia<10)
    {
        cin>>numeros;
        if(numeros<menor)
        {
            menor=numeros;
        }
        if (numeros>mayor)
        {
            mayor=numeros;
        }
        diferencia=mayor-menor;
        cantidadNumeros=cantidadNumeros+1;
    }

    cout<<"la cantidad de numeros que componen la lista son : "<<cantidadNumeros<<endl;



return 0;
}
