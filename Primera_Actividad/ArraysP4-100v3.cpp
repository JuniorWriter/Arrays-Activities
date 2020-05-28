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
	int vector[100],size_vector=100;
    int i;
    int suma=0,contador=0;

	setlocale (LC_CTYPE, "Spanish");

    for ( i = 0; i < size_vector; i++)
    {

        vector[i]=i*2+2; //TODO: Empezar a contar desde 2 porque el 0 no es par.
        cout<<vector[i];
        suma+=vector[i]; //Acumulador para resultado de la suma.

        contador++; //TODO: Contador para poner comas hasta que llegue al penúltimo término.

        if (contador<size_vector) //TODO: si llega al último termino deja de poner comas.
        {
            cout<<", ";
        }
        else
        {
            cout<<".";
        }
        
    }
    cout<<"\n\nEl resultado de la suma de los 100 primeros números pares es "<<suma<<"\n\n";
    
	system("pause");
	return 0;
}
