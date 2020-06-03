/*	Author: Andrés Felipe Galván
	Date: 03/06/2020
	Description: 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
//shortcuts
#define CLEAR system("cls")
#define PAUSE system("pause")
#define JUMP cout<<"\n";

using namespace std;

int main()
{
    int matriz[10][10], peso[10][10], precio[10][10];
    int suma=0, extra=0, extra_pes=0;
    int filas=5, columnas=2, size=5;
    int f, c, i, col;

    setlocale (LC_CTYPE,"Spanish");


    CLEAR;
    cout<<"\t\t\tENVIOS UPC\n";
    cout<<"\t\t   -------------------\n\n";
    
    cout<<"Ingrese el peso de los paquetes (Kg): ";JUMP;JUMP;
    for ( f = 0, i = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas-1; c++)
        {
            cout<<i+1<<". ";
            i++;
            cin>>peso[f][c];
            matriz[f][c]=peso[f][c];
            ///////////////////////////////////////
            precio[f][c]=peso[f][c];
            if ((peso[f][c]>=0)&&(peso[f][c]<10))
            {
                precio[f][c]=12000;
            }
            else
            {
                extra_pes=peso[f][c]-10;
                extra=extra_pes*750;
                precio[f][c]=12000+extra;
            } 
        }    
    }
    
    ///////////////////////////////////////////////////////////////////
    for ( f = 0; f < filas; f++)
    {
        for ( c = 1, col=0; c < columnas, col < columnas-1; c++, col++)
        {
            matriz[f][c]=precio[f][col];
        }
    }

    JUMP;
    cout<<"\tPESO.\tPRECIO.\n";
    JUMP;
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