#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo y la posición d  el máximo en la lista.
En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.
*/
int main(){
    int maximo;
    int numeroEnLista=0;
    int numero;
    int contadorNumeros=0;

    cout<< "Ingresar un #: "<<endl;
    cin>>maximo;
    contadorNumeros=1;
    numeroEnLista=1;
    do
    {
        cout<<"Ingresar un # o [0] para finalizar: "<<endl;
        cin>>numero;
        contadorNumeros=contadorNumeros+1;

        if(numero>maximo)
        {
            maximo=numero;
            numeroEnLista=contadorNumeros;
        }
    }while (numero!=0);

    cout<< "El maximo es: "<<maximo<< " y la posicion en la lista es : "<<numeroEnLista<<endl;

return 0;
}
