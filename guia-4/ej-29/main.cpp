#include <iostream>
using namespace std;
/**Hacer un programa para ingresar los consumos de electricidad de los clientes
de una empresa. Cada registro contiene los siguientes datos:
- N£mero de cliente
- Localidad del cliente (1, 2 o 3)
- Kilovatios consumidos
El lote finaliza con un registro con n£mero de cliente igual a cero. El precio es
escalonado seg£n la siguiente escala:
$ 10 por kilovatio por los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo de 201 kilovatios en adelante.
Adem s hay un cargo fijo de $ 100.
Ejemplo A: Consumo de 55 kilovatios, se calcular : $ 10 x 55 + $ 100= $ 650
Ejemplo B: Consumo de 125 kilovatios, se calcular : $ 10 x 100 + $ 12 x 25 + $
100=$ 1400
Ejemplo C: Consumo de 250 kilovatios, se calcular : $10 x 100+ $12 x 100 +
$15 x 50 + $100= $ 3050
Ejemplo D: Consumo de 0 kilovatios, se calcular : $ 10 x 0 + $ 100= $ 100
Se pide determinar e informar:
a) El n£mero de cliente que tuvo la mayor cantidad de Kilovatios consumidos
para cada una de las 3 localidades. Se listan 3 resultados, uno para cada una de
las 3 localidades
b) El total de recaudaci¢n para cada una de las 3 localidades. Se listan 3
resultados, uno para cada una de las 3 localidades.
c) El n£mero de cliente que tuvo la menor cantidad de Kilovatios consumidos
excluyendo a los clientes que tuvieron Kilovatios consumidos con valor cero. Se
lista 1 resultado.
*/
int main (){
    int numeroDeCliente;
    int localidadDelCliente;
    int kilovatiosConsumidos;
    int precioKilovatiosFinal;
    int MayorKilovatiosConsumidos1=0;
    int numeroDeClienteConMayorKilovatiosConsumidos1;
    int MayorKilovatiosConsumidos2=0;
    int numeroDeClienteConMayorKilovatiosConsumidos2;
    int MayorKilovatiosConsumidos3=0;
    int numeroDeClienteConMayorKilovatiosConsumidos3;
    int recaudacionDeLocalidad1=0;
    int recaudacionDeLocalidad2=0;
    int recaudacionDeLocalidad3=0;
    int numeroDeClienteConMenorKilovatios;
    int menorKilovatiosConsumidos=0;

    cout<<"ingresar nø de cliente: "<<endl;
    cin>>numeroDeCliente;

    while (numeroDeCliente!=0)
    {
        cout<<"ingresar localidad del cliente: "<<endl;
        cin>>localidadDelCliente;
        cout<<"ingresar kilovatios consumidos del cliente: "<<endl;
        cin>>kilovatiosConsumidos;
        if (kilovatiosConsumidos<=100)
        {
            precioKilovatiosFinal=kilovatiosConsumidos*10+100;
            cout<<precioKilovatiosFinal<<endl;
        }
        else if(kilovatiosConsumidos<=200)
        {
            precioKilovatiosFinal=((kilovatiosConsumidos-100)*12)+(100*10)+100;
            cout<<precioKilovatiosFinal<<endl;
        }
        else
        {
            precioKilovatiosFinal=((kilovatiosConsumidos-200)*15)+(100*10)+(100*12)+100;
            cout<<precioKilovatiosFinal<<endl;
        }
        if(localidadDelCliente==1)
        {
            if (MayorKilovatiosConsumidos1==0)
            {
                MayorKilovatiosConsumidos1=kilovatiosConsumidos;
                numeroDeClienteConMayorKilovatiosConsumidos1=numeroDeCliente;
            }
            else if (kilovatiosConsumidos>MayorKilovatiosConsumidos1)
            {
                MayorKilovatiosConsumidos1=kilovatiosConsumidos;
                numeroDeClienteConMayorKilovatiosConsumidos1=numeroDeCliente;
            }
            recaudacionDeLocalidad1=recaudacionDeLocalidad1+precioKilovatiosFinal;
        }
        if(localidadDelCliente==2)
        {
            if (MayorKilovatiosConsumidos2==0)
            {
                MayorKilovatiosConsumidos2=kilovatiosConsumidos;
                numeroDeClienteConMayorKilovatiosConsumidos2=numeroDeCliente;
            }
            else if (kilovatiosConsumidos>MayorKilovatiosConsumidos2)
            {
                MayorKilovatiosConsumidos2=kilovatiosConsumidos;
                numeroDeClienteConMayorKilovatiosConsumidos2=numeroDeCliente;
            }
            recaudacionDeLocalidad2=recaudacionDeLocalidad2+precioKilovatiosFinal;
        }
        if(localidadDelCliente==3)
        {
            if (MayorKilovatiosConsumidos3==0)
            {
                MayorKilovatiosConsumidos3=kilovatiosConsumidos;
                numeroDeClienteConMayorKilovatiosConsumidos3=numeroDeCliente;
            }
            else if (kilovatiosConsumidos>MayorKilovatiosConsumidos3)
            {
                MayorKilovatiosConsumidos3=kilovatiosConsumidos;
                numeroDeClienteConMayorKilovatiosConsumidos3=numeroDeCliente;
            }
            recaudacionDeLocalidad3=recaudacionDeLocalidad3+precioKilovatiosFinal;
        }
        if (menorKilovatiosConsumidos==0)
        {
            menorKilovatiosConsumidos=kilovatiosConsumidos;
            numeroDeClienteConMenorKilovatios=numeroDeCliente;
        }
        else if(kilovatiosConsumidos<menorKilovatiosConsumidos)
        {
            menorKilovatiosConsumidos=kilovatiosConsumidos;
            numeroDeClienteConMenorKilovatios=numeroDeCliente;
        }


        cout<<"ingresar nø de cliente: "<<endl;
        cin>>numeroDeCliente;
    }
    cout<<"El numero de cliente  con mayor kilovatios consumidos de la localidad 1 es: "<<numeroDeClienteConMayorKilovatiosConsumidos1<<endl;
    cout<<"El numero de cliente  con mayor kilovatios consumidos de la localidad 2 es: "<<numeroDeClienteConMayorKilovatiosConsumidos2<<endl;
    cout<<"El numero de cliente  con mayor kilovatios consumidos de la localidad 3 es: "<<numeroDeClienteConMayorKilovatiosConsumidos3<<endl;
    cout<<"La recaudacion total de la localidad 1 es: "<<recaudacionDeLocalidad1<<endl;
    cout<<"La recaudacion total de la localidad 2 es: "<<recaudacionDeLocalidad2<<endl;
    cout<<"La recaudacion total de la localidad 3 es: "<<recaudacionDeLocalidad3<<endl;
    cout<<"El numero de cliente con menor kilovatios consumidos es: "<<numeroDeClienteConMenorKilovatios<<endl;
return 0;
}
