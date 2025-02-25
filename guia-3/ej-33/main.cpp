#include <iostream>
using namespace std;
/**Hacer un programa para ingresar una lista de 13 n£meros enteros. Se pide
luego determinar e informar:
A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en
forma creciente.
Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el
programa detectar  una terna de positivos consecutivos (10, 5, 4) y una terna de
negativos consecutivos ordenados (-8, -3, -1)
Nota: Si el n£mero ingresado es cero, no se lo considera ni negativo ni positivo.
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada
crecientemente.*/
int main ()
{
    int numeros;
    int ultimo=0;
    int anteUltimo=0;
    int antePenultimo=0;
    int contadorPositivos=0;
    int contadorNegativos=0;
    cout<< "ingrese 13 numeros.. "<<endl;
    for (int i=1 ; i<=13 ; i++)
    {
        cin>>numeros;
        if(ultimo>0 && anteUltimo>0 && antePenultimo>0)
        {
            contadorPositivos=contadorPositivos+1;
        }
        if (ultimo<0 && anteUltimo<0 && antePenultimo<0)
        {
            if (antePenultimo<anteUltimo &&anteUltimo < ultimo)
            {
                contadorNegativos=contadorNegativos+1;
            }
        }

        antePenultimo=anteUltimo;
        anteUltimo=ultimo;
        ultimo=numeros;
    }

    cout<<"terna positivos consecutivos: " << contadorPositivos<<endl;
    cout<<  " Terna negativos ordenados de forma creciente : "<<contadorNegativos<<endl;
return 0;
}
