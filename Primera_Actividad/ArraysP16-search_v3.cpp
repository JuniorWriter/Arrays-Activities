#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <stdio.h>

using namespace std;

int main()
{
	float vector[20];
    int i, j; int g;
    int buscador=0,comas=0,exist=0;
    int aleatory,size_vector=20;

    srand(time(NULL));
	setlocale (LC_CTYPE, "Spanish");
    
    cout<<"\n\t\t\t\tBUSCAR NÚMERO.\n\n";

    for ( i = 0; i < size_vector; i++)
    {
        g=i;
        aleatory=1 + rand()%(100);
        for (j=0; j<=g; j++)
        {
            if (aleatory==vector[j])
            {
                g-=g;
                i--;
            }
            while ((g==i)&&(aleatory!=vector[j])&&(j==i))
            {
                vector[i]=aleatory;
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
    cout<<"BUSCAR VALOR.\n-Ingrese una posición [0-19]: ";
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
        system("cls");
        system("color 4");
        cout<<"\nEl número no se encuentre en el vector.\n\n";
    }

	system("pause");
	return 0;
}
