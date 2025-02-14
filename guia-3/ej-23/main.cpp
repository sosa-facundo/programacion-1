#include <iostream>
using namespace std;
/**Dada una lista de 10 n£meros enteros informar la cantidad de duplas de
n£meros impares que se hayan ingresado consecutivamente.
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.
En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informar  que hay
4 duplas de n£meros impares ingresados consecutivamente.
Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informar  que
hay 5 duplas de n£meros impares ingresados consecutivamente.
Aclaraci¢n: S¢lo hay que listar la cantidad de duplas de impares. No hay que
mostrar c¢mo est n compuestas las duplas de n£meros.*/
int main(){
    int numeros;
    int numeroAnterior;
    int duplasImpar=0;
    cout<<"Ingresar una lista de 10 n£meros enteros informar la cantidad de duplas de"<<endl;
    cout<<"n£meros impares que se hayan ingresado consecutivamente."<<endl;

    for(int i=1; i<=10;i++){
        cin>>numeros;
        if(i==1){
            numeroAnterior=numeros;
        }
        else if(numeroAnterior%2!=0 && numeros%2!=0){
            duplasImpar+=1;
        }
        numeroAnterior=numeros;
    }
    cout<<"la cantidad de duplas son: "<<duplasImpar<<endl;


return 0;
}
