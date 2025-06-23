#include <iostream>
using namespace std;
/***** El festival de m£sica Larapalooza dispone de los registros de los 3 d¡as que
corresponden al festival del a¤o 2024. Cada uno de los d¡as se presentar n 10
artistas. Por cada uno de ellos se registra la siguiente informaci¢n:
- D¡a
- N£mero de artista
- Cantidad de integrantes
- Minutos de show
La informaci¢n se encuentra agrupada por d¡a. Se pide calcular e informar:
A) El n£mero de d¡a que mayor cantidad de minutos de show haya
registrado en total. Informar tambi‚n los minutos de dicho d¡a.
B) Por cada d¡a, el promedio de minutos de show por artista.
C) El n£mero de artista con mayor cantidad de integrantes. Informar
tambi‚n la cantidad de integrantes y qu‚ d¡a del festival particip¢. Si hay
m s de un artista que cumpla esta condici¢n mostrar el primero de
ellos.*/

int main(){
    int dia;
    int numeroDeArtista;
    int cantidadDeIntegrantes;
    int minutosDeShow;

    int minutosXDia=0;
    int minutosXDiaActual=0;
    int diaMayorMinutos;

    float promedioMinutosXDia;
    int mayorCantidadIntegrantes=-1;
    int diaConMayorIntegrantes;
    int numeroDeArtistaConMayorIntegrantes;

    for ( dia=1;dia<=3;dia++)
    {
        minutosXDia=0;
        for(numeroDeArtista=1;numeroDeArtista<=10;numeroDeArtista++)
        {
            cout<<"Ingrese la cantidad de integrantes de artistas, del dia "<<dia<<", para el artista "<<numeroDeArtista<< ":"<<endl;
            cin>>cantidadDeIntegrantes;
            cout<<"Ingrese la cantidad de minutos: "<<endl;
            cin>>minutosDeShow;
            minutosXDia=minutosXDia+minutosDeShow;


            if(cantidadDeIntegrantes>mayorCantidadIntegrantes)
            {
                mayorCantidadIntegrantes=cantidadDeIntegrantes;
                diaConMayorIntegrantes=dia;
                numeroDeArtistaConMayorIntegrantes=numeroDeArtista;
            }
        }
        if(minutosXDia>minutosXDiaActual)
        {
            minutosXDiaActual=minutosXDia;
            diaMayorMinutos=dia;
        }
        promedioMinutosXDia=(float)minutosXDia/10;
        cout<<"El promedio de minutos de todos los artistas en el dia "<<dia<<" es de: "<<promedioMinutosXDia<<endl;

    }
    cout<<"El dia con mayor cantidad de minutos es: "<<diaMayorMinutos<<" con "<<minutosXDiaActual<<" minutos."<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"El numero de artista con mayor cantidad de integrantes es: "<<numeroDeArtistaConMayorIntegrantes<<endl;
    cout<<"La cantidad de integrantes del artista es: "<<mayorCantidadIntegrantes<<endl;
    cout<<"El dia con mayor cantidad de integrantes es: "<<diaConMayorIntegrantes<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;

return 0;
}
