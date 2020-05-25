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
	int size_vector;
	float vector1[50],vector2[50],vector3[50],aux=0;
    int i,j;

	setlocale (LC_CTYPE, "Spanish");
	
	cout<<"Ingrese el tamaño del vector: ";
    cin>>size_vector;

    cout<<"\nIngrese los números: \n";
    for ( i = 0; i < size_vector; i++)
    {
        cin>>vector1[i];
        vector2[i]=vector1[i]; //TODO: copiamos los valores del primer vector al segundo
        vector3[i]=vector2[i]*2;
        //TODO: multiplicamos los valores por 2 y lo almacenamos en el tercero
    }
	cout<<"\n";

    //Organizar el vector de menor a mayor.
    for ( i = 0; i < size_vector; i++)
    {
        for ( j = i+1; j < size_vector; j++)
        {
            if (vector3[i]>vector3[j])
            {
                aux=vector3[i];
                vector3[i]=vector3[j];
                vector3[j]=aux;
            }
            
        }
        
    }

    //////////////////////////////////
    for ( i = 0; i < size_vector; i++)
    {
        cout<<vector3[i]<<" ";
    }
    cout<<"\n";  
	
	system("pause");
	return 0;
}
