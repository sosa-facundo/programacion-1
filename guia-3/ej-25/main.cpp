#include <iostream>
using namespace std;
/**Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y
determine:
- El legajo del empleado con mayor sueldo*/
int main(){
    int legajo;
    int sueldo;
    int mejorSueldo;
    int legajoDelMejorSueldo;


    for(int i=1;i<=10; i++){
        cout<<endl<<"ingresar el legajo del "<<i<<"ø empleado"<<endl;
        cin>>legajo;
        cout<<"ingresar el sueldo del "<<i<<"ø empleado"<<endl;
        cin>>sueldo;

        if (i==1){
            mejorSueldo=sueldo;
            legajoDelMejorSueldo=legajo;
        }
        else if(sueldo>mejorSueldo){
            mejorSueldo=sueldo;
            legajoDelMejorSueldo=legajo;
        }

    }
    cout<<endl<<"El legajo del mayor sueldo es: "<<legajoDelMejorSueldo<<endl;

return 0;
}
