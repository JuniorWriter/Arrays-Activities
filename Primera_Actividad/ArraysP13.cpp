#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int vector[50],size_vector=50;
    int i;
    int contador=0;

    for ( i = 0; i < size_vector; i++)
    {

        vector[i]=i*2+2; //TODO: Empezar a contar desde 2 porque el 0 no es par.
        cout<<vector[i];

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
    cout<<"\n\n";

	system("pause");
	return 0;
}
