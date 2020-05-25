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
	int vector[10];
    int i;
    int suma=0;

	setlocale (LC_CTYPE, "Spanish");
	
	cout<<"Ingrese el vector: \n";
    for ( i = 0; i < 10; i++)
    {
        cin>>vector[i];
    }

    for ( i = 0; i < 10; i++)
    {
        
        if (vector[i]%2==0)
        {
            suma+=vector[i];
        }
        cout<<endl;
    }
    cout<<"La suma de los numeros pares del vector es de "<<suma<<"\n\n";
        	
	system("pause");
	return 0;
}