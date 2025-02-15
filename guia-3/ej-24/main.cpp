#include <iostream>
using namespace std;
/**Hacer un programa que permita ingresar el sueldo de 10 empleados y
determine:
- El sueldo m ximo.
- El sueldo m¡nimo.
- El sueldo promedio.
- Cantidad de sueldos mayores a $50000.
*/

int main(){
    int sueldos;
    int sueldoMaximo;
    int sueldoMinimo;
    int sueldosTodos=0;
    float sueldoPromedio=0;
    int sueldosMayores50000=0;

    cout<<"ingresar el sueldo de 10 empleados: "<<endl;

    for(int i=1; i<=10; i++){
        cin>>sueldos;
        if(i==1){
            sueldoMaximo=sueldos;
            sueldoMinimo=sueldos;
        }
        else if(sueldos>sueldoMaximo){
            sueldoMaximo=sueldos;
        }
        else if(sueldos<sueldoMinimo){
            sueldoMinimo=sueldos;
        }
        sueldosTodos=sueldos+sueldosTodos;
        if(sueldos>50000){
            sueldosMayores50000+=1;
        }
    }
    sueldoPromedio=(float)sueldosTodos/10;


    cout<< "el sueldo maximo es: "<<sueldoMaximo<<endl;
    cout<< "el sueldo minimo es: "<<sueldoMinimo<<endl;
    cout<< "el sueldo promedio es: "<<sueldoPromedio<<endl;
    cout<< "los sueldos mayores a 50.000 son: "<<sueldosMayores50000<<endl;

return 0;
}
