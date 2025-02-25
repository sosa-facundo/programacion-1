#include <iostream>
using namespace std;
/**Hacer un programa para ingresar 10 n£meros, luego informar los 2 mayores
valores ingresados, aclarando cual es el m ximo y cu l es el segundo m ximo
descartando los n£meros repetidos.
Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado ser  78 y 55.
Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado ser  -3 y -8.
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado ser  20 y 14.
En el ejemplo C el valor 20 aparece dos veces, pero s¢lo se considera una vez.*/
int main (){
    int numeros;
    int mayorMayor;
    int segundoMayor;

    cout<< "Ingresar 10 numeros= "<<endl;
    for (int i=1 ;i<=10 ; i++)
    {
        cin>>numeros;
        if(i==1)
        {
            mayorMayor=numeros;
        }
        if(i==2)
        {
            if(numeros>mayorMayor)
            {
                segundoMayor=mayorMayor;
                mayorMayor=numeros;
            }
            else
            {
                segundoMayor=numeros;
            }
        }
        if (numeros>segundoMayor && numeros<mayorMayor)
        {
            segundoMayor=numeros;
        }
        if (numeros>segundoMayor && numeros>mayorMayor)
        {
            segundoMayor=mayorMayor;
            mayorMayor=numeros;
        }
    }
    cout<<" El mayor es= "<<mayorMayor<<endl;
    cout<<" El segundo mayor es = "<<segundoMayor<<endl;

return 0;
}
