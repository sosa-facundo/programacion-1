#include <iostream>
using namespace std;
/**Dada una lista de n£meros que finaliza cuando se ingresa un cero, informar cual
es el primer y £ltimo n£mero impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se
informa -5 y 5.*/
int main(){
    int primerImpar=0;
    int ultimoImpar=0;
    int numeros;


    cout<< " Ingrese una lista de numeros.."<<endl<<"Se le informara por pantalla el primero y ultimo impar, [0] para finalizar: "<<endl;
    cin>>numeros;

    while (numeros!=0)
    {
        if(numeros%2!=0)
        {
            if (primerImpar==0)
            {
                primerImpar=numeros;
            }
            ultimoImpar=numeros;
        }
        cin>>numeros;
    }
    cout<<"El ultimo impar es : "<<primerImpar<<endl;
    cout<<"El ultimo impar es : "<<ultimoImpar<<endl;
return 0;
}
