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
	int vector[25];
    int i;

	setlocale (LC_CTYPE, "Spanish");
	
	cout<<"Ingrese el vector: ";
    for ( i = 0; i <= 24; i++)
    {
        cin>>vector[i];
    }
    
    cout<<"Los primeros 15 valores del vector son: \n";
    for ( i = 0; i <= 14; i++)
    {
        cout<<vector[i];
        cout<<endl;
    }
        
	
	system("pause");
	return 0;
}
