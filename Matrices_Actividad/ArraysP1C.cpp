
#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
	int f=0, c=0, i=0, j=0;
	int numeros[100][100], pares[100];
	int filas,columnas, suma=0;

	setlocale (LC_CTYPE,"Spanish");

	cout<<"Digite el número de filas: ";
	cin>>filas;
	cout<<"Digite el número de columnas: ";
	cin>>columnas;
	
    cout<<"\n";
	for( f=0; f < filas; f++) //TODO: Rellenar la matriz
	{
		for( c=0; c < columnas; c++)
		{
			cout<<"Digite un numero ["<<f<<"]["<<c<<"]: ";
			cin>>numeros[f][c];
            if (numeros[f][c]%2==0)
            {
                suma+=numeros[f][c];
                pares[j]=numeros[f][c];
                j++;

            }
            
		}
	} 
	
	cout<<"\n  MATRIZ.\n\n";
	
	for(f=0; f < filas; f++)
	{
		for(int c=0;c<columnas;c++)
		{
			cout<<"  "<<numeros[f][c]<<"   ";
		}
		cout<<"\n";
	}

    //------------------------------------------//

    cout<<"\n"<<"Los numeros pares son ";
    for ( i = 0; i < j; i++)
    {
        cout<<pares[i]<<", ";
    }

	cout<<"el resultado de la suma es "<<suma<<".\n\n";
	
	system("pause");
	return 0;
}
