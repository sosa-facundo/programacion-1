#include <iostream>
using namespace std;
/**La cuenta corriente de la famosa cantante Lady Lara ha registrado 14
movimientos durante la semana pasada. Por cada movimiento se registr¢:
- N£mero de movimiento
- D¡a
- Tipo ('E' - Extracci¢n / 'D' - Dep¢sito)
- Importe
Existe un registro por movimiento. Se desea calcular e informar:
- El saldo final de la cuenta.
- El porcentaje de movimientos de extracci¢n y el porcentaje de dep¢sito.
- El dep¢sito de mayor importe indicando tambi‚n d¡a y n£mero de
movimiento.
- La cantidad de movimientos del d¡a 10.
*/
int main(){
    int numMovimiento;
    int dia;
    char movimientoEOD;
    float depositar;
    int diaDeMayorImporte;
    float extraer;
    float saldo=0;
    int saldoCuenta;
    int depositoDeMayorImporte;
    int numMovimientoDeMayorImporte;
    int dia10=0;
    float contadorE=0;
    float contadorD=0;

    float porcentajeDeExtracciones;
    float porcentajeDeDepositos;

    for (numMovimiento=1;numMovimiento<=14;numMovimiento++){
        cout<<"ingrese el dia de hoy: ";
        cin>>dia;
        cout<<"ingrese [E] si desea Extraer dinero o [D] si desea depositarlo[E/D]: ";
        cin>>movimientoEOD;

        if (movimientoEOD=='e' || movimientoEOD=='E'){
            cout<<"Extraer."<<endl;
            cin>>extraer;
            saldo=saldo-extraer;
            contadorE=contadorE+1;
        }
        if (movimientoEOD=='d' || movimientoEOD=='D'){
            cout<<"Depositar."<<endl;
            cin>>depositar;
            saldo=depositar+saldo;
            contadorD=contadorD+1;
        }
        if(numMovimiento==1){
            depositoDeMayorImporte=depositar;
            diaDeMayorImporte=dia;
            numMovimientoDeMayorImporte=numMovimiento;
        }
        if(depositar>depositoDeMayorImporte){
            depositoDeMayorImporte=depositar;
            diaDeMayorImporte=dia;
            numMovimientoDeMayorImporte=numMovimiento;
        }
        cout<<"numero de movimiento: "<<numMovimiento<<endl;
        cout<<"saldo: "<<saldo<<endl<<endl;

        if(dia==10){
            dia10=dia10+1;
        }
    }
    porcentajeDeDepositos=(contadorD*(float)100)/14;
    porcentajeDeExtracciones=(contadorE*(float)100)/14;
    saldoCuenta=saldo;





    cout<<"Su saldo es: "<<saldoCuenta<<endl;
    cout<<"porcentaje de mivimietos de extracciones: "<<porcentajeDeExtracciones<<endl;
    cout<<"porcentaje de movimientos de depositos: "<<porcentajeDeDepositos<<endl;
    cout<<"El deposito de mayor importe indicando tambien dia y numero de movimiento: "<<endl;
    cout<<"El deposito de mayor importe es: "<< depositoDeMayorImporte<<" se hizo el dia "<<diaDeMayorImporte<<" y el numero de movimiento es: "<<numMovimientoDeMayorImporte<<endl;
    cout<< "La cantidad de movimientos realizados en el dia 10 es: "<<dia10<<endl;
return 0;
}
