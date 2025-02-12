#include <iostream>
using namespace std;
/**Se define como divisores propios de un n£mero entero a aquellos que son sus
divisores excluyendo al n£mero en s¡ mismo.
Ejemplo A. Los divisores propios del 4 son: 1 y 2.
Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6.
Se dene a un n£mero como perfecto cuando la suma de todos sus divisores
propios coincide con el n£mero en s¡ mismo.
Ejemplo A: 6 es n£mero perfecto pues 1+2+3=6
Ejemplo B: 28 es n£mero perfecto pues 1+2+4+7+14=28
Ejemplo C: 12 no es n£mero perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un n£mero y luego informar con un cartel
aclaratorio si el mismo es un n£mero perfecto o no es n£mero perfecto*/
int main (){
    int numero;
    int acumulador=0;
    cout<<"Se define como divisores propios de un n£mero entero a aquellos que son sus"<<endl;
    cout<<"divisores excluyendo al n£mero en s¡ mismo."<<endl;
    cout<<"Ejemplo A. Los divisores propios del 4 son: 1 y 2."<<endl;
    cout<<"Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6."<<endl;
    cout<<"Se dene a un n£mero como perfecto cuando la suma de todos sus divisores"<<endl;
    cout<<"Ejemplo A: 6 es n£mero perfecto pues 1+2+3=6"<<endl;
    cout<<"Ejemplo B: 28 es n£mero perfecto pues 1+2+4+7+14=28"<<endl;
    cout<<"Ejemplo C: 12 no es n£mero perfecto pues 1+2+3+4+6=16"<<endl;
    cout<<"Hacer un programa para ingresar un n£mero y luego informar con un cartel"<<endl;
    cout<<"aclaratorio si el mismo es un n£mero perfecto o no es n£mero perfecto"<<endl;
    cout<<endl<<endl;
    cout<<"ingresa 1 numero te  informaremos si es perfecto o no entre los numeros divisores y el propio ingresado:"<<endl;
    cin>>numero;

    for(int i=1;i<numero;i++){
        if(numero%i==0){
            acumulador=acumulador+i;
            cout<<acumulador<<endl;
        }
    }
    if(numero==acumulador){
        cout<<"el numero es perfecto es "<<acumulador<<endl;
    }
    else{
        cout<<"el numero no es perfecto, y es "<<acumulador <<endl;
    }
    cout<<acumulador<<endl;








return 0;
}
