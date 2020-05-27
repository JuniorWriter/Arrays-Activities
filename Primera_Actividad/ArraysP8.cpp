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
	float vector1[5], vector2[5];
    int i=0;

	setlocale (LC_CTYPE, "Spanish");
	
	cout<<"\nIngrese 5 números: \n";
    for ( i = 0; i < 5; i++)
    {
        cin>>vector1[i];
        vector2[i]=vector1[i]*2;
    }
    
    cout<<"_________________________________________________________\n\n";
    for ( i = 0; i < 5; i++)
    {
        cout<<vector2[i]<<endl;
    }
    cout<<"\n";
	
	system("pause");
	return 0;
}
