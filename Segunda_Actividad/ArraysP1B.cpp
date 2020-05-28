#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
    float numeros[10], mayores[10];
    float suma=0, promedio;
    int i;
    int opc, size_vector;

    setlocale (LC_CTYPE,"Spanish");

    do
    {
        suma=0;
        
        cout<<"Ingrese el tamaño del vector: ";
        cin>>size_vector;

        cout<<"\n";

        cout<<"Ingrese los "<<size_vector<<" números: \n";
        for ( i = 0; i < size_vector; i++)
        {
            cin>>numeros[i];
            suma+=numeros[i];
        }
        
        promedio=suma/size_vector;

        cout<<"\nEl promedio de los números ingresados es "<<promedio<<"\n";

        for ( i = 0; i < size_vector; i++)
        {
            if (numeros[i]>promedio)
            {
                mayores[i]=numeros[i];
                cout<<"\nEl número "<<mayores[i]<<" es mayor al promedio.";
            }
        }
        
        /////////////////////////////////////////
        cout<<"\n\n¿Desea repetir el programa?\n";
        cout<<"Si.......................[1]\n";
        cout<<"No.......................[2]\n";
        cin>>opc;

    } while (opc==1);
    cout<<"\n";

    system("pause");
    return 0;
}