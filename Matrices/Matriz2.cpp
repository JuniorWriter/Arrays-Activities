/*2. Realiza un programa que escriba un ciclo para que 
muestre la diagonal principal de la matriz.*/

#include <wchar.h>
#include <locale.h>
#include<iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	float aleatory;
	int c=0, f=0, filas, columnas;
	int numeros[100][100];

	srand(time(NULL));
	setlocale (LC_CTYPE,"Spanish");
	
	cout<<"MATRIZ\n";

	cout<<"\nIngrese el número de filas de su matriz: ";
	cin>>filas;

	cout<<"\n\nIngrese el número de columnas de su matriz: ";
	cin>>columnas;
	
	for(f=0; f<filas; f++)
	{
		for(c=0; c<columnas; c++)
		{
			aleatory=1 + rand()%(100);
			numeros[f][c]=aleatory;

			cout<<numeros[f][c]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\nDIAGONAL PRINCIPAL\n";
	
	for(f=0; f<filas; f++)
	{
		for(c=0; c<columnas; c++)
		{
			if(f==c)
			{
				cout<<numeros[f][c]<<endl;
			}
		}
	}
	
	cout<<"\n";
	
	system("pause");
	return 0;
}
