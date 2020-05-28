#include <iostream>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    int num;
    int i=1, j=1;
    int divisores=0, contador=0, size=100;

    do
    {
        divisores=0;
        cout<<"Ingrese un número (25): ";
        cin>>num;
        for ( i = 1; i <= num+1; i++)
        {
            if (num%i==0)
            {
                divisores++;
            }
            
        }
        cout<<"\n\n";

        if ((divisores<=2)&&(num>1))
        {
            cout<<"Número primo!";
        }
        else
        {
            cout<<"Una polla";
        }
        
        cout<<"\n\n";

    }while(num!=0);

    system("pause");
    return 0;
}