#include <iostream>
using namespace std;
/**Se ingresa una lista de 10 números enteros y se pide determinar si la lista está
formada por todos números alternados entre pares e impares o impares y
pares.
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”.*/
int main (){
    int numero;
    int numeroAnterior;
    int cuentaAlternados=0;

    cout<<" ingresar 10 numeros : "<<endl;
    for (int i=1 ; i<=10 ; i++)
    {
        cin>>numero;
        if(i==1)
        {
            numeroAnterior=numero;
        }
        if(numeroAnterior%2==0 && numero%2!=0 || numeroAnterior%2!=0 && numero%2==0)
        {
            cuentaAlternados+=1;
        }
        numeroAnterior=numero;
    }

    if (cuentaAlternados==9)
    {
        cout<<" Son alternados."<<endl;
    }
    else
    {
        cout<<" No son alternados."<<endl;
    }
     cout<< cuentaAlternados;
return 0;
}
