#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.

*/
int main (){

int nota1,nota2,nota3,nota4;
cout<<"ingresar las 4 notas: "<<endl;
cin>>nota1;
cin>>nota2;
cin>>nota3;
cin>>nota4;

if(nota1>=7 && nota2>=7 && nota3>=7 && nota4>=7){
    cout<< "PORMOCION. "<<endl;
}
    else if(nota1>=4 && nota2>=4 && nota3>=4 && nota4>=4 || nota1>=4 && nota2>=4 && nota3>=4 ||nota2>=4 && nota3>=4 && nota4>=4 || nota1>=4 && nota4>=4 && nota3>=4 ||nota4>=4 && nota1>=4 && nota2>=4 ){
        cout<< "RINDE EXAMEN FINAL";
    }
        else if(nota1>=4 || nota2>=4 ||nota3>=4 || nota4>=4){
            cout<< "RECUPERA PARCIAL.";
        }
            else if(nota1<4 && nota2<4 &&nota3<4 &&nota4<4){
                cout<<"RECURSA LA MATERIA.";
            }


return 0;
}
