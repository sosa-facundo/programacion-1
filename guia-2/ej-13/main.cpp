#include <iostream>
using namespace std;
/**Hacer un programa para ingresar tres n£meros distintos y listarlos ordenados
de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ¢ N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ¢ N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ¢ N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.*/

int main(){

int n1, n2,n3,menor,mayor,medio;
cin>>n1;
cin>>n2;
cin>>n3;

if (n1>n2 && n2>n3 || n1>n3 && n3>n2){
     if(n1>n2 && n2>n3){
        mayor=n1;
        medio=n2;
        menor=n3;
    }
    else{
        mayor=n1;
        medio=n3;
        menor=n2;
    }
}
if (n2>n3 && n3>n1 || n2>n1 && n1>n3){
    if(n2>n3 && n3>n1){
        mayor=n2;
        medio=n3;
        menor=n1;
    }
    else{
        mayor=n2;
        medio=n1;
        menor=n3;
    }
}
if (n3>n1 && n1>n2 || n3>n2 && n2>n1){
    if (n3>n1 && n1>n2){
        mayor=n3;
        medio=n1;
        menor=n2;
    }
    else{
        mayor=n3;
        medio=n2;
        menor=n1;
    }
}




cout<<" menor = " <<menor;
cout<< " medio = "<<medio;
cout<<" mayor = " <<mayor;

cout<<endl;




return 0;
}
