#include <iostream>
using namespace std;
/**Se dispone de la informaci¢n de los ex menes rendidos por algunos
estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
- Legajo del estudiante (entero)
- C¢digo de materia (entero)
- Nota (float)
La finalizaci¢n de la carga de datos se indica con un legajo de estudiante mayor
a 30000. Calcular e informar:
- La nota promedio entre todos los estudiantes.
- El legajo del estudiante con menor nota.
- La cantidad de ex menes rendidos para la materia 10.
- El porcentaje de aprobados y no aprobados.
NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.*/
int main (){
    int legajo;
    int codigoDeMateria;
    float nota;
    float todasLasNotasJuntas=0;
    float promedioFinalDeNotas;
    int cuentaVueltasWhile=0;
    int menorNota;
    int legajoDelDeMenorNota;
    int cuentaExamenesMateria10=0;
    int aprobado=0;
    float porcentajeDeAprobados;
    cout<<"Ingresar numero de legajo del primer estudiante= "<<endl;
    cin>>legajo;


    while(legajo<=30000)
    {


        cout<< "Ingresar codigo de la materia= "<<endl;
        cin>>codigoDeMateria;
        cout<<"ingresar nota= "<<endl;
        cin>>nota;
        if (codigoDeMateria==10)
        {
            cuentaExamenesMateria10=cuentaExamenesMateria10+1;
        }
        if(cuentaVueltasWhile==0)
        {
            menorNota=nota;
            legajoDelDeMenorNota=legajo;
        }
        else if (nota<menorNota)
        {
            menorNota=nota;
            legajoDelDeMenorNota=legajo;
        }
        if(nota>=6)
        {
            aprobado=aprobado+1;
        }

        todasLasNotasJuntas=todasLasNotasJuntas+nota;
        cuentaVueltasWhile=cuentaVueltasWhile+1;
        cout<<"Ingresar numero de legajo del estudiante= "<<endl;
        cin>>legajo;
    }


    promedioFinalDeNotas=todasLasNotasJuntas/cuentaVueltasWhile;
    porcentajeDeAprobados=(aprobado*100)/(float)cuentaVueltasWhile;

    cout<<"Promedio final de notas totales= "<<promedioFinalDeNotas<<endl;
    cout<<"El legajo del de menor nota= "<<legajoDelDeMenorNota<<endl;
    cout<<"cantidad de examenes rendidos para la materia 10= "<<cuentaExamenesMateria10<<endl;
    cout<<"El porcentaje de aprobados es= "<<porcentajeDeAprobados<<"%"<<endl;
return 0;
}
