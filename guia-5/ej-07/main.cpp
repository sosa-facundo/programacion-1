#include <iostream>
#include <cctype>
using namespace std;
/***
Una universidad registró las inscripciones a las materias de todas sus carreras
durante el año anterior. Para cada inscripción se ingresa:
- Legajo de alumno (número no correlativo de cinco cifras).
- Código de carrera (número del 1 al 20)
- Código de materia (número del 1 al 60)
- Modalidad (“P” si es presencial, “D” si es a distancia)
- Horario (“M” para mañana, “T” para tarde, “N” para noche)
El lote finaliza con número de legajo cero y los registros se encuentran
agrupados por carrera. A partir de dichos datos se solicita determinar e
informar:
a) La cantidad de inscripciones registradas para cada carrera.
b) La carrera con más inscripciones a la modalidad Distancia.
c) El porcentaje de inscripciones registradas a los distintos horarios teniendo
en cuenta el total, discriminado por carrera.
d) La carrera con menos inscripciones registradas.

*/
int main(){
    int legajoDelAlumno;
    int codigoDeCarrera;
    int codigoDeMateria;
    char modalidad;
    char horario;
    int codigoDeCarreraActual;
    int contadorInscripciones=0;
    int contadorModalidadDistancia=0;
    int codigoDeCarreraConMasModalidadDistancia=0;
    int elMayorDeModalidadADistancia=0;
    int contadorManana=0;
    int contadorTarde=0;
    int contadorNoche=0;
    float porcentajeManana;
    float porcentajeTarde;
    float porcentajeNoche;
    int carreraMenosInscriptos=0;
    int menorInscriptos=0;
    cout<<"ingrese el lagajo del alumno, precione [0] para terminar(número no correlativo de cinco cifras): "<<endl;
    cin>>legajoDelAlumno;

    while (legajoDelAlumno!=0)
    {
        do{
            cout<<"Ingrese un codigo de carrera[1-20]: "<<endl;
            cin>> codigoDeCarrera;
            if(codigoDeCarrera<1 || codigoDeCarrera>20){
                cout<< "❌ Código inválido. Debe estar entre 1 y 20. Intente de nuevo.\n";
            }
        }while(codigoDeCarrera<1 || codigoDeCarrera>20);

        codigoDeCarreraActual=codigoDeCarrera;
        contadorInscripciones=0;
        contadorModalidadDistancia=0;
        contadorManana=0;
        contadorTarde=0;
        contadorNoche=0;

        while (codigoDeCarrera==codigoDeCarreraActual || legajoDelAlumno!=0)
        {
            do{
                cout<<"Ingrese un codigo de materia[1-60]: "<<endl;
                cin>>codigoDeMateria;
                if(codigoDeMateria<1 || codigoDeMateria>60){
                    cout<< "❌ Código inválido. Debe estar entre 1 y 60. Intente de nuevo.\n";
                }
            }while(codigoDeMateria<1 || codigoDeMateria>60);


            do {
                cout << "Ingrese una modalidad [P Presencial - D Distancia]: ";
                cin >> modalidad;
                modalidad = toupper(modalidad); // Convierte a mayúscula por si ingresan p o d minúscula

                if (modalidad != 'P' && modalidad != 'D') {
                    cout << "❌ Modalidad inválida. Debe ser [P - D]. Intente de nuevo.\n";
                }

            } while (modalidad != 'P' && modalidad != 'D');

            /// b) Contar modalidad a distancia
            if (modalidad=='D')
            {
                contadorModalidadDistancia=contadorModalidadDistancia+1;
            }

            do{
                cout<<"Ingrese un horario [M Manana -T Tarde -N Noche]: "<<endl;
                cin>> horario;
                horario=toupper(horario);
                if(horario!='M' && horario!='T' && horario!='N'){
                    cout<< "❌ Código inválido. Debe ser [M-T-N]. Intente de nuevo.\n";
                }
            }while(horario!='M' && horario!='T' && horario!='N');


            ///contador Horario -M-T-N-
            if (horario=='M')
            {
                contadorManana=contadorManana+1;
            }
            if (horario=='T')
            {
                contadorTarde=contadorTarde+1;
            }
            if (horario=='N')
            {
                contadorNoche=contadorNoche+1;
            }
            /// a) Contar inscripciones totales
            contadorInscripciones=contadorInscripciones+1;

            cout<<"Ingrese un numero de Legajo, precione [0] para terminar(número no correlativo de cinco cifras): "<<endl;
            cin>>legajoDelAlumno;
            if (legajoDelAlumno!=0)
            {
                cout<< "Ingrese un codigo de carrera[1-20]: "<<endl;
                cin>>codigoDeCarrera;
            }

        }
        ///a) Cantidad de inscripciones x cada carrera.(mostrar)
        cout << "---------------------------------------------------------------------------------------" << endl;
        cout<<"La cantidad de inscripciones para la carrera "<<codigoDeCarreraActual<<"son de: "<<contadorInscripciones<<endl;
        ///b) Carrera con mas inscripciones a la modalidad Distancia.(calculo)
        if (elMayorDeModalidadADistancia==0)
        {
            codigoDeCarreraConMasModalidadDistancia=codigoDeCarreraActual;
            elMayorDeModalidadADistancia=contadorModalidadDistancia;
        }
        if(contadorModalidadDistancia>elMayorDeModalidadADistancia)
        {
            codigoDeCarreraConMasModalidadDistancia=codigoDeCarreraActual;
            elMayorDeModalidadADistancia=contadorModalidadDistancia;
        }
        ///c)Porcentajes de Horarios x carrera (calcular)
        porcentajeManana=((float) contadorManana*100)/contadorInscripciones;
        porcentajeTarde=((float) contadorTarde*100)/contadorInscripciones;
        porcentajeNoche=((float) contadorNoche*100)/contadorInscripciones;
        ///C)mostrar porcentajes x cada carrera(Mostrar)
        cout<<"El porcentaje del turno mañana, de la carrera, "<<codigoDeCarreraActual<<" es de: "<<porcentajeManana<<"%"<<endl;
        cout<<"El porcentaje del turno tarde, de la carrera, "<<codigoDeCarreraActual<<" es de: "<<porcentajeTarde <<"%"<<endl;
        cout<<"El porcentaje del turno noche, de la carrera, "<<codigoDeCarreraActual<<"es de: "<<porcentajeNoche <<"%"<<endl;
        if(carreraMenosInscriptos==0)
        {
            menorInscriptos=contadorInscripciones;
            carreraMenosInscriptos=codigoDeCarreraActual;
        }
        else if(contadorInscripciones<menorInscriptos)
        {
            menorInscriptos=contadorInscripciones;
            carreraMenosInscriptos=codigoDeCarreraActual;
        }
    }
    ///b)Carrera con mas modalidad distancia
    cout<<"La carrera con mas inscripciones a la modalidad Distancia: "<<codigoDeCarreraConMasModalidadDistancia<<"Con "<<elMayorDeModalidadADistancia<<endl;
    ///c)carrera con menos inscriptos(mostrar)
    cout<<"El codigo de carrera con menos inscriptos es: "<<carreraMenosInscriptos<<" con la cantidad de: "<<menorInscriptos<<" inscriptos."<<endl;



return 0;
}
