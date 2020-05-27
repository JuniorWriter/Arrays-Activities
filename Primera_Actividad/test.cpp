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
    int vector[100];
    int primo=0, size=100;
    int i=1,j=1;

    for ( i = 1; size >= i; i++)
    {
        for ( j = 1; i >= j; j++)
        {
            if (i%j==0)
            {
                primo++;
            }
            
        }

        if (primo==2)
        {
            vector[i]=i;
        }
        else
        {
            primo=0;
        }

        cout<<vector[i]<<" ";
        
    }

    

    cout<<"\n\n";    
    
	system("pause");
	return 0;
}
