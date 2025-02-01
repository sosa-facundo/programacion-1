#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar cinco n£meros y listar cuantos de esos cinco
n£meros son positivos, cuantos son negativos y cuantos son iguales a 0.
*/
int main(){

int n1,n2,n3,n4,n5,menorContador,ceroContador,mayorContador;
 menorContador=0;
 mayorContador=0;
 ceroContador=0;

 cout<<"ingresar los 5 numeros para saber cuantos negativos, positivos o cero hay: " <<endl;
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

if(n1<0){
    menorContador=menorContador+1;
}
else if(n1>0){
    mayorContador=mayorContador+1;
}
    else{
        ceroContador=ceroContador+1;
    }



if(n2<0){
    menorContador=menorContador+1;
}
else if(n2>0){
    mayorContador=mayorContador+1;
}
    else{
        ceroContador=ceroContador+1;
    }

if(n3<0){
    menorContador=menorContador+1;
}
else if(n3>0){
    mayorContador=mayorContador+1;
}
    else{
        ceroContador=ceroContador+1;
    }


 if(n4<0){
    menorContador=menorContador+1;
}
else if(n4>0){
    mayorContador=mayorContador+1;
}
    else{
        ceroContador=ceroContador+1;
    }


 if(n5<0){
    menorContador=menorContador+1;
}
else if(n5>0){
    mayorContador=mayorContador+1;
}
    else{
        ceroContador=ceroContador+1;
    }

cout<<"Hay " <<mayorContador<<" numeros positivos."<<endl;

cout<<"Hay " <<menorContador<<" numeros negativos."<<endl;

cout<<"Hay " <<ceroContador<<" numeros ceros."<<endl;
return 0;
}
