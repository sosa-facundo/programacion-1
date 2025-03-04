#include <iostream>
using namespace std;
/**Dada una lista de números que finaliza cuando se ingresa un cero, informar el
primer número par ingresado y su ubicación en la lista y el último de los
números primos y su ubicación en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2.
Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7.
Último primo: 13 ubicación 5.
*/
int main(){
    int numeros;
    int primerPar=0;
    int cuentaVueltas=0;

    int posicionPrimerPar;
    int cuentaPrimo=0;
    int ultimoPrimo;
    int ubicacionPrimo;
    cout<<" Ingresar una lista de numeros. "<<endl;
    cout<<"se le informara el primer numero par y su ubicacion."<<endl;
    cout<<"SE le informara el ultimo de los numeros primos y su ubicacion en la lista."<<endl;
    cin>>numeros;
    while (numeros!=0)///mientrasa sea distinto a CERO.//
    {
        cuentaVueltas=cuentaVueltas+1;
        if (primerPar==0)
        {
            if(numeros%2==0 && numeros!=0)
            {
                primerPar=numeros;
                posicionPrimerPar=cuentaVueltas;
            }
        }
        for (int i=2; i<=numeros;i++)
        {
            if(numeros%i==0)
            {
                cuentaPrimo=cuentaPrimo+1;
            }
        }
        if (cuentaPrimo==1)
        {
            ultimoPrimo=numeros;
            ubicacionPrimo=cuentaVueltas;
        }
        cuentaPrimo=0;
        cin>>numeros;
    }

    cout<<" El primer par es " <<primerPar<<" y su ubicacion es "<<posicionPrimerPar<<endl;
    cout<<" El ultimo primo es "<<ultimoPrimo<<" y su ubicacion es "<<ubicacionPrimo<<endl;
return 0;
}
