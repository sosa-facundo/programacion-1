#include <iostream>
using namespace std;
/**Hacer un programa para ingresar un N valor que indica la cantidad de n£meros
que componen una lista y luego solicitar se ingresen esos N n£meros. Se pide
informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
listar : Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
Se listar : Cantidad de Positivos: 0
*/
int main (){
    int n;
    int primerNumero;
    int contadorPositivos;
    cout<< "ingresar cantidad de numeros que desees ingresar, y luego sabras cuantos de ellos seran positivos."<<endl;
    cin>> n;
    cout<<"ingresar "<<n<< " numeros para saber cual es el mayor de los "<<n<< " numeros."<<endl;

    for(int i=1;i<=n;i++){
        cin>>primerNumero;
        if(primerNumero>0){
            contadorPositivos=contadorPositivos+1;
        }
    }
    cout<<endl<<"son "<< contadorPositivos<<" numeros positivos."<<endl;
return 0;
}
