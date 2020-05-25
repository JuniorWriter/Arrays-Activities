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
	float numeros[10];
    float suma=0;

	setlocale (LC_CTYPE, "Spanish");
	
    cout<<"\nIngrese 10 números:\n";
    for (int i = 0; i < 10; i++)
    {
        cin>>numeros[i];
        suma+=numeros[i];
    }

	cout<<"\n\nEl promedio de los números es de "<<suma/10<<"\n\n";
	
	system("pause");
	return 0;
}
