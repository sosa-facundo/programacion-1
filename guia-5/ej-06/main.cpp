#include <iostream>
using namespace std;
/***Hacer un programa que le pida al usuario ingresar un n£mero positivo llamado
 N. Luego, el programa debe listar todos los n£meros primos que hay entre el
 n£mero 2 y N**/
int main(){
    int n;
    int contador=0;

    cout<<"Ingresar un numero positivo: "<<endl;
    cin>> n;
    for (int i=2; i<=n;i++)
        {
            for(int y=1; y<=i;y++)
            if(i%y==0)
            {
                contador=contador+1;
            }
            if(contador==2)
            {
                cout<<i<<endl;
            }
            contador=0;
        }



return 0;
}
