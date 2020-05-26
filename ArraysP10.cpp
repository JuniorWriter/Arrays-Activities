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
    int contador=0;

	setlocale (LC_CTYPE, "Spanish");

        for ( i = 0; i < size_vector; i++) 
        {
            vector[i]={i+1}; //TODO: Empezar a contar desde 1.
            cout<<vector[i];
            contador++; //TODO: Contador para poner comas hasta que llegue al último término.suma+=vector[i]; //Acumulador para resultado de la suma.

            if (contador<size_vector) //TODO: si llega al último termino deja de poner comas.
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
