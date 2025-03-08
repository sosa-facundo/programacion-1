#include <iostream>
using namespace std;
/**Una Universidad dispone de diez aulas para acomodar a una cantidad de
asistentes a una charla. Cada aula tiene una capacidad total de 60 personas. Se
necesita un programa que solicite la cantidad de asistentes a la charla y
determine la cantidad total de aulas necesarias para acomodarlos a todos.
Por ejemplo:
Si los asistentes son 120 se necesitarán 2 aulas.
Si los asistentes son 123 se necesitarán 3 aulas.
Si los asistentes son 40 se necesitará 1 aula.
DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo*/
int main (){
    int asistentes;

    cout<<"ingresar cantidad de asistentes a la charla="<<endl;
    cin>>asistentes;

    if(asistentes<=60)
    {
        cout<<"Se necesita 1 aula"<<endl;
    }
    else if(asistentes<=120)
    {
        cout<<"Se necesita 2 aulas"<<endl;
    }
    else if(asistentes<=180)
    {
        cout<<"Se necesita 3 aulas"<<endl;
    }
    else if(asistentes<=240)
    {
        cout<<"Se necesita 4 aulas"<<endl;
    }
    else if(asistentes<=300)
    {
        cout<<"Se necesita 5 aulas"<<endl;
    }
    else if(asistentes<=360)
    {
        cout<<"Se necesita 6 aulas"<<endl;
    }
    else if(asistentes<=420)
    {
        cout<<"Se necesita 7 aulas"<<endl;
    }
    else if(asistentes<=480)
    {
        cout<<"Se necesita 8 aulas"<<endl;
    }
    else if(asistentes<=540)
    {
        cout<<"Se necesita 9 aulas"<<endl;
    }
    else if(asistentes<=600)
    {
        cout<<"Se necesita 10 aulas"<<endl;
    }
    else if(asistentes>600)
    {
        cout<<"No entran en las aulas"<<endl;
    }
return 0;
}
