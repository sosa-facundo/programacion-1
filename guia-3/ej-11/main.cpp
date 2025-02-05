#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de 10 números, luego informar el
máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo
-42.
Observe que los tres ejemplos dejan en claro que la suposición de que el
máximo “seguramente” es un positivo y el mínimo “seguramente” es un
negativo, queda totalmente descartada.
*/
int main (){
    int numerosSiguentes;
    int primerNumero;
    int maximo;
    int minimo;

    cout<<"Ingrese una lista de 10 numeros y se listaran cual es el maximo y cual es el minimo: "<<endl;
    cin>>primerNumero;

    for(int i=1;i<10;i++){
        cin>>numerosSiguentes;
        if(i==1){
            if(primerNumero>numerosSiguentes){
                maximo=primerNumero;
                minimo=numerosSiguentes;
            }
            else if(numerosSiguentes>primerNumero){
                minimo=primerNumero;
                maximo=numerosSiguentes;
            }
        }
        if(numerosSiguentes>maximo){
            maximo=numerosSiguentes;
        }
        if(numerosSiguentes<minimo){
            minimo=numerosSiguentes;
        }
    }
    cout<<endl<<"El numero maximo es: "<<maximo<<endl;
    cout<<"El numero minimo es: "<<minimo;
return 0;
}
