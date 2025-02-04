#include <iostream>
using namespace std;
/*
 Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
calcular e informar:
- La cantidad de personas mayores a 30 años que midan más de 1.8
metros.
- El promedio de altura de las personas mayores a 30 años.
- La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
- La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/

int main(){

int edad1,edad2,edad3,edad4,edad5,mayores30altura180,contadorMayores30,cantidadPersonaAltura,contador203040;
float altura1,altura2,altura3,altura4,altura5,alturaPromedioMayores30,promedioFinalAlturasde30;
contadorMayores30=0;
mayores30altura180=0;
alturaPromedioMayores30=0;
cantidadPersonaAltura=0;
contador203040=0;
cout<< "ingresar la edad de la 1er persona: "<<endl;
cin>> edad1;
cout<< "ingresar la altura de la 1er persona [utilizando un (.)en vez de la (,)para demarcar los centimetros]: "<<endl;
cin>>altura1;
cout<<endl <<endl<<"ingresar la edad de la 2da persona: "<<endl;
cin>> edad2;
cout<< "ingresar la altura de la 2da persona[utilizando un (.)en vez de la (,)para demarcar los centimetros]: "<<endl;
cin>>altura2;
cout<< endl <<endl<<"ingresar la edad de la 3er persona: "<<endl;
cin>> edad3;
cout<< "ingresar la altura de la 3er persona[utilizando un (.)en vez de la (,)para demarcar los centimetros]: "<<endl;
cin>>altura3;
cout<< endl <<endl<<"ingresar la edad de la 4ta persona: "<<endl;
cin>> edad4;
cout<< "ingresar la altura de la 4ta persona[utilizando un (.)en vez de la (,)para demarcar los centimetros]: "<<endl;
cin>>altura4;
cout<<endl <<endl<< "ingresar la edad de la 5ta persona: "<<endl;
cin>> edad5;
cout<< "ingresar la altura de la 5ta persona[utilizando un (.)en vez de la (,)para demarcar los centimetros]: "<<endl;
cin>>altura5;
///LOS MAYORES A 30 AÑOS Y QUE MIDEN MÁS A 1.80cm.
if(edad1>30&& altura1>1.80 ){
    mayores30altura180=mayores30altura180+1;
}
if(edad2>30&& altura2>1.80 ){
    mayores30altura180=mayores30altura180+1;
}
if(edad3>30&& altura3>1.80 ){
    mayores30altura180=mayores30altura180+1;
}
if(edad4>30&& altura4>1.80 ){
    mayores30altura180=mayores30altura180+1;
}
if(edad5>30&& altura5>1.80 ){
    mayores30altura180=mayores30altura180+1;
}
///LOS MAYORES A 30 AÑOS, HACERLE UN PROMEDIO DE LA ALTURA DE TODOS ELLOS.
if(edad1>30){
    alturaPromedioMayores30=alturaPromedioMayores30+altura1;
    contadorMayores30=contadorMayores30+1;
}
if(edad2>30){
    alturaPromedioMayores30= alturaPromedioMayores30+altura2;
    contadorMayores30=contadorMayores30+1;
}
if (edad3>30){
    alturaPromedioMayores30=alturaPromedioMayores30+altura3;
    contadorMayores30=contadorMayores30+1;
}
if (edad4>30){
    alturaPromedioMayores30=alturaPromedioMayores30+altura4;
    contadorMayores30=contadorMayores30+1;
}
if (edad5>30){
    alturaPromedioMayores30=alturaPromedioMayores30+altura5;
    contadorMayores30=contadorMayores30+1;
}
///PREGUNTO SI  contadorMayores30 == 0.

if (contadorMayores30>0){
    promedioFinalAlturasde30=alturaPromedioMayores30/contadorMayores30;
    cout<<endl<<"El promedio de altura de las personas mayores a 30 anios es de= "<<promedioFinalAlturasde30<<endl;
}
else{
    cout<<endl<<"El promedio de altura de las personas mayores a 30 anios es de= NO EXISTEN MAYORES DE 30 ANIOS EN LA LISTA ES 0"<<endl<<endl;
}




///CANTIDAD DE PERSONA CON ALTURA ENTRE 1.70 y 1.80 (AMBOS INCLUSIVE)
if(altura1>=1.70 && altura1<=1.80){
    cantidadPersonaAltura=cantidadPersonaAltura+1;
}
if(altura2>=1.70 && altura2<=1.80){
    cantidadPersonaAltura=cantidadPersonaAltura+1;
}
if(altura3>=1.70 && altura3<=1.80){
    cantidadPersonaAltura=cantidadPersonaAltura+1;
}
if(altura4>=1.70 && altura4<=1.80){
    cantidadPersonaAltura=cantidadPersonaAltura+1;
}
if(altura5>=1.70 && altura5<=1.80){
    cantidadPersonaAltura=cantidadPersonaAltura+1;
}

if(edad1==20||edad1==30||edad1==40){
    contador203040=contador203040+1;
}

if(edad2==20||edad2==30||edad2==40){
    contador203040=contador203040+1;
}

if(edad1==20||edad1==30||edad1==40){
    contador203040=contador203040+1;
}

if(edad3==20||edad3==30||edad3==40){
    contador203040=contador203040+1;
}

if(edad4==20||edad4==30||edad4==40){
    contador203040=contador203040+1;
}

if(edad5==20||edad5==30||edad5==40){
    contador203040=contador203040+1;
}
cout<<endl<<"cantidad de personas cuya edad sea de 20, 30 o 40 anios= "<<contador203040<<endl;
cout<<endl<<"CANTIDAD DE PERSONA CON ALTURA ENTRE 1.70 y 1.80 (AMBOS INCLUSIVE)= "<<cantidadPersonaAltura<<endl;
cout<<endl<<"La cantidad de personas mayores a 30 anios y con altura mayor a 1.80 cm.= "<<mayores30altura180<<endl;


return 0;
}
