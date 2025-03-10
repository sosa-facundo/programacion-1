#include <iostream>
using namespace std;
/**Hacer un programa que contenga un men£ con el siguiente formato:
Men£ principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a cent¡metros
3 - Convertir a kil¢metros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa
Ingrese opci¢n:
Al ingresar a la opci¢n 1, nos pedir  una medida (float) en metros que con las
siguientes opciones del men£ podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo
desee y s¢lo finalizar  al ingresar a la opci¢n 0.*/
int main (){
    int opcionElegida;
    float medidaMetro;
    float valorEnCentimetros;
    float valorEnKilometros;
    float valorEnPulgadas;
    float valorEnMedidasPies;

    do
    {
        system("cls");
        cout<<"Men£ principal                "<<endl;
        cout<<"----------------------------- "<<endl;
        cout<<"1 - Ingresar medida en metros "<<endl;
        cout<<"2 - Convertir a cent¡metros   "<<endl;
        cout<<"3 - Convertir a kil¢metros    "<<endl;
        cout<<"4 - Convertir a pulgadas      "<<endl;
        cout<<"5 - Convertir a pies          "<<endl;
        cout<<"----------------------------- "<<endl;
        cout<<"0 - Salir del programa        "<<endl;
        cin>>opcionElegida;
    }
    while (opcionElegida<0 && opcionElegida>5);

    switch (opcionElegida)
    {
        case 0:
            return 0;
        case 1:
            cout<<"Ingresar medidas en metro: "<<endl;
            cin>>medidaMetro;
            do
            {
                system("cls");
                cout<<"Men£ principal                "<<endl;
                cout<<"----------------------------- "<<endl;
                cout<<"1 - Ingresar medida en metros "<<endl;
                cout<<"2 - Convertir a cent¡metros   "<<endl;
                cout<<"3 - Convertir a kil¢metros    "<<endl;
                cout<<"4 - Convertir a pulgadas      "<<endl;
                cout<<"5 - Convertir a pies          "<<endl;
                cout<<"----------------------------- "<<endl;
                cout<<"0 - Salir del programa        "<<endl;
                cin>>opcionElegida;
            }
            while (opcionElegida<0 && opcionElegida>5);
                switch (opcionElegida)
    {
        case 0:
            return 0;
        case 1:
            cout<<"Ingresar medidas en metro: "<<endl;
            cin>>medidaMetro;
            do
            {
                system("cls");
                cout<<"Men£ principal                "<<endl;
                cout<<"----------------------------- "<<endl;
                cout<<"1 - Ingresar medida en metros "<<endl;
                cout<<"2 - Convertir a cent¡metros   "<<endl;
                cout<<"3 - Convertir a kil¢metros    "<<endl;
                cout<<"4 - Convertir a pulgadas      "<<endl;
                cout<<"5 - Convertir a pies          "<<endl;
                cout<<"----------------------------- "<<endl;
                cout<<"0 - Salir del programa        "<<endl;
                cin>>opcionElegida;
            }
            while (opcionElegida<0 && opcionElegida>5);
                    case 1:
                        cout<<"Ingresar medidas en metro: "<<endl;
                        cin>>medidaMetro;
                        break;
                    case 2:
                        valorEnCentimetros=medidaMetro*100;
                        cout<<"La medida en metros de: "<<medidaMetro<<". Son en centimetros: "<<valorEnCentimetros<<endl;
                        break;
                    case 3:
                        valorEnKilometros=medidaMetro/1000;
                        cout<<"La medida en metros de: "<<medidaMetro<<". Son en kilometros: "<<valorEnKilometros<<endl;
                        break;
                    case 4:
                        valorEnPulgadas=medidaMetro*39.3701;
                        cout<<"La medida en metros de: "<<medidaMetro<<". Son en pulgadas: "<<valorEnPulgadas<<endl;
                        break;
                    case 5:
                        valorEnMedidasPies=medidaMetro*3.28084;
                        cout<<"La medida en metros de: "<<medidaMetro<<". Son en centimetros: "<<valorEnMedidasPies<<endl;
                        break;
                }
            break;
        case 2:
            valorEnCentimetros=medidaMetro*100;
            cout<<"La medida en metros de: "<<medidaMetro<<". Son en centimetros: "<<valorEnCentimetros<<endl;
            break;
        case 3:
            valorEnKilometros=medidaMetro/1000;
            cout<<"La medida en metros de: "<<medidaMetro<<". Son en kilometros: "<<valorEnKilometros<<endl;
            break;
        case 4:
            valorEnPulgadas=medidaMetro*39.3701;
            cout<<"La medida en metros de: "<<medidaMetro<<". Son en pulgadas: "<<valorEnPulgadas<<endl;
            break;
        case 5:
            valorEnMedidasPies=medidaMetro*3.28084;
            cout<<"La medida en metros de: "<<medidaMetro<<". Son en centimetros: "<<valorEnMedidasPies<<endl;
            break;
    }
return 0;
}
