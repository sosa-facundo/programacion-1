#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar tres n£meros y listar el m ximo de ellos
*/
int main (){
int n1,n2,n3;

cout<<"ingresar tres numeros para luego imprimir el maximo: "<< endl;
cin>>n1;
cout<<endl;
cin>>n2;
cout<<endl;
cin>>n3;
cout<<endl;

 if ( n1>=n2 && n1>=n3 ){ /// n1 es mayo a n2 y...... n1 es mayor a n3
    cout<<endl<<"el primer numero es el mayor. es decir " <<n1<< " es el mayor.";
 }
else if ( n2>=n3 && n2>=n1){
    cout<<endl<<"el segundo numero es el mayor. es decir " <<n2<< " es el mayor.";
}
else if (n3>=n1 && n3>=n2){
    cout<<endl<<"el tercer numero es el mayor. es decir " <<n3<< " es el mayor.";
}
return 0;
}
