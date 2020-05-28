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
	int size_vector,aux=0,comas=0;
	float vector[50];
    int i,j;

	setlocale (LC_CTYPE, "Spanish");
	
	cout<<"Ingrese el tamaño del vector: ";
    cin>>size_vector;

    cout<<"\nIngrese los números: \n";
    for ( i = 0; i < size_vector; i++)
    {
        cin>>vector[i];
    }
	cout<<"\n";

    for ( i = 0; i < size_vector; i++) //TODO: For para recorrer el vector desde el comienzo
    {
        for ( j = i+1; j < size_vector; j++) //TODO: For para recorrer el vector, un paso más que el anterior
        {
            if (vector[i]>vector[j]) //Comparamos si el número es mayor que el siguiente
            {
                aux=vector[i]; //TODO: Variable auxiliar para almacenar el valor del número mayor en el vector temporalmente
                vector[i]=vector[j]; // Sobrescribimos el valor en el siguiente
                vector[j]=aux; //Por último le damos el valor para el cambio de ordenamiento
            }
            
        }
        
    }

    for ( i = 0; i < size_vector; i++)
    {
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
    cout<<"\n\n";  
	
	system("pause");
	return 0;
}
