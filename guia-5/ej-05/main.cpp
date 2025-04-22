#include <iostream>
using namespace std;
/**Un restaurant registr¢ la informaci¢n de todas las comandas atendidas la
noche anterior por sus mozos. Por cada comanda se registr¢:
- N£mero de comanda
- N£mero de mozo (entero)
- Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
- Importe (float)
La informaci¢n se encuentra agrupada por N£mero de mozo. Cada mozo
atendi¢ diez comandas. Para indicar el fin de la carga de datos se registra un
N£mero de mozo negativo.
Calcular e informar:
1 - Por cada mozo, la cantidad de platos de cada tipo.
2 - El n£mero de mozo que haya atendido el Plato Principal de menor importe.
3 - El importe promedio por comanda (entre todas las comandas).
NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en
un restaurant*/

int main(){
    int numeroDeMozo;
    int numeroDeComanda;
    int tipoDePlato;
    float importe;
    int plato;
    int cantidadTotalEntrada=0;
    int cantidadTotalPlatoPrincipal=0;
    int cantidadTotalPostre=0;
    int numerodeMozoPlatoMenorPrecio=0;
    int importeDelPlatoDeMenorPrecio=0;
    int cantidadDeComandas=0;
    int sumaTotalImportes=0;
    float promedioImporteDeComandas;
    cout<<"Ingresar un numero de mozo, as¡ agregas la informacion de sus 10 comandas."<<endl;
    cin>>numeroDeMozo;
    while(numeroDeMozo>=0)
    {
        for(numeroDeComanda=1;numeroDeComanda<=10;numeroDeComanda++)
        {
            ///DEFINO EL PLATO///
            cout<<"Definir el plato: 1-Entrada, 2-Plato principal, 3-Postre."<<endl;
            cin>>plato;
            if (plato==1)
            {
                cantidadTotalEntrada=cantidadTotalEntrada+1;
            }
            if(plato==2)
            {
                cantidadTotalPlatoPrincipal=cantidadTotalPlatoPrincipal+1;
            }
            if(plato==3)
            {
                cantidadTotalPostre=cantidadTotalPostre+1;
            }
            cout<<"Ingresar importe del plato: "<<endl;
            cin>>importe;
            if (plato==2)
            {
                if (importeDelPlatoDeMenorPrecio==0)
                {
                    numerodeMozoPlatoMenorPrecio=numeroDeMozo;
                    importeDelPlatoDeMenorPrecio=importe;
                }
                if(importe<importeDelPlatoDeMenorPrecio)
                {
                    numerodeMozoPlatoMenorPrecio=numeroDeMozo;
                    importeDelPlatoDeMenorPrecio=importe;
                }
            }
            cantidadDeComandas=cantidadDeComandas+1;
            sumaTotalImportes=sumaTotalImportes+importe;
        }

        ///CANTIDADA DE CADA PLATO POR CADA MOZO///
        cout<<"El mozo Nø "<<numeroDeMozo<<" atendio..."<<endl;
        cout<<cantidadTotalEntrada<< " platos de entradas."<<endl;
        cout<<cantidadTotalPlatoPrincipal<<" patos de platos principal." <<endl;
        cout<<cantidadTotalPostre<<" platos de postre." <<endl;
        ///Reincio de cantidad de cada platos, reinicio mozo.
        cantidadTotalEntrada=0;
        cantidadTotalPlatoPrincipal=0;
        cantidadTotalPostre=0;
        cout<<"Ingrese otro numero de mozo, as¡ agregas la informacion de sus 10 comandas."<<endl;
        cin>>numeroDeMozo;
    }
    promedioImporteDeComandas=(float)sumaTotalImportes/cantidadDeComandas;
    cout<<"El promedio total de todas las comandas es: "<<promedioImporteDeComandas<<endl;
    ///EL NUMERO DE MOZO CON EL PLATO DE MENOR PRECIO///
    cout<<" El numero de mozo con el plato mas economico es: "<<numerodeMozoPlatoMenorPrecio<<"con el precio de :"<<importeDelPlatoDeMenorPrecio<<endl;

return 0;
}
