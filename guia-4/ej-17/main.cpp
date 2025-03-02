#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
ingresan dos n£meros positivos consecutivos, y luego informar el m ximo.
Cuando se ingresa el segundo n£mero positivo consecutivo el mismo debe ser
descartado.
Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listar  M ximo 20.
En este caso, el segundo n£mero positivo consecutivo, el 10, no se analiza, s¢lo
sirve para finalizar el ingreso.
Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listar  M ximo 55.
En este caso, el segundo n£mero positivo consecutivo, el 120, no se analiza,
s¢lo sirve para finalizar el ingreso.*/
int main() {
    int numeros;
    int maximo;
    int cuentaVuelta=0;
    int numeroAnterior;
    cout<<" ingresar una lista de numeros, finaliza la lista al ingresar dos numeros positivos  consecutivos."<<endl;
    cout<<" Luego informar el maximo: "<<endl;
    cin>>numeroAnterior;
    cin>>numeros;

    while (numeros<0 || numeroAnterior<0)
    {
        if (cuentaVuelta==0)
        {
            if (numeroAnterior>numeros)
            {
                maximo=numeroAnterior;
            }
            else
            {
                maximo=numeros;
            }
        }
        numeroAnterior=numeros;
        cin>>numeros;
    }
    cout<<" EL numero maximo es: " <<maximo<<endl;

return 0;
}
