#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
    float numeros[10], mayores[10];
    float suma=0, promedio, cant_mayor=0;
    int i, j=0;
    int opc, size_vector;

    setlocale (LC_CTYPE,"Spanish");

    do
    {
        j=0, suma=0, cant_mayor=0;
        system("cls");

        cout<<"Ingrese el tamaño del vector: ";
        cin>>size_vector;

        cout<<"\n";

        cout<<"Ingrese los "<<size_vector<<" números: \n";
        for ( i = 0; i < size_vector; i++)
        {
            cout<<"> ";cin>>numeros[i];
            suma+=numeros[i];
        }
        
        promedio=suma/size_vector;

        cout<<"\nEl promedio de los números ingresados es "<<promedio<<"\n\n";

        for ( i = 0; i < size_vector; i++)
        {
            if (numeros[i]>promedio)
            {
                mayores[j]=numeros[i];
                cant_mayor++;
                j++; 
            }
        }

        if ((cant_mayor>0)&&(cant_mayor<2))
        {
            cout<<cant_mayor<<" número superaró el promedio.\n\n";
        }
        else if (cant_mayor>1)
        {
            cout<<cant_mayor<<" números superaron el promedio.\n\n";
        }
        else
        {
            cout<<"Ningún número superó el promedio.\n\n";
        }
        

        for ( i = 0; i < cant_mayor; i++)
        {
            cout<<i+1<<". El número "<<mayores[i]<<" es mayor al promedio.\n\n";
        }
        
        
        /////////////////////////////////////////
        cout<<"------------------------------------------";
        cout<<"\n¿Desea repetir el programa?\n";
        cout<<"Si.......................[1]\n";
        cout<<"No.......................[2]\n";
        cin>>opc;

    } while (opc==1);
    cout<<"\n";

    system("pause");
    return 0;
}