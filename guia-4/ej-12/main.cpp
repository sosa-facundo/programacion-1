#include <iostream>
using namespace std;
/**Dada una lista de n£meros que finaliza cuando se ingresa un cero, informar cual
es el primer y segundo n£mero impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se
informa 5 y -9*/
int main(){
    int numeros;
    int primerImpar=0;
    int segundoImpar=0;

    cout<<"Ingrese una lista de numeros: "<<endl;
    cin>>numeros;

    while(numeros!=0)
    {
        if(numeros%2!=0)
        {
            if(primerImpar==0)
            {
                primerImpar=numeros;
            }
            else if(segundoImpar==0)
            {
                segundoImpar=numeros;
            }
        }
    cin>>numeros;
    }
    cout<<" El primer impar es: "<<primerImpar <<endl;
    cout<<" El segundo impar es: "<<segundoImpar<<endl;
return 0;
}
