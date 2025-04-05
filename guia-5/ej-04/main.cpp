#include <iostream>
using namespace std;
/**Una empresa registr¢ las ventas que efectu¢ durante un d¡a y para cada venta
 registr¢ los siguientes datos:
 - N£mero de Art¡culo Vendido (1 a 30).
 - Cantidad de Unidades Vendidas.
 - Importe de la Venta.
 El lote finaliza cuando se ingresa un registro con N£mero de Art¡culo igual a 0.
 En el lote anterior no aparecen registros de los art¡culos que por alguna raz¢n
 no se hayan vendido durante el d¡a. Los registros est n agrupados por n£mero
 de art¡culo.
Se pide determinar e informar:
 a) La recaudaci¢n total para cada uno de los art¡culos vendidos. Se informa 1
 resultado para cada uno de los grupos.
 b) El n£mero de art¡culo con mayor cantidad TOTAL de unidades vendidas.*/
int main (){
    int numeroDeArticulo;
    int cantidadDeUnidadesVendidas;
    int importeDeLaVenta;
    int articuloActual;
    int recaudacionTotal;
    int sumaArticulosVendidosActual;
    int articuloConMayorCantidadTotalVentas=0;
    int numeroDeArticuloConMayorVentas;
    cout<<"Ingresar n£mero de articulo, presione [0] para finalizar: "<<endl;
    cin>>numeroDeArticulo;

    while( numeroDeArticulo!=0)
    {
        articuloActual=numeroDeArticulo;
        recaudacionTotal=0;
        sumaArticulosVendidosActual=0;
        while (articuloActual==numeroDeArticulo)
        {
            cout<<"Cantidad de Unidades Vendidas: "<<endl;
            cin>>cantidadDeUnidadesVendidas;
            cout<<"importe de la venta: "<<endl;
            cin>>importeDeLaVenta;
            recaudacionTotal=recaudacionTotal+importeDeLaVenta;
            sumaArticulosVendidosActual=sumaArticulosVendidosActual+cantidadDeUnidadesVendidas;

            cout<<"Ingresar n£mero de articulo, presione [0] para finalizar: "<<endl;
            cin>>numeroDeArticulo;
        }
        if (articuloConMayorCantidadTotalVentas==0)
        {
            articuloConMayorCantidadTotalVentas=sumaArticulosVendidosActual;
            numeroDeArticuloConMayorVentas=articuloActual;
        }
        if (sumaArticulosVendidosActual>articuloConMayorCantidadTotalVentas)
        {
            articuloConMayorCantidadTotalVentas=sumaArticulosVendidosActual;
            numeroDeArticuloConMayorVentas=articuloActual;
        }
        cout<<"la recaudacion del articulo nø "<<articuloActual<<" es: "<<recaudacionTotal<<endl;
    }
    cout<<"El articulo con mayor cantidad de ventas es: "<<numeroDeArticuloConMayorVentas<<" con "<<articuloConMayorCantidadTotalVentas<<" ventas."<<endl;
return 0;
}
