#include <iostream>
using namespace std;
/**
Hacer un programa para que el usuario ingrese dos n£meros y luego el
programa muestre por pantalla los n£meros entre el menor y el mayor de
ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrar n los n£meros entre el 3 y el 15
y si el usuario ingresa 25 y 8, se mostrar n los n£meros entre el 8 y el 25.
*/
int main(){
    int num1;
    int num2;

    cout<<"ingrese el primer numero: "<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero: "<<endl;
    cin>>num2;

    if(num1>=num2){
        for(int i=num2;i<=num1;i++)
            cout<<i<<endl;
    }
    if(num2>=num1){
        for(int i=num1;i<=num2;i++)
            cout<<i<<endl;
    }
return 0;
}
