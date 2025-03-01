#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listará Máximo -5 Mínimo -42.
Observe que los ejemplos B y C dejan en claro que la suposición de que el
máximo “seguramente” es un positivo y el mínimo “seguramente” es un
negativo, es incorrecta.*/
int main(){
    int numeros;
    int maximo=0;
    int minimo=0;

    cout<<"ingresar una lista de numeros preciona [0] para finalizar: "<<endl;
    cin>>numeros;

    while (numeros!=0)
    {
        if (maximo==0)
        {
            maximo=numeros;
        }
        else if (numeros>maximo)
        {
            maximo=numeros;
        }
        if ( minimo==0)
        {
            minimo=numeros;
        }
        else if(numeros<minimo)
        {
            minimo=numeros;
        }
        cin>>numeros;
    }

cout<<"EL maximo es: "<<maximo<<endl;
cout<<"EL minimo es: "<<minimo<<endl;
return 0;
}
