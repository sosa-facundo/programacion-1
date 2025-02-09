#include <iostream>
using namespace std;
/**Hacer un programa para ingresar un n£mero entero y luego informar la cantidad
de divisores de ese n£mero.
Ejemplo A. Si se ingresa 6 se listar : 4 divisores.
Ejemplo B. Si se ingresa 9 se listar : 3 divisores.
Ejemplo C. Si se ingresa 11 se listar : 2 divisores.*/
int main(){
    int numero;
    int contador=0;

    cout<<"ingresar un n£mero entero y luego informar la cantidad de divisores de ese n£mero."<<endl;
    cin>>numero;
    for(int i=1;i<=numero;i++){
        if(numero%i==0){
            contador+=1;
        }
    }
    cout<<endl<< contador<<endl;

return 0;
}
