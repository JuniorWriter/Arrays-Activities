/*4.Un programa que recibe desde el teclado n números positivos los
cuales se guardan en un vector; se debe hallar la cuenta de los
números múltiplos de 5.*/

#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
    int vector[100],multiplos[100];
    int i, j=0;
    int cant_multiplo=0,size_vector=0, variable=8;

    setlocale(LC_CTYPE,"Spanish");

    cout<<"Ingrese el tamaño del vector: ";
    cin>>size_vector;

    cout<<"\nIngrese "<<size_vector<<" números:\n";
    for ( i = 0; i < size_vector; i++)
    {
        cout<<"> ";cin>>vector[i];
        
        if (vector[i]%variable==0)
        {
            multiplos[j]=vector[i];
            cant_multiplo++;
            j++;
        }   
        
    }

    cout<<"\n";

    for ( i = 0; i < cant_multiplo; i++)
    {
        cout<<"El "<<multiplos[i]<<" es multiplo de "<<variable<<endl;
    }
    
    cout<<"\nLos cantidad de múltiplos de "<<variable<<" es de "<<cant_multiplo<<"\n\n";

    system("pause");
    return 0;
}