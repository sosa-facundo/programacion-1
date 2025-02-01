#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar cinco n£meros y listar el m ximo y el m¡nimo
de ellos.
*/
int main(){
int n1, n2, n3, n4, n5, maximo;

cout<<"ingresar los 5 numeros: "<< endl;
cin>>n1;
cout<<endl;
cin>>n2;
cout<<endl;
cin>>n3;
cout<<endl;
cin>>n4;
cout<<endl;
cin>>n5;
cout<<endl;

if(n1>=n2){
    maximo=n1;
}
else{
    maximo=n2;
}
if (n3>=maximo){
    maximo=n3;
}
if (n4>=maximo){
    maximo=n4;
}
if (n5>=maximo){
    maximo=n5;
}


cout<<maximo<<endl;
return 0;
}
