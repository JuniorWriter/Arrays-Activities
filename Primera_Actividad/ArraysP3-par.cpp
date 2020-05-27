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
    int suma=0,contador=0;

	setlocale (LC_CTYPE, "Spanish");
	
	cout<<"\nIngrese el vector: \n";
    for ( i = 0; i < 10; i++)
    {
        cin>>vector[i];
    }
    
    cout<<"\nLos valores en posiciones pares del vector son: \n";
    for ( i = 2; i < 10; i+=2)
    {
        cout<<vector[i];
        contador+=2;

        if (contador<8)
        {
            cout<<" + ";
        }

        suma+=vector[i];
    }
    cout<<" = "<<suma<<"\n\n";
        
	
	system("pause");
	return 0;
}
