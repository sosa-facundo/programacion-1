#include <iostream>
using namespace std;
/**Un club de lectura desea registrar la informaci¢n de los 5 libros que leyeron sus
10 socios en el £ltimo mes. Por cada socio y libro se registr¢:
- N£mero de socio (entero)
- N£mero de libro (entero)
- Cantidad de p ginas del libro (entero)
- Tiempo total de lectura en minutos (entero)
La informaci¢n est  agrupada por socio. Todos los socios leyeron 5 libros.
Se pide calcular e informar:
A) Por cada socio, la cantidad total de p ginas le¡das.++++
B) Por cada socio, el tiempo promedio total de lectura.
C) La cantidad de veces que un socio del club ha le¡do un libro de m s de
500 p ginas.
D) El tiempo total de lectura entre todos los socio.
*/
int main(){
    int numeroDeSocio=1;
    int numeroDeLibro=1;
    int cantidadDePaginasDelLibro;
    int tiempoToltaDeLecturaEnMinutos;
    int cantidadDePaginasLeidasPorCadaSocio=0;
    int paginasTotalLeidasSocio1=0;
    int paginasTotalLeidasSocio2=0;
    int paginasTotalLeidasSocio3=0;
    int paginasTotalLeidasSocio4=0;
    int paginasTotalLeidasSocio5=0;
    int paginasTotalLeidasSocio6=0;
    int paginasTotalLeidasSocio7=0;
    int paginasTotalLeidasSocio8=0;
    int paginasTotalLeidasSocio9=0;
    int paginasTotalLeidasSocio10=0;
    int tiempoTotalDeLectura=0;
    float tiempoPromedioTotal;
    int libroLeidoMasDe500Paginas=0;
    for(numeroDeSocio;numeroDeSocio<=10;numeroDeSocio++)
    {

        for(numeroDeLibro;numeroDeLibro<=5;numeroDeLibro++)
        {
            cout<<"Ingrese la cantidad de paginas que leyo el socio Nø "<<numeroDeSocio<<". En el libro: "<<numeroDeLibro<<endl;
            cin>>cantidadDePaginasDelLibro;
            if (cantidadDePaginasDelLibro>500)
            {
                libroLeidoMasDe500Paginas=libroLeidoMasDe500Paginas+1;
            }
            cantidadDePaginasLeidasPorCadaSocio=cantidadDePaginasLeidasPorCadaSocio+cantidadDePaginasDelLibro;///Suma de paginas leidas por cada socio.
        }
        cout<<"Cual es el tiempo total de lectura en minutos del socio Nø "<<numeroDeSocio<<"? "<<endl;
        cin>>tiempoToltaDeLecturaEnMinutos;
        tiempoTotalDeLectura=tiempoTotalDeLectura+tiempoToltaDeLecturaEnMinutos;
        if (numeroDeSocio==1)
        {
            paginasTotalLeidasSocio1=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==2)
        {
            paginasTotalLeidasSocio2=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==3)
        {
            paginasTotalLeidasSocio3=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==4)
        {
            paginasTotalLeidasSocio4=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==5)
        {
            paginasTotalLeidasSocio5=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==6)
        {
            paginasTotalLeidasSocio6=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==7)
        {
            paginasTotalLeidasSocio7=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==8)
        {
            paginasTotalLeidasSocio8=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==9)
        {
            paginasTotalLeidasSocio9=cantidadDePaginasLeidasPorCadaSocio;
        }
        if (numeroDeSocio==10)
        {
            paginasTotalLeidasSocio10=cantidadDePaginasLeidasPorCadaSocio;
        }
        cantidadDePaginasLeidasPorCadaSocio=0;
        numeroDeLibro=1;
    }

    tiempoPromedioTotal=(float)tiempoTotalDeLectura/10;


    cout<<"La cantidad total de paginas leidas del socio Nø 1 es: "<<paginasTotalLeidasSocio1  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 2 es: "<<paginasTotalLeidasSocio2  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 3 es: "<<paginasTotalLeidasSocio3  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 4 es: "<<paginasTotalLeidasSocio4  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 5 es: "<<paginasTotalLeidasSocio5  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 6 es: "<<paginasTotalLeidasSocio6  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 7 es: "<<paginasTotalLeidasSocio7  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 8 es: "<<paginasTotalLeidasSocio8  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 9 es: "<<paginasTotalLeidasSocio9  <<endl;
    cout<<"La cantidad total de paginas leidas del socio Nø 10 es: "<<paginasTotalLeidasSocio10<<endl;
    cout<<"El tiempo promedio total de lectura es: "<<tiempoPromedioTotal<<endl;
    cout<<"Libros leidos de mas de 500 paginas: "<<libroLeidoMasDe500Paginas<<endl;
    cout<<"El tiempo total de lectura entre todos los socio: "<<tiempoTotalDeLectura<<endl;
return 0;
}
