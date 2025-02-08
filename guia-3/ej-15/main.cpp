#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de 8 números y luego informar si
todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto ordenado”
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto ordenado”
Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No
Ordenado”
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.
*/
int main(){
    int numeros;
    int banderaNumAnt;
    int contador=0;
    cout<<"ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes."<<endl;

    for(int i=1; i<=8; i++){
        cin>>numeros;
        if(i==1){
            banderaNumAnt=numeros;
            contador=contador+1;
        }
        else if(numeros>=banderaNumAnt){
            banderaNumAnt=numeros;
            contador=contador+1;
        }
    }
    if(contador==8){
        cout<<"Conjunto Ordenado."<<endl;
    }
    else {
        cout<<"Conjunto Desordeado."<<endl;
    }


return 0;
}
