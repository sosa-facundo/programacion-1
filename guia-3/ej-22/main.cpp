#include <iostream>
using namespace std;
/**Dada una lista de 7 numeros enteros informar el primer numero par ingresado y
su ubicacion en la lista y el ultimo de los numeros primos y su ubicacion en la
lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer numero par: 4 ubicacion 2. ultimo primo: 13 ubicacion 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer numero par: 6 ubicacion 7. ultimo primo: 13 ubicacion 5.*/
int main(){
    int numeros;
    int primerPar=1;
    int lugarEnListaPrimerPar;
    int divisorPrimo=0;
    int ultimoNumeroPrimo;
    int lugarEnListaUltimoNumeroPrimo;

    cout<<"ingresar una lista de 7 numeros y sabras cual es el primer numero par ingresado con su ubicacion en la lista"<<endl;
    cout<<" y tambien el ultimo de los numeros primos y su ubicacion en la lista: "<<endl;

    for(int i=1;i<=7;i++){
        cin>>numeros;
        if(numeros%2==0){
            if(primerPar==1){
                primerPar=numeros;
                lugarEnListaPrimerPar=i;
            }
        }
        divisorPrimo=0;
        for(int x=1;x<=numeros;x++){
            if(numeros%x==0){
                divisorPrimo++;
            }
            if(divisorPrimo==2){
                ultimoNumeroPrimo=numeros;
                lugarEnListaUltimoNumeroPrimo=i;
            }
        }
    }
    cout<<"El primer numero par es el: "<<primerPar<<" y su lugar en la lista es: "<<lugarEnListaPrimerPar<<endl;
    cout<<"El ultimo numero primo es el: "<<ultimoNumeroPrimo<<" y su lugar en la lista es: "<<lugarEnListaUltimoNumeroPrimo<<endl;

return 0;
}
