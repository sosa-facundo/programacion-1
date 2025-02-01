#include <iostream>

using namespace std;
 /*Hacer un programa para ingresar por teclado dos n£meros y luego informar por
pantalla la diferencia entre ambos.
Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5.
Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
Importante: Verique que el programa emite SIEMPRE UN VALOR POSITIVO
porque la diferencia absoluta siempre es un valor positivo.*/
int main(){
int n1,n2,Final;
cout<< "ingrese el primer numero: ";
cin>> n1;
cout<< "ingrese el segundo numero: ";
cin>> n2;
 /*
if (n1>=0&&n2>=0){ ///     ( n1 positivo o 0 ) && ( n2 positivo o 0 ) && (2 numeros iguales positivos)
    if(n1>=n2){
        Final=n1-n2;
    }
    else{
        Final=n2-n1;
    }
}
if (n1<=0 && n2<=0){   /// (n1 negativo o 0) && (n2 negativo o 0)  && (2 numeros iguales negativos)
    if(n1<=n2){
        Final= n2-n1;
    }
    else{
        Final= n1-n2;
    }
}
if (n1<0 && n2>0){ /// n1 es negativo && n2 es positivo
    Final=n2-n1;
}
if (n1>0 && n2<0){ /// n1 es positivo && n2 es negativo
    Final=n1-n2;
}

*/
if (n1 >= n2){
    Final=n1-n2;
}
else{
    Final=n2-n1;
}
cout<<"la diferencia es de: "<< Final<< " numeros"<<endl;



return 0;
}
