#include <iostream>
using namespace std;
/*Una marroquiner¡a dispone de 45 carteras blancas, 50 carteras negras, 40
marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
ventas. Cada venta est  compuesta por:
- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marr¢n, 4 - Gris)
Calcular e informar:
- Cantidad total de carteras vendidas en total.
- Cu ntas carteras quedaron de cada tipo.
- Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superar  las 10 carteras.
*/
int main(){

    int carterasVendidas;
    int color;
    int carterasBlanca=45;
    int carterasNegro=50;
    int carterasMarron=40;
    int carterasGris=49;

    ///COMPRA 1
    cout<<"Ingrese la cantidad de carteras que desees comprar. Esta compra no debe superar a 10 unidades totales."<<endl;
    cin>>carterasVendidas;

    if(carterasVendidas>0&&carterasVendidas<=10){
        cout<<"ingrese el color de la primer venta. Ingresando |1|Blanco. |2|Negro. |3|Marron. |4|Gris. ";
        cin>>color;

        switch (color){
            case 1:
                cout<<"haz comprado "<<carterasVendidas<< " carteras blancas."<<endl;
                carterasBlanca=carterasBlanca-carterasVendidas;
                break;

            case 2:
                cout<<"haz comprado "<<carterasVendidas<< " carteras negro."<<endl;
                carterasNegro=carterasNegro-carterasVendidas;
                break;

            case 3:
                cout<<"haz comprado "<<carterasVendidas<< " carteras marron."<<endl;
                carterasMarron=carterasMarron-carterasVendidas;
                break;

            case 4:
                cout<<"haz comprado "<<carterasVendidas<< " carteras grises."<<endl;
                carterasGris=carterasGris-carterasVendidas;
                break;
        }
    }
    else{
        cout<<endl<<"no haz ingresado un numero entre 1 y 10. "<<endl;
    }

    ///COMPRA 2

    cout<<"Ingrese la cantidad de carteras que desees comprar. Esta compra no debe superar a 10 unidades totales."<<endl;
    cin>>carterasVendidas;

    if(carterasVendidas>0&&carterasVendidas<=10){
        cout<<"ingrese el color de la primer venta. Ingresando |1|Blanco. |2|Negro. |3|Marron. |4|Gris. ";
        cin>>color;

        switch (color){
            case 1:
                cout<<"haz comprado "<<carterasVendidas<< " carteras blancas."<<endl;
                carterasBlanca=carterasBlanca-carterasVendidas;
                break;

            case 2:
                cout<<"haz comprado "<<carterasVendidas<< " carteras negro."<<endl;
                carterasNegro=carterasNegro-carterasVendidas;
                break;

            case 3:
                cout<<"haz comprado "<<carterasVendidas<< " carteras marron."<<endl;
                carterasMarron=carterasMarron-carterasVendidas;
                break;

            case 4:
                cout<<"haz comprado "<<carterasVendidas<< " carteras grises."<<endl;
                carterasGris=carterasGris-carterasVendidas;
                break;
        }
    }
    else{
        cout<<endl<<"no haz ingresado un numero entre 1 y 10. "<<endl;
    }

    ///COMPRA 3

    cout<<"Ingrese la cantidad de carteras que desees comprar. Esta compra no debe superar a 10 unidades totales."<<endl;
    cin>>carterasVendidas;

    if(carterasVendidas>0&&carterasVendidas<=10){
        cout<<"ingrese el color de la primer venta. Ingresando |1|Blanco. |2|Negro. |3|Marron. |4|Gris. ";
        cin>>color;

        switch (color){
            case 1:
                cout<<"haz comprado "<<carterasVendidas<< " carteras blancas."<<endl;
                carterasBlanca=carterasBlanca-carterasVendidas;
                break;

            case 2:
                cout<<"haz comprado "<<carterasVendidas<< " carteras negro."<<endl;
                carterasNegro=carterasNegro-carterasVendidas;
                break;

            case 3:
                cout<<"haz comprado "<<carterasVendidas<< " carteras marron."<<endl;
                carterasMarron=carterasMarron-carterasVendidas;
                break;

            case 4:
                cout<<"haz comprado "<<carterasVendidas<< " carteras grises."<<endl;
                carterasGris=carterasGris-carterasVendidas;
                break;
        }
    }
    else{
        cout<<endl<<"no haz ingresado un numero entre 1 y 10. "<<endl;
    }

    /// MOSTRAR DATOS DE SALIDA
    cout<<endl<<"Quedaron en stock "<<carterasBlanca<<" carteras Blancas."<<endl;
    cout<<endl<<"Quedaron en stock "<<carterasNegro<<" carteras Negras."<<endl;
    cout<<endl<<"Quedaron en stock "<<carterasGris<<" carteras Grises."<<endl;
    cout<<endl<<"Quedaron en stock "<<carterasMarron<<" carteras Marrones."<<endl;

    return 0;
}
