#include <iostream>
using namespace std;
/**Hacer un programa para que el usuario ingrese un n£mero positivo y que luego
se muestre por pantalla los n£meros entre el 1 y el n£mero ingresado por el
usuario. Ejemplo. Si el usuario ingresa 15, se mostrar n los n£meros entre el 1 y
el 15.*/
int main(){
    int contador=1;
    int numero;

    cout<<"Ingrese un numero positivo: "<<endl;
    cin>>numero;
    while (contador<=numero )
    {
        cout<<contador<<endl;
        contador++;
    }
return 0;
}
