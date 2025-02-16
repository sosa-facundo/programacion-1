#include <iostream>
using namespace std;
/**Una estaci¢n meteorol¢gica registr¢ una muestra clim tica de los £ltimos 15
d¡as. Por cada d¡a registr¢:
- N£mero de d¡a (entero)
- Temperatura (float)
- Mil¡metros de lluvia (float)
- Visibilidad en km (float)
Hay un registro por cada d¡a. La informaci¢n se encuentra ordenada por d¡a. Se
pide calcular e informar:
- El n£mero del d¡a que se haya registrado la temperatura m xima.
- La amplitud t‚rmica de todo el per¡odo.
- La cantidad de d¡as con neblina.
- Mostrar "Quincena lluviosa" si hubo m s d¡as de lluvia que d¡as sin lluvia.
Mostrar "Quincena h£meda" si llovi¢ en al menos un tercio de los d¡as.
De lo contrario mostrar "Quincena seca".
NOTA: La amplitud t‚rmica es la diferencia entre la temperatura m xima y la
temperatura m¡nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.*/
int main(){

    int dia;
    float temperatura;
    float temperaturaMaxima;
    float lluvia;
    float neblina;
    float amplitudTermica=0;
    int contadorNeblina=0;
    int contadorLluvia=0;

    for(int i=1;i<=15;i++){
        cout<<endl<<"ingresar temperatura del dia "<< i<<": "<<endl;
        cin>>temperatura;
        if(i==1){
            temperaturaMaxima=temperatura;
        }
        if(temperatura>temperaturaMaxima){
            temperaturaMaxima=temperatura;
        }

        amplitudTermica=amplitudTermica+temperatura;

        cout<<"Ingrese los km. que hubo en el dia de neblina: "<<endl;
        cin>>neblina;
        if(neblina>=2){
            contadorNeblina=contadorNeblina+1;
        }
        cout<<"ingresar milimetros de lluvia: "<<endl;
        cin>>lluvia;
        if(lluvia>0){
            contadorLluvia=contadorLluvia+1;
        }
    }
    if(contadorLluvia>=8){
        cout<<"Quincena lluviosa"<<endl;
    }
    else if (contadorLluvia>=5){
        cout<<"Quincena humeda"<<endl;
    }
    else{
        cout<<"Quincena seca"<<endl;
    }
    amplitudTermica=amplitudTermica/15;



    cout<<"El n£mero del d¡a que se haya registrado la temperatura m xima es : "<<temperaturaMaxima<<endl;
    cout<<"La amplitud t‚rmica de todo el per¡odo : "<<amplitudTermica<<endl;
    cout<<"La cantidad de d¡as con neblina mayor a 2 mtrs.: "<<contadorNeblina<<endl;
    cout<<"Hubo "<< contadorLluvia<<" con Lluvia."<<endl;


return 0;
}
