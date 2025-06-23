#include <iostream>
using namespace std;
/**La Bolsa de Comercio de la Ciudad de Buenos Aires brinda la informaci¢n de la
cotizaci¢n de algunas acciones de la semana pasada.
Por cada acci¢n tiene un registro para cada uno de los 5 d¡as h biles de la
semana pasada, el mismo contiene:
- C¢digo de acci¢n
- D¡a de la semana (1 a 5)
- Precio apertura
- Precio cierre
- Volumen de venta
Los datos se encuentran agrupados por c¢digo de acci¢n y dentro de ese
agrupamiento, ordenados por d¡a de la semana.
El fin de los datos se indica con un c¢digo de acci¢n igual a 0.
Se pide calcular e informar:
A) Por cada acci¢n, la cantidad de d¡as en que el precio no haya variado.
(Igual precio de apertura y cierre).
B) El d¡a de la semana y c¢digo de acci¢n que haya registrado el mayor
volumen de venta.*/
int main (){
    int codigoDeAccion;
    int diaDeLaSemana;
    int precioApertura;
    int precioCierre;
    int volumenVenta;

     cout<<"Ingrese codigo de la accion: "<<endl;
     cin>>codigoDeAccion;

     while(codigoDeAccion!=0)
    {

        for(dia=1;dia<=5;dia++)
        {



        }


        cout<<"Ingrese codigo de la accion: "<<endl;
        cin>>codigoDeAccion;
    }



return 0;
}
