#include <iostream>
using namespace std;
/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.
*/

int main(){

string marca1, marca2, marca3;
int cantidad1, cantidad2, cantidad3;
float porcentaje1, porcentaje2, porcentaje3;

cout<< "ingrese el nombre de la marca 1ø: ";
cin>> marca1;
cout<< "ingrese el nombre de la marca 2ø: ";
cin>> marca2;
cout<< "ingrese el nombre de la marca 3ø: ";
cin>> marca3;
cout<< endl<<endl<<"cuantos alfajores vendio " << marca1<< " en este periodo : ";
cin>> cantidad1;
cout<< "cuantos alfajores vendio " << marca2<< " en este periodo : ";
cin>> cantidad2;
cout<< "cuantos alfajores vendio " << marca3<< " en este periodo : ";
cin>> cantidad3;

porcentaje1= (cantidad1*100)/(float)(cantidad1+cantidad2+cantidad3);
porcentaje2= (cantidad2*100)/(float)(cantidad1+cantidad2+cantidad3);
porcentaje3= (cantidad3*100)/(float)(cantidad1+cantidad2+cantidad3);
cout<< endl<< "el porcentaje de " <<marca1 << " es de un " <<porcentaje1 <<"% vendidos sobre el total de las marcas vendidas."<<endl;
cout<< endl<< "el porcentaje de " <<marca2 << " es de un " <<porcentaje2 <<"% vendidos sobre el total de las marcas vendidas."<<endl;
cout<< endl<< "el porcentaje de " <<marca3 << " es de un " <<porcentaje3 <<"% vendidos sobre el total de las marcas vendidas."<<endl;

return 0;
}
