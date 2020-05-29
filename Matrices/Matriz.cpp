/*1. Hacer un programa para rellenar una matriz pidiendo al usuario el n�mero de filas
y columnas, Posteriormente mostrar la matriz en pantalla.*/

#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
	int f=0, c=0;
	float numeros[100][100];
	int filas,columnas;

	setlocale (LC_CTYPE,"Spanish");

	cout<<"Digite el número de filas: ";
	cin>>filas;
	cout<<"Digite el número de columnas: ";
	cin>>columnas;
	
	for( f=0; f < filas; f++) //TODO: Rellenando la matriz
	{
		for( c=0; c < columnas; c++)
		{
			cout<<"Digite un numero ["<<f<<"]["<<c<<"]: ";
			cin>>numeros[f][c];
		}
	} 
	
	cout<<"\nMATRIZ.\n\n";
	
	for(f=0; f < filas; f++)
	{
		for(int c=0;c<columnas;c++)
		{
			cout<<numeros[f][c];
		}
		cout<<"\n";
	}
	
	
	system("pause");
	return 0;
}
