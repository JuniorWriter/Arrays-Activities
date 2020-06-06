/*	Author: Andrés Felipe Galván
	Date: 03/06/2020
	Description: Programa que genera e imprime una matriz unitaria de orden N.
    Una matriz unitariade orden N es la que tiene N filas y N columnas con todas
    sus componentes a 0, exceptolas de su diagonal principal que están a 1.
*/

#include <wchar.h>
#include <locale.h>
#include<iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	int c=0, f=0, filas, columnas;
	int numeros[100][100];

	setlocale (LC_CTYPE,"Spanish");
	
	cout<<"MATRIZ\n";

	cout<<"\nIngrese orden de la matriz: ";
	cin>>filas;

	columnas=filas;
	cout<<"\n";


	for(f=0; f<filas; f++)
	{
		for(c=0; c<columnas; c++)
		{
			if(f==c)
			{
				numeros[f][c]=1;
			}
            else
            {
                numeros[f][c]=0;
            }
            cout<<"\t"<<numeros[f][c];
            
		}
		cout<<"\n";
	}

	cout<<"\n";
	system("pause");
	return 0;
}
