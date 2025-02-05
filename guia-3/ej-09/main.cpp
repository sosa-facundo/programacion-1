#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar una lista de 10 n£meros, luego informar el
m ximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar  M ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listar  M ximo 55.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listar  M ximo -6
El tercer ejemplo demuestra que NO SIEMPRE en una lista de n£meros el
m ximo es un positivo.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.
*/
int main(){
    int numerosSiguientes;
    int numeroPrimero;
    int numeroMayor;
    cout<<"ingrese una lista de 10 numeros, luego le informaremos cual es el mayor: "<<endl;
    cin>>numeroPrimero;
    for(int i=1;i<10;i++){
        cin>>numerosSiguientes;
        if(i==1){
            if(numeroPrimero>=numerosSiguientes){
                numeroMayor=numeroPrimero;
            }
            else{
                numeroMayor=numerosSiguientes;
            }
        }
        if(numerosSiguientes>=numeroMayor){
            numeroMayor=numerosSiguientes;
        }
    }

    cout<<"el numero mayor es"<<numeroMayor<<endl;


return 0;
}
