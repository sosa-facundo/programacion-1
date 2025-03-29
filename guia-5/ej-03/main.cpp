#include <iostream>
using namespace std;
/**Se dispone de una lista de 10 grupos de n£meros y cada uno de los grupos
 estar  compuesto por 5 n£meros. Se pide determinar e informar:
 a) Para cada uno de los 10 grupos la cantidad de n£meros positivos, negativos
 y ceros que lo componen. Se informan 3 resultados para cada uno de los 10
 grupos.
 b) Para cada uno de los 10 grupos el £ltimo n£mero primo y en qu‚ orden
 apareci¢ en ese grupo, si en un grupo no hubiera n£meros primos informar
 con un cartel aclaratorio.
 c) Informar cu ntos n£meros impares hay en total entre los 10 grupos. Se
 informa un resultado al final de todo*/
int main(){

    int numeros;
    int cantidadPositivos=0;
    int cantidadNegativos=0;
    int cantidadCeros=0;
    int cuentaPrimo=0;
    int ultimoPrimo=0;
    int ordenDelPrimo=0;
    int cuentaImpares=0;
    for (int i=1; i<=10;i++)
    {
        cout<<"Ingresar los numeros del grupo Nø "<<i<<": "<<endl;
        for (int x=1; x<=5;x++)
        {
            cout<<"Ingresar el "<<x<<"ø numero del grupo"<<i<<": "<<endl;
            cin>>numeros;
            if (numeros%2!=0)
            {
                cuentaImpares=cuentaImpares+1;
            }
            for (int p=2;p<=numeros;p++)
            {
                if (numeros%p==0)
                {
                    cuentaPrimo=cuentaPrimo+1;
                }
            }
            if (cuentaPrimo==1)
            {
                ultimoPrimo=numeros;
                ordenDelPrimo=x;
            }
            cuentaPrimo=0;

            if(numeros>0)/// CUENTA POSITIVOS
            {
                cantidadPositivos=cantidadPositivos+1;
            }
            else if (numeros==0)
            {
                cantidadCeros=cantidadCeros+1;
            }///CUENTA CEROS
            else
            {
                cantidadNegativos=cantidadNegativos+1;
            }///CUENTA NEGATIVOS
        }
        ////////////////////////////////////////////////////////////
        if(ultimoPrimo==0 && ordenDelPrimo==0) /// HAY O NO HAY ULTIMO NuMERO PRIMO EN CADA GRUPO.
        {
            cout<<"No hay numeros primos"<<endl;
        }
        else
        {
            cout<<"El ultimo numero primo del grupo"<<i<<" es el: "<<ultimoPrimo<<" en la posicion: "<<ordenDelPrimo<<endl;
        }


        cout<<"En el grupo Nø "<<i<<": "<<endl;
        cout<<"Hay "<<cantidadPositivos<<" positivos"<<endl;
        cout<<"Hay "<<cantidadNegativos<<" negativos"<<endl;
        cout<<"Hay "<<cantidadCeros<<" ceros"<<endl;
        cantidadPositivos=0;
        cantidadNegativos=0;
        cantidadCeros=0;
        ultimoPrimo=0;
        ordenDelPrimo=0;
    }

    cout<<"Hay "<<cuentaImpares<<" numeros impares."<<endl;


return 0;
}
