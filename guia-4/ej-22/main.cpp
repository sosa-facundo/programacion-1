#include <iostream>
using namespace std;
/**Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
- La cantidad de ternas de números negativos ingresados de manera
consecutiva.
Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2*/
int main (){
    int numero;
    int cuentaPares=0;
    int cuentaTerna=0;
    int cantidadDeTernasNegativas=0;

    cout<<"Igresar una lista de numeros:"<<endl;
    cin>>numero;
    if(numero%2==0 && numero!=0)
    {
        cuentaPares=cuentaPares+1;
    }
    if(numero<0)
    {
        cuentaTerna=cuentaTerna+1;
    }
    while (cuentaPares<5)
    {
        cin>>numero;
        if(numero%2==0 && numero!=0)
        {
            cuentaPares=cuentaPares+1;
        }
        if(numero<0)
        {
            cuentaTerna=cuentaTerna+1;
        }
        else
        {
            cuentaTerna=0;
        }
        if (cuentaTerna==3)
        {
            cantidadDeTernasNegativas=cantidadDeTernasNegativas+1;
            cuentaTerna=0;
        }
    }
    cout<<" La cantidad de ternas de numeros negativos es= "<<cantidadDeTernasNegativas<<endl;
return 0;
}
