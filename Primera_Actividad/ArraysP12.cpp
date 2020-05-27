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
    int primos[100];
    int i=1, j=1;
    int divisores=0, contador=0, comas=0, size=100;

    for ( i = 2; size >= i; i++)
    {
        for (j = 2; i >= j; j++)
        {
            if (i%j==0)
            {
                divisores++;
            }
            
        }

        if (divisores<=2)
        {
            primos[contador]=i;
            contador++;
        }
        else
        {
            divisores=0;
        }  
        
    }

    cout<<"\n\n";
    
    for ( i = 0; i < contador; i++)
    {
        cout<<primos[i];
        comas++;

        if(comas<contador)
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