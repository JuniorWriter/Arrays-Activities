/*Author: Andrés Felipe Galván
	Date: 02/06/2020
	Description:Que rellene una matrizcon los 100 primeros números pares y muestre su suma.
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
//shortcuts
#define ERROR system("color 4")
#define CLEAR system("cls")
#define PAUSE system("pause")
#define SPACE getch();
#define JUMP cout<<"\n";

using namespace std;

int main()
{
    int matriz[50][50];
    int suma=0;
    int filas=10, columnas=10;
    int f=0, c=0, i=0;

    setlocale (LC_CTYPE,"Spanish");

    JUMP;
    cout<<"\t\t\t\t\tMATRIZ DE PARES.\n\n";

    for ( f = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            matriz[f][c]=i++*2+2;
        }
        
    }

    for ( f = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            cout<<"\t"<<matriz[f][c];
            suma+=matriz[f][c];
        }
        JUMP;
    }
    JUMP;
    
    cout<<"-------------------------------------------------------------------------------------------";JUMP;
    cout<<"RESULTADO DE LA SUMA: ";JUMP;
    cout<<suma;

    JUMP;JUMP;
    PAUSE;
    return 0;
}