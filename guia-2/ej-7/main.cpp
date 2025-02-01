#include <iostream>
using namespace std;
/**Hacer un programa para ingresar por teclado tres n£meros e informar con una
leyenda aclaratoria si los tres son todos distintos entre s¡, caso contrario no
emitir nada.
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no signica que A
y C sean distintos. Ejemplo: A=8, B=6 y C=8.
*/
int main(){
 int n1,n2,n3;
 cout<<"ingresar tres numeros: "<< endl;
 cin>>n1;
 cout<<endl;
 cin>>n2;
 cout<<endl;
 cin>>n3;
 cout<<endl<<endl<<endl;

 if(n1!=n2 && n2!=n3 && n3!=n1){
    cout<<endl<<"son todos distintos entre s¡...";
 }
 else{
    cout<<endl<<"hay alguno igual a otro...";
 }
 cout<<endl<<endl<<endl<<endl<<endl<<endl;


return 0;
}
