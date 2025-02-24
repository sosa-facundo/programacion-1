#include <iostream>
using namespace std;
/**Se dispone de la informaci¢n de los £ltimos 19 partidos del futbolista Diego
Armando Laradona. Por cada partido se registr¢:
- N£mero de partido
- Minutos jugados
- Tarjetas amarillas
- Tarjetas rojas
- Goles
Existe un registro para cada partido. Los mismos se encuentran ordenados por
n£mero de partido. Se pide calcular e informar:
A) La cantidad de partidos que no jug¢ (partidos con minutos igual a cero)*
B) La cantidad de partidos que jug¢ por completo (minutos >= 90)*
C) El promedio de tarjetas recibidas por partido.*
D) El n£mero de partido en el que haya convertido mayor cantidad de goles.
Indicar tambi‚n los goles convertidos.
E) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor
cantidad de partidos consecutivos en los que haya convertido.
*/
int main (){
    int contadorPartidosCompletos=0;
    int contadorPartidosNoJugados=0;
    int minutosJugados;
    int cantidadTarjetas;
    int contadorTarjetas=0;
    int goles;
    int PartidoMasGoles;
    int masGoles;
    int rachaGoles=0;
    int rachaGolesGuardar=0;
    int promedioTarjetas;
    for (int i=1;i<=19;i++){
        cout<<" Informar cantidad de minutos jugados por partidos, si no se jugo ingresar [0]: "<<endl;
        cin>> minutosJugados;
        if(minutosJugados>=90){
            contadorPartidosCompletos=contadorPartidosCompletos+1;
        }
        if(minutosJugados==0){
            contadorPartidosNoJugados=contadorPartidosNoJugados+1; ///partidos cancelados
        }
        ///Cantidad total de tarjetas
        cout<<" Cuantas tarjetas amarillas y rojas recibieron en este partido? : "<<endl;
        cin>>cantidadTarjetas;
        contadorTarjetas=contadorTarjetas+cantidadTarjetas;
        ///PARTIDO CON MAS GOLES
        cout<<" Indicar cantidad de goles del partido: " <<endl;
        cin>>goles;
        if(i==1){
            masGoles=goles;
            PartidoMasGoles=i;
        }
        else if(goles>masGoles){
            masGoles=goles;
            PartidoMasGoles=i;
        }
        /// MAYOR RACHA GOLES
        if (goles>0){
            rachaGoles+=1;
        }
        else if(rachaGoles>rachaGolesGuardar){
            rachaGolesGuardar=rachaGoles;
            rachaGoles=0;
        }
    }

    if(rachaGoles>rachaGolesGuardar){
        rachaGolesGuardar=rachaGoles;
    }
    promedioTarjetas=contadorTarjetas/19;



    cout<< " Partido que se jugo mas de 90minutos = "<<contadorPartidosCompletos<<endl;
    cout<< " La cantidad de partidos que no jug¢ (partidos con minutos igual a cero)= "<<contadorPartidosNoJugados<<endl;
    cout<< " promedio de tarjetas por partido = "<< promedioTarjetas<<endl;
    cout<< " Partido con mas goles = "<<PartidoMasGoles<<"ø"<<endl;
    cout<< "racha de partidos concecutivos con goles = "<<rachaGolesGuardar<<endl;


return 0;
}
