#include <iostream>
using namespace std;
/**Un club de lectura desea registrar la informaci¢n de los libros que leyeron sus
socios en el £ltimo mes. Por cada socio y libro se registr¢:
- N£mero de socio (entero)
- N£mero de libro (entero)
- Cantidad de p ginas del libro (entero)
- Tiempo total de lectura en minutos (entero)
La informaci¢n est  agrupada por socio. Cada socio pudo haber le¡do una
cantidad diferente de libros. Para indicar el fin de la carga de datos de un socio
se ingresa un n£mero de socio distinto al ingresado previamente. Para indicar el
fin de la carga de datos se ingresa un n£mero de socio igual a cero.
Se pide calcular e informar:
A) Por cada socio, la cantidad total de p ginas le¡das.
B) Por cada socio, el tiempo promedio total de lectura.
C) La cantidad de veces que un socio del club ha le¡do un libro de m s de
500 p ginas.
D) El tiempo total de lectura entre todos los socios.
E) El socio que m s libros haya le¡do.*/
int main(){
    int numeroDeSocio;
    int numeroDeLibro;
    int cantidadDePaginasDelLibro;
    int tiempoTotalDeLecturaEnMinutosPorSocio;
    int sumaPaginasTotalesLeidasPorSocio=0;
    int tiempoPromedioTotal=0;
    int cuentaSocios=0;
    int tiempoTotal=0;
    int libroMas500Paginas=0;
    int numeroDeSocioConMasLibrosLeidos=0;
    int cantidadMasAltaDeLibrosLeidos;
    int cuentaLibrosPorSocio=0;
    cout<<"Ingrese un numero de socio, si desea terminar precion‚ [0] : "<<endl;
    cin>>numeroDeSocio;

    while(numeroDeSocio!=0)
    {
            cout<<"Ingresar numero del libro leido, si finaliz¢ precion‚ [0]: "<<endl;
            cin>>numeroDeLibro;

        while(numeroDeLibro!=0)

        {
            cout<<"Ingresar cantidad de paginas del libro: "<<endl;
            cin>>cantidadDePaginasDelLibro;
            cuentaLibrosPorSocio=cuentaLibrosPorSocio+1;
            if(cantidadDePaginasDelLibro>500)
            {
                libroMas500Paginas=libroMas500Paginas+1;
            }
            sumaPaginasTotalesLeidasPorSocio=sumaPaginasTotalesLeidasPorSocio+cantidadDePaginasDelLibro;
            cout<<"Ingresar numero del libro leido, si finaliz¢ precion‚ [0]: "<<endl;
            cin>>numeroDeLibro;
        }

        cout<<"La suma total de las paginas leidas por el socio "<<numeroDeSocio<<" es : "<<endl;
        cout<<sumaPaginasTotalesLeidasPorSocio<<endl;

        cout<<"Ingresar tiempo total de lectura en minutos: "<<endl;
        cin>>tiempoTotalDeLecturaEnMinutosPorSocio;



        tiempoTotal=tiempoTotal+tiempoTotalDeLecturaEnMinutosPorSocio;

        cuentaSocios=cuentaSocios+1;

        if(numeroDeSocioConMasLibrosLeidos==0)
        {
            cantidadMasAltaDeLibrosLeidos=cuentaLibrosPorSocio;
            numeroDeSocioConMasLibrosLeidos=numeroDeSocio;
        }
        else if (cuentaLibrosPorSocio>cantidadMasAltaDeLibrosLeidos)
        {
            cantidadMasAltaDeLibrosLeidos=cuentaLibrosPorSocio;
            numeroDeSocioConMasLibrosLeidos=numeroDeSocio;
        }



        sumaPaginasTotalesLeidasPorSocio=0;
        cuentaLibrosPorSocio=0;
        cout<<"Ingrese un nuevo numero de socio cuando dese‚ terminar precion‚ [0]: "<<endl;
        cin>>numeroDeSocio;
    }
    tiempoPromedioTotal=tiempoTotal/cuentaSocios;
    cout<<"El tiempo promedio total es: "<<tiempoPromedioTotal<<endl;
    cout<<"La cantidad de libros de mas de 500 paginas son: "<<libroMas500Paginas<<endl;
    cout<<"El tiempo total de lectura entre todos los socios es: "<<tiempoTotal<<endl;
    cout<<"El numero de socios con mas libros leidos es: "<<numeroDeSocioConMasLibrosLeidos<<". La cantidad de libros es: "<<cantidadMasAltaDeLibrosLeidos<<endl;
return 0;}
