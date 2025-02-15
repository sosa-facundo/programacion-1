#include <iostream>
using namespace std;
/**Hacer un programa que muestre los n£meros primos entre el 1 y el 10000. El
usuario no debe ingresar nada en este programa.
*/
int main(){
    int contador;
    int i;
    cout<<"Estos son los numeros primos del 1ero al 10000: "<<endl;


    for(int numero=1;numero<=10000;numero++){
        contador=0;
        for( i=1;i<=numero; i++){

            if(numero%i==0){
                contador=contador+1;
            }
        }
        if ( contador==2){
            cout<<endl<<numero<<" es numero primo.";
        }
    }

return 0;
}
