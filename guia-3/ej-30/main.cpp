#include <iostream>
using namespace std;
/**Dada una lista de 7 números enteros todos distintos entre sí determinar e
informar con un cartel aclaratorio si los números primos ingresados en la
misma están ordenados de menor a mayor. Los números primos pueden no ser
consecutivos, pero sí estar ordenados.
Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que
los números primos están ordenados: 5, 7, 13, 19.
Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya
que los números primos no están ordenados: 3, 5, 11, 7.*/
int main(){
    int numero;
    int contadorPrimo=0;
    int primerPrimo=0;
    int segundoPrimo=0;
    int tercerPrimo=0;
    int cuartoPrimo=0;

    for (int i=1 ; i<=7 ; i++)
    {
        cout<<"Ingresar una lista de 7 numeros: "<<endl;
        cin>>numero;

        for (int i=2 ; i<=numero ; i++)
        {
            if (numero%i == 0)
            {
                contadorPrimo+=1;
            }
        }
        if(contadorPrimo==1)
        {
            if (primerPrimo==0)
            {
                primerPrimo=numero;
            }
            else if (segundoPrimo==0)
            {
                segundoPrimo=numero;
            }
            else if (tercerPrimo==0)
            {
                tercerPrimo=numero;
            }
            else if (cuartoPrimo==0)
            {
                cuartoPrimo=numero;
            }
        }
        contadorPrimo=0;

    }
    if(primerPrimo<segundoPrimo && segundoPrimo< tercerPrimo && tercerPrimo <cuartoPrimo || primerPrimo < segundoPrimo && segundoPrimo< tercerPrimo)
    {
        cout<<" Los numeros primos estan ordenados de manera creciente "<<endl;
    }
    else
    {
        cout<<" Los numeros primos no estan o estan desordenados"<<endl;
    }

return 0;
}
