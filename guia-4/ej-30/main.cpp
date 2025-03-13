#include <iostream>
using namespace std;
/**Hacer un programa para ingresar por teclado los saldos de los clientes de un
banco. Cada registro contiene los siguientes datos:
- N£mero del cliente
- N£mero de sucursal (1, 2, 3 o 4)
- Saldo del cliente
El lote finaliza cuando se ingresa un registro con n£mero de sucursal igual a 10.
Se pide determinar e informar.
a) El n£mero de sucursal con mayor porcentaje de clientes con saldo superior a
$ 20000.
b) El n£mero de cliente con mayor saldo, indicando tambi‚n de qu‚ n£mero de
sucursal es ese cliente. Se listan 2 resultados.
c) Para cada una de las sucursales la suma de los saldos de todos sus clientes.
Se listan 4 resultados.*/
int main(){
    int numeroDeCliente;
    int numeroDeSucursal;
    int saldoDelCliente;
    int mayorSaldo=0;
    int numeroDeClienteConMayorSaldo;
    int numeroDeSucursalMayorSaldo;
    int saldoSuperiorA20000Sucursal1=0;
    int saldoSuperiorA20000Sucursal2=0;
    int saldoSuperiorA20000Sucursal3=0;
    int saldoSuperiorA20000Sucursal4=0;
    int sumaSaldoSucursal1=0;
    int sumaSaldoSucursal2=0;
    int sumaSaldoSucursal3=0;
    int sumaSaldoSucursal4=0;
    cout<<"Ingrese el numero de sucursal [1/2/3/4] dependiendo cual sea: "<<endl;
    cin>>numeroDeSucursal;
    while(numeroDeSucursal!=10)
    {
        cout<<"Ingrese el numero de cliente: "<<endl;
        cin>>numeroDeCliente;
        cout<<"Ingrese el saldo del cliente: "<<endl;
        cin>>saldoDelCliente;

        if(numeroDeSucursal==1)
        {
            if (saldoDelCliente>20000)
            {
                saldoSuperiorA20000Sucursal1=saldoSuperiorA20000Sucursal1+1;
            }
            sumaSaldoSucursal1=sumaSaldoSucursal1+saldoDelCliente;
        }
        if(numeroDeSucursal==2)
        {
            if (saldoDelCliente>20000)
            {
                saldoSuperiorA20000Sucursal2=saldoSuperiorA20000Sucursal2+1;
            }
            sumaSaldoSucursal2=sumaSaldoSucursal2+saldoDelCliente;

        }
        if(numeroDeSucursal==3)
        {
            if (saldoDelCliente>20000)
            {
                saldoSuperiorA20000Sucursal3=saldoSuperiorA20000Sucursal3+1;
            }
            sumaSaldoSucursal3=sumaSaldoSucursal3+saldoDelCliente;

        }
        if(numeroDeSucursal==4)
        {
            if (saldoDelCliente>20000)
            {
                saldoSuperiorA20000Sucursal4=saldoSuperiorA20000Sucursal4+1;
            }
            sumaSaldoSucursal4=sumaSaldoSucursal4+saldoDelCliente;
        }

        if(mayorSaldo==0)
        {
            mayorSaldo=saldoDelCliente;
            numeroDeClienteConMayorSaldo=numeroDeCliente;
            numeroDeSucursalMayorSaldo=numeroDeSucursal;
        }
        if (saldoDelCliente>mayorSaldo)
        {
            mayorSaldo=saldoDelCliente;
            numeroDeClienteConMayorSaldo=numeroDeCliente;
            numeroDeSucursalMayorSaldo=numeroDeSucursal;

        }
        cout<<"Ingrese el numero de sucursal [1/2/3/4] dependiendo cual sea: "<<endl;
        cin>>numeroDeSucursal;
    }


    cout<<"El numero del cliente con mayor saldo es: "<<numeroDeClienteConMayorSaldo<<", en la sucursal"<<numeroDeSucursalMayorSaldo<<". Su saldo es: "<<mayorSaldo<<endl;



    if (saldoSuperiorA20000Sucursal1>saldoSuperiorA20000Sucursal2 && saldoSuperiorA20000Sucursal1>saldoSuperiorA20000Sucursal3 && saldoSuperiorA20000Sucursal1>saldoSuperiorA20000Sucursal4)
    {
        cout<<"El n£mero de sucursal con mayor porcentaje de clientes con saldo superior a $ 20000.: Sucursal 1"<<endl;
    }
    else if (saldoSuperiorA20000Sucursal2>saldoSuperiorA20000Sucursal3 && saldoSuperiorA20000Sucursal2>saldoSuperiorA20000Sucursal4 && saldoSuperiorA20000Sucursal2>saldoSuperiorA20000Sucursal1)
    {
        cout<<"El n£mero de sucursal con mayor porcentaje de clientes con saldo superior a $ 20000.: Sucursal 2"<<endl;
    }
    else if (saldoSuperiorA20000Sucursal3>saldoSuperiorA20000Sucursal4 && saldoSuperiorA20000Sucursal3>saldoSuperiorA20000Sucursal1 && saldoSuperiorA20000Sucursal3>saldoSuperiorA20000Sucursal2)
    {
        cout<<"El n£mero de sucursal con mayor porcentaje de clientes con saldo superior a $ 20000.: Sucursal 3"<<endl;
    }
    else if (saldoSuperiorA20000Sucursal4>saldoSuperiorA20000Sucursal1 && saldoSuperiorA20000Sucursal4>saldoSuperiorA20000Sucursal2 && saldoSuperiorA20000Sucursal4>saldoSuperiorA20000Sucursal3)
    {
        cout<<"El n£mero de sucursal con mayor porcentaje de clientes con saldo superior a $ 20000.: Sucursal 4"<<endl;
    }
    else
    {
        cout<<"No hay sucursal con mayor porcentaje de clientes con saldo superior a $ 20000"<<endl;
    }


    cout<<"La suma de dinero en la sucursal numero 1 es : "<<sumaSaldoSucursal1<<endl;
    cout<<"La suma de dinero en la sucursal numero 2 es : "<<sumaSaldoSucursal2<<endl;
    cout<<"La suma de dinero en la sucursal numero 3 es : "<<sumaSaldoSucursal3<<endl;
    cout<<"La suma de dinero en la sucursal numero 4 es : "<<sumaSaldoSucursal4<<endl;
return 0;
}
