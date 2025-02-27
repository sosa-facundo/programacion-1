#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
ingresa un cero, luego informar el m ximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar  M ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar  M ximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar  M ximo -5.
*/
int main(){
    int numero;
    int maximo;

    cout<<"ingrese un numero para agregar a su lista: "<<endl;
    cin>>maximo;

    do
    {
        cout<<"ingrese un numero para agregar a su lista precione[0] para finzalizar: "<<endl;
        cin>>numero;
        if(numero>maximo)
        {
            maximo=numero;
        }
    } while (numero!=0);

    cout<<"el maximo es: "<<maximo<<endl;

return 0;
}
