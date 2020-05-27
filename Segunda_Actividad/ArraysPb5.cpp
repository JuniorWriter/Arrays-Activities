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
	int vector[50],size=50;
    int i;
    int suma=0,comas=0;

	setlocale (LC_CTYPE, "Spanish");
	
	cout<<"Ingrese los datos del vector [10-99]: \n";
    for ( i = 0; i < size; i++)
    {   
        cin>>vector[i];
        if ((vector[i]<10)||(vector[i]>99))
        {
            do
            {
                cout<<"El valor está fuera del límite.\n";
                cin>>vector[i];
            } while ((vector[i]<10)||(vector[i]>99));
        }
        else
        {
            suma+=vector[i];
        }  
           
    }

    cout<<"\n\n";

    for ( i = 0; i < size; i++)
    {
        cout<<vector[i];
        comas++;
        if (comas<size)
        {
            cout<<", ";
        }
        else
        {
            cout<<".";
        }
    }
    
    
    cout<<"\n\nLa suma de los números del vector es de "<<suma<<"\n\n";
    cout<<"El promedio del vector es "<<suma/size<<"\n\n";
        	
	system("pause");
	return 0;
}