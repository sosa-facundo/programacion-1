#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar tres n£meros diferentes y determinar e
informar el n£mero del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8
*/
int main(){

int n1,n2,n3, medio;

cout<<"informar el numero del medio"<<endl;
cin>> n1;
cout<<endl;
cin>> n2;
cout<<endl;
cin>> n3;
cout<<endl;

if(n1>n2 && n1<n3 || n1<n2 && n1>n3){
    medio=n1;
}
if(n2>n3 && n2<n1 || n2<n3 && n2>n1){
    medio=n2;
}
if (n3>n1 && n3<n2 || n3<n1 && n3>n2){
    medio=n3;
}

cout<<endl<<"el numero del medio es "<< medio;

return 0;
}
