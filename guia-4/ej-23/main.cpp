#include <iostream>
using namespace std;
/**Dada una lista de n£meros que finaliza cuando se ingresa un n£mero divisible
por 7, informar cual es el ante£ltimo y £ltimo n£mero impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
Nota: Contemplar la posibilidad que podr¡a no haber n£meros impares en la
lista.*/
int main (){
    int numeros;
    int anteUltimoImpar=0;
    int ultimoImpar=0;
    int cuentaImpares=0;
    cout<<"Ingresar una lista de numeros: "<<endl;
    cin>>numeros;

    while(numeros%7!=0)
        {
            if (numeros%2!=0 && cuentaImpares==0)
            {
                   ultimoImpar=numeros;
                   cuentaImpares=cuentaImpares+1;
            }
            else if (numeros%2!=0 && cuentaImpares==1)
            {
                   anteUltimoImpar=ultimoImpar;
                   ultimoImpar=numeros;
                   cuentaImpares=cuentaImpares+1;
            }
            else if (numeros%2!=0)
            {
                   anteUltimoImpar=ultimoImpar;
                   ultimoImpar=numeros;
                   cuentaImpares=cuentaImpares+1;
            }
            cin>>numeros;
        }

    cout<<"cuenta impares "<<cuentaImpares<<endl;
    if(anteUltimoImpar!=0)
    {
        cout<<"EL ANTEULTIMO NUMERO IMPAR ES= "<<anteUltimoImpar<<endl;
    }
    else
    {
        cout<<"NO HAY ANTE ULTIMO NUMERO IMPAR"<<endl;
    }
        if(ultimoImpar!=0)
    {
        cout<<"EL ULTIMO NUMERO IMPAR ES= "<<ultimoImpar<<endl;
    }
    else
    {
        cout<<"NO HAY ULTIMO NUMERO IMPAR"<<endl;
    }
return 0;
}
