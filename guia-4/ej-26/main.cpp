#include <iostream>
using namespace std;
/**Un n£mero Simon¡rico es un n£mero positivo divisible por 15 y a la vez divisible
por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000
n£meros Simon¡ricos. El usuario no debe ingresar nada.
*/
int main (){
    int numeros=1;


    while(numeros<=10000)
    {
        if(numeros%15==0)
        {
            if(numeros%3==0 && numeros%6!=0)
            {
                cout<<numeros<<"es simon¡rico"<<endl;
            }
        }
        numeros=numeros+1;
    }

return 0;
}
