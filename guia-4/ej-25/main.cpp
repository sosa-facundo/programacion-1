#include <iostream>
using namespace std;
/** El festival Larapalooza, el mejor festival musical del mundo, brindar  una serie
de conciertos distribuidos en tres jornadas distintas. Se desea un programa que
registre los artistas que participar n. Por cada artista se registr¢:
- N£mero de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duraci¢n del show en minutos (entero)
La informaci¢n no se encuentra ordenada bajo ning£n criterio. La carga de
datos se finaliza con un n£mero de artista igual a cero. Calcular e informar:
- El n£mero de artista que realice el show m s largo de la jornada 1.
- La cantidad de solistas (artistas de 1 integrante) que participaron en
cada una de las jornadas. (se muestran tres resultados).
- La jornada m s extensa (en minutos totales).
- Duraci¢n promedio de show por artista (se muestra un resultado).
*/
int main(){
    int numeroDeArtista;
    int integrantes;
    int jornada;
    int duracionDelShow;
    int cuentaArtistas=0;
    int showMasLargoJornada1;
    int numeroDeArtistaShowMasLargo=0;
    int numeroDeArtistaShowmaslargo;
    int artistasSolistasJornada1=0;
    int artistasSolistasJornada2=0;
    int artistasSolistasJornada3=0;
    int duracionDelShowJornada1=0;
    int duracionDelShowJornada2=0;
    int duracionDelShowJornada3=0;
    float duracionPromedio=0;
    cout<<"ingresar numero de artista= "<<endl;
    cin>>numeroDeArtista;

    while(numeroDeArtista!=0)
    {
        cout<<"ingresar cantidad de integrantes= "<<endl;
        cin>>integrantes;
        cout<<"a que jornada pertenece? [1/2/3]="<<endl;
        cin>>jornada;
        cout<<"Duracion del show en minutos= "<<endl;
        cin>>duracionDelShow;
        ///Cantidad de artistas.
        cuentaArtistas=cuentaArtistas+1;
        ///Numero de artista de la jornada 1 con el show mas duradero.
        if(numeroDeArtistaShowMasLargo==0)
        {
            if(jornada==1)
            {
                numeroDeArtistaShowMasLargo=numeroDeArtista;
                showMasLargoJornada1=duracionDelShow;
            }
        }
        else if(jornada == 1 && duracionDelShow>showMasLargoJornada1)
        {
            numeroDeArtistaShowMasLargo=numeroDeArtista;
            showMasLargoJornada1=duracionDelShow;
        }
        ///Cantidad de solistas. artistas con 1 integrante. en cada jornada(3 resultados)
        ///duracion de todos los shows de las jornadas.
        if (jornada==1)
        {
            if(integrantes==1)
            {
                artistasSolistasJornada1=artistasSolistasJornada1+1;
            }
            duracionDelShowJornada1=duracionDelShowJornada1+duracionDelShow;
        }
        if(jornada==2)
        {
            if(integrantes==1)
            {
                artistasSolistasJornada2=artistasSolistasJornada2+1;
            }
            duracionDelShowJornada2=duracionDelShowJornada2+duracionDelShow;
        }
        if(jornada==3)
        {
            if(integrantes==1)
            {
                artistasSolistasJornada3=artistasSolistasJornada3+1;
            }
            duracionDelShowJornada3=duracionDelShowJornada3+duracionDelShow;
        }
        duracionPromedio=duracionPromedio+duracionDelShow;

        cout<<"ingresar numero de artista= "<<endl;
        cin>>numeroDeArtista;
    }

    duracionPromedio=duracionPromedio/(float)cuentaArtistas;
    if(duracionDelShowJornada1>duracionDelShowJornada2 && duracionDelShowJornada1>duracionDelShowJornada3)
    {
    cout<<"La jornada mas extensa en minutos totales es la jornada 1 con "<<duracionDelShowJornada1<<" minutos totales"<<endl;
    }
    if(duracionDelShowJornada2>duracionDelShowJornada1 && duracionDelShowJornada2>duracionDelShowJornada3)
    {
    cout<<"La jornada mas extensa en minutos totales es la jornada 2 con "<<duracionDelShowJornada2<<" minutos totales"<<endl;
    }
    if(duracionDelShowJornada3>duracionDelShowJornada1 && duracionDelShowJornada3>duracionDelShowJornada2)
    {
    cout<<"La jornada mas extensa en minutos totales es la jornada 3 con "<<duracionDelShowJornada3<<" minutos totales"<<endl;
    }
    cout<<"El numero de artista que realiza el show mas largo de la jornada 1 es = "<<numeroDeArtistaShowMasLargo<<endl;
    cout<<"cantidad de artistas solistas en jornada 1= "<<artistasSolistasJornada1<<endl;
    cout<<"cantidad de artistas solistas en jornada 2= "<<artistasSolistasJornada2<<endl;
    cout<<"cantidad de artistas solistas en jornada 3= "<<artistasSolistasJornada3<<endl;

    cout<<"La duracion promedio de todos los shows es de = "<<duracionPromedio<<endl;
return 0;}
