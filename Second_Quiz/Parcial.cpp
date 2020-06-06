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
    float matriz[10][10], peso[10][10], precio[10][10];
    int suma=0, extra=0, extra_pes=0;
    int filas=5, columnas=2, size=5;
    int f, c, i, col;

    setlocale (LC_CTYPE,"Spanish");


    CLEAR;
    cout<<"\t\t\tENVIOS UPC\n";
    cout<<"\t\t   -------------------\n\n";
    
    //TODO: Leer los pesos de los paquetes
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
            if(peso[f][c]>=0)
            {
                if (peso[f][c]<10)
                {
                    precio[f][c]=12000; // valor constante para los pesos desde 0 hasta 9 kg
                }
                else
                {
                    extra_pes=peso[f][c]-10; //Restarle 10 para excluir los 10 primeros kilos
                    extra=extra_pes*750; // Multiplicar 750 x el número de kilos extras
                    precio[f][c]=12000+extra; // sumarle al resultado el precio extra
                }
            }
            else
            {
                precio[f][c]=0;
            }
            
        }    
    }
    
    ///////////////////////////////////////////////////////////////////
    for ( f = 0; f < filas; f++)
    {
        for ( c = 1, col=0; c < columnas, col < columnas-1; c++, col++)
        {
            matriz[f][c]=precio[f][col]; // Asignarle la segunda columna de precios
        }
    }

    //TODO: Mostrar la matriz
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