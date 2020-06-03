/*	Author: Andrés Felipe Galván
	Date: 02/06/2020
	Description: Que  lea 15  números  por  teclado,  los  copie en  una  matriz
    y multiplique  cada elemento por 2 y muestre la matriz resultante.
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
    int matriz[100][100], vector[15];
    int suma=0, comas=0;
    int filas=5, columnas=3, size=15;
    int f, c, i=0;

    setlocale (LC_CTYPE,"Spanish");

    JUMP;cout<<"Ingrese "<<size<<" números: \n";
    for ( i = 0; i < size; i++)
    {
        cout<<"> ";cin>>vector[i];
    }
    JUMP;

    /////////////////////////////////////
    for ( f = 0, i = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            matriz[f][c]=vector[i]*2;
            i++;
        }
    }
    JUMP;

    /////////////////////////////////////
    cout<<"\t      MATRIZ.\n";
    for ( f = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            cout<<"\t"<<matriz[f][c];
        }
        JUMP;
    }
    
    JUMP;
    PAUSE;
    return 0;
}