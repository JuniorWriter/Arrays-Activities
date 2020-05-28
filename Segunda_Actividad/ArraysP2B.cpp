/*2.Escribir un programa que llene un arreglo de 10 números enteros aleatorios
comprendidos entre 50 y 100, copie en otro arreglo esos números multiplicados
por 0,5 y muestre ambos arreglos.*/

#include <iostream>
#include <time.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
    float vector[10], vector2[10];
    int i;
    int aleatory=0, size_vector=10, comas=0;

    setlocale (LC_CTYPE,"Spanish");
    srand(time(NULL));

    for ( i = 0; i < size_vector; i++)
    {
        aleatory = 50 + rand ()%(50);
        vector[i] = aleatory;
        vector2[i] = vector[i] * 0.5;

        /////////////////////////////
        if (comas==0)
        {
            cout<<"Primer vector.\n";
        }
        
        cout<<vector[i];
        comas++;
        if (comas<size_vector)
        {
            cout<<", ";
        }
        else
        {
            cout<<".";
        }
        
    }

    cout<<"\n\n__________________________________________________\n\n";
    comas=0;

    for ( i = 0; i < size_vector; i++)
    {
        if (comas==0)
        {
            cout<<"Segundo Vector.\n";
        }

        cout<<vector2[i];
        comas++;
        if (comas<size_vector)
        {
            cout<<", ";
        }
        else
        {
            cout<<".";
        }
        
    }
    

    cout<<"\n\n";

    system("pause");
    return 0;
}