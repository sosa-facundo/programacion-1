#include <iostream>
using namespace std;
/** Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
ingresa un cero, luego informar cu ntos son positivos y cu ntos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar  Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7*/
int main(){
    int numero;
    int positivoCant=0;
    int negativoCant=0;

    do
    {
        cout<<"ingrese otro numero #: "<<endl;
        cin>>numero;

        if (numero>0)
        {
            positivoCant++;
        }
        if (numero<0)
        {
            negativoCant++;
        }
    } while (numero!=0);

    cout<<" La cantidad de positivos es: "<<positivoCant<<endl;
    cout<<" La cantidad de negativos es: "<<negativoCant<<endl;
return 0;
}
