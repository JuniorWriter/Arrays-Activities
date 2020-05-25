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
	float numeros[10],cantidad=10;
    float suma=0;

	setlocale (LC_CTYPE, "Spanish");
	
    cout<<"\nIngrese 10 números:\n";
    for (int i = 0; i < cantidad; i++)
    {
        cin>>numeros[i];
        suma+=numeros[i];
    }

	cout<<"\n\nEl promedio de los números es de "<<suma/cantidad<<"\n\n"; //Dividir entre la cantidad de terminos
	
	system("pause");
	return 0;
}
