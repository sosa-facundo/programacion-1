#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el
m ximo y cu l el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado ser  14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado ser  14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado ser  -2 y -4
16 H*/
int main (){
    int numeros;
    int maximo=0;
    int segundoMaximo=0;

    cout<<"ingresar una lista de n£meros que finaliza cuando se ingresa un cero.."<<endl;
    cout<<"se le informara los 2 mayores valores ingresados."<<endl;
    cin>>numeros;

    while (numeros!=0)
    {
        if(maximo==0)
        {
            maximo=numeros;
        }
        else if(segundoMaximo==0)
        {
            if(numeros>maximo)
            {
                segundoMaximo=maximo;
                maximo=numeros;
            }
            else
            {
                segundoMaximo=numeros;
            }
        }
        if (numeros>maximo &&  numeros>segundoMaximo)
        {
            segundoMaximo=maximo;
            maximo=numeros;
        }
        else if (numeros<maximo && numeros>segundoMaximo)
        {
            segundoMaximo=numeros;
        }
        cin>>numeros;
    }

    cout<<" El  maximo es : "<<maximo<<endl;
    cout<<" El segundo maximo es :"<<segundoMaximo<<endl;

return 0;
}
