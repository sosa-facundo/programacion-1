#include <iostream>
using namespace std;
/**Hacer un programa para ingresar 5 n£meros, luego informar los 2 mayores
valores ingresados, aclarando cual es el m ximo y cu l el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado ser  14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado ser  14 y 14.
Ejemplo C: -4, -8, -12, -20, -10 el resultado ser  -4 y -8
Ejemplo D: 100, 20, 5, -15, 70, el resultado ser  100 y 70.
Ejemplo E: -100, -20, -5, 15, -70, el resultado ser  15 y -5.
Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en
particular el Ejemplo D, en el cual el m ximo de la lista aparece en el primer lugar y
que si no se tiene precauci¢n puede llevar a resultados como 100 como m ximo y
100 como segundo m ximo. ­ESO ES INCORRECTO! El resultado debe ser 100 y 70.
*/
int main(){
    int numeros;
    int mayor;
    int segundoMayor;

    cout<<"ingresar 5 n£meros, luego informar los 2 mayores valores ingresados, aclarando cual es el m ximo y cu l el que le sigue."<<endl;
    for(int i=1;i<=5;i++){
        cin>>numeros;
        if(i==1){
            mayor=numeros;
        }
        else if(i==2){
            if(mayor>numeros){
                mayor=mayor;
                segundoMayor=numeros;
            }
            else{
                segundoMayor=mayor;
                mayor=numeros;
            }
        }
        if(numeros>mayor && numeros>segundoMayor){
            segundoMayor=mayor;
            mayor=numeros;
        }
        else if(numeros<mayor&&numeros>segundoMayor){
            segundoMayor=numeros;
        }
    }
    cout<<endl<<"el segundo mayor es: "<<segundoMayor<<endl;
    cout<<"el mayor es: "<<mayor<<endl;

return 0;
}
