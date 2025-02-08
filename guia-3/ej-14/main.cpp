#include <iostream>
using namespace std;
/**Dada una lista de 7 números enteros informar cual es el primer, el segundo, el
anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
Anteúltimo impar: 9 y Último impar: 5.
*/
int main(){
    int numeros;
    int primerImpar=0;
    int segundoImpar=0;
    int anteultimoImpar=0;
    int ultimoImpar=0;

    cout<<"ingrese una lista de 7 numeros enteros y se informara cual es el primer, el segundo, el anteultimo y el ultimo numero impar ingresado."<<endl;

    for (int i=1; i<=7;i++){
    cin>>numeros;
        if(numeros%2!=0){
            if(primerImpar==0){
                primerImpar=numeros;
            }
            else if(segundoImpar==0){
                segundoImpar=numeros;
            }
            else if(anteultimoImpar==0){
                anteultimoImpar=numeros;
            }
            else if(ultimoImpar==0){
                ultimoImpar=numeros;
            }
        }
    }
    cout<<"el primer impar es: "<<primerImpar<<endl;
    cout<< "El segundo impar es: "<<segundoImpar<<endl;
    cout<< "Elanteultio impar es: "<<anteultimoImpar<<endl;
    cout<< "El ultimo impar es: "<<ultimoImpar<<endl;
return 0;
}
