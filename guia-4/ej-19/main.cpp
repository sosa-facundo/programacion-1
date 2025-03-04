#include <iostream>
using namespace std;
/**Se define como divisores propios de un n£mero a aquellos que son sus
divisores excluyendo al n£mero en s¡ mismo.
Ejemplo A. Los divisores propios del 4 son: 1 y 2.
Ejemplo B. Los divisores propios del 12 son; 1, 2, 3, 4 y 6.
Se define a un n£mero como perfecto cuando la suma de todos sus divisores
propios coincide con el n£mero en s¡ mismo.
Ejemplo A: 6 es n£mero perfecto pues 1+2+3=6
Ejemplo B: 28 es n£mero perfecto pues 1+2+4+7+14=28
Ejemplo: 12 no es n£mero perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un n£mero y luego informar con un cartel
aclaratorio si el mismo es un n£mero perfecto o no es un n£mero perfecto.*/
int main (){
    int numeros;
    int divisor=1;
    int cuentaPerfectos=0;

    cout<<"Ingresar un n£mero y luego informar con un cartel aclaratorio"<<endl;
    cout<<" si el mismo es un n£mero perfecto o no es un n£mero perfecto."<<endl;
    cin>>numeros;

    while(numeros!=divisor)
    {
        if (numeros%divisor==0)
        {
            cuentaPerfectos=cuentaPerfectos+divisor;
        }


        divisor=divisor+1;
    }
    if(numeros==cuentaPerfectos)
    {
        cout<<" EL NUMERO ES PERFECTO. "<<endl;
    }
    else
    {
        cout<< " EL NUMERO NO ES PERFECTO. "<<endl;
    }


return 0;
}
