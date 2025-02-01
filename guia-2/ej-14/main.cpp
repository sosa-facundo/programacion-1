#include <iostream>
using namespace std;
/**Hacer un programa para ingresar por teclado la fecha de nacimiento de una
persona, ingresando d¡a, mes y a¤o como 3 datos individuales. Luego ingresar
la fecha actual ingresando d¡a, mes y a¤o como 3 datos individuales.
 Calcular luego la edad en a¤os de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que los 19 reci‚n los cumple en
diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 d¡as para cumplir
los 19 a¤os.
*/
int main(){
int diaNacimiento, mesNacimiento, anoNacimiento, diaActual, mesActual, anoActual,anoPersonas;
cout<<"ingresar dia mes y a¤o DE NACIMIENTO."<<endl;
cin>>diaNacimiento;
cin>>mesNacimiento;
cin>>anoNacimiento;
cout<<"ingresar dia, mes y a¤o ACTUAL"<<endl;
cin>>diaActual;
cin>>mesActual;
cin>>anoActual;
anoPersonas=anoActual-anoNacimiento;

if (mesActual<mesNacimiento){
    anoPersonas=anoPersonas-1;
    if(mesActual==mesNacimiento && diaActual<diaNacimiento){
       anoPersonas=anoPersonas-1;
    }
}





cout<<endl<<anoPersonas;



return 0;
}
