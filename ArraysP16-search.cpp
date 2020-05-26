#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
	int vector[100],size_vector=0;
    int i;
    int buscador=0,contador=0,exist=0;

	setlocale (LC_CTYPE, "Spanish");

    cout<<"\nIngrese el tamaño del vector: ";
    cin>>size_vector;

    cout<<"\nIngrese "<<size_vector<<" números: \n";
    for ( i = 0; i < size_vector; i++)
    {
        cin>>vector[i];
    }

    cout<<"\n\n";
    cout<<"BUSCAR VALOR.\n-Ingrese una posición: ";
    cin>>buscador;

    for ( i = 0; i < size_vector; i++)
    {
        vector[i];
        if ((buscador<size_vector)&&(buscador>=0))
        {
            exist=1;
        }
        
    }

    if (exist==1)
    {
        cout<<"\nEl número es: "<<vector[buscador]<<"\n";
    }
    else
    {
        cout<<"\nEl número no se encuentre en el vector.\n\n";
    }

    

	system("pause");
	return 0;
}
