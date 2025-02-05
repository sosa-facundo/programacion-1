#include <iostream>
using namespace std;
/** Hacer un programa para ingresar una lista de 10 números enteros, luego
informar el máximo y la posición del máximo en la lista. En caso de “empates”
considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
máximo es un positivo.*/
int main(){
    int primerNumero;
    int numerosSiguientes;
    int numeroMaximo;
    int contadorPosicion=0;

    cout<<"Ingrese una lista de 10 numeros enteros.Luego se le informa el maximo y la posicion del maximo: "<<endl;
    cin>>primerNumero;

    for(int i=1; i<10;i++){
        cin>>numerosSiguientes;
        if(i==1){
            if(primerNumero>numerosSiguientes){
                numeroMaximo=primerNumero;
                contadorPosicion+=1;
            }
            else if(numerosSiguientes>primerNumero){
                numeroMaximo=numerosSiguientes;
                contadorPosicion+=2;
            }
        }
        if(numerosSiguientes>numeroMaximo){
            numeroMaximo=numerosSiguientes;
            contadorPosicion=i+1;
        }
    }

    cout<<endl<<"el numero maximo es "<<numeroMaximo;
    cout<<endl<<"su posicion es "<<contadorPosicion<<"°";


return 0;
}
