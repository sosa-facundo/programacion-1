#include <iostream>
using namespace std;
/**
Una f brica de caramelos dispone de un presupuesto inicial para inaugurar su
sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
siguientes costos:
- Costo de alquiler de $10000
- Costo por caramelo producido de $2.50
- Costo por mantenimiento cada 100 caramelos de $5000
Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
mes, informar:
- "El presupuesto es suciente para cubrir los costos de $XXXX"
- "El presupuesto no es suciente, necesita un cr‚dito de $XXXX"
*/
int main (){

    int presupuestoInicial;
    int caramelosAProducir;
    float costoPorCaramelo;
    int costoDeMantenimiento;
    int costoDeAlquiler=10000;
    float costoMensual;
    float condicionDeDinero;
    cout<<"ingrese el presupuesto inicial: "<<endl;
    cin>>presupuestoInicial;
    cout<<"ingrese la cantidad de caramelos a producir el primer mes: "<<endl;
    cin>>caramelosAProducir;

    ///COSTO POR PRODUCCION DE CADA UNO DE LOS CARAMELOS $2.50
    costoPorCaramelo=caramelosAProducir*2.5;
    ///COSTO DE MANTENIMIENTO CADA 100 UNIDADES SE ARREGLA LA MAQUINA *$5000
    costoDeMantenimiento=caramelosAProducir/100;
    costoDeMantenimiento=costoDeMantenimiento*5000;
    ///COSTO x MANTENIMIENTO DE LA MAQUINA + PRODUCCION DE CADA CARAMELO + ALQUILER
    costoMensual=costoDeMantenimiento+costoPorCaramelo+costoDeAlquiler;

    if(presupuestoInicial-costoMensual>=0){
        cout<<"alcanza la plata para financiar el proyecto."<<endl;
    }
    else{
        cout<<"no alcanza la plata para financiar el proyecto."<<endl;

    }
    condicionDeDinero=presupuestoInicial-costoMensual;
    cout<<"condicion de capital"<<endl<<condicionDeDinero;
    return 0;
}
