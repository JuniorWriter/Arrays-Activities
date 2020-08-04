/*	Author: Andrés Felipe Galván
	Date: XX/0X/2020
	Description: 
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <time.h>
// MACROS
#define NORMAL system("color 7")
#define ERROR system("color 4")
#define CLEAR system("cls")
#define PAUSE system("pause")
#define SUSPENSE getch();
#define JUMP cout<<"\n";
#define TITTLE cout<<"\t\t\tARRAYS TEMPLATE\n\n";
#define MATRIZ_T cout<<"\t\t\t  MATRIZ\n\n";

using namespace std;

int main()
{
    float tabla_ganancias[100][100], total_ganancias[1000];

    int tabla_ventas[100][100], total_ventas[1000];

    int ventas=0, ganancias=0;
    int filas, columnas=5, size;
    int f, c, i;
    int opt;

    string product[1000];
    
    setlocale (LC_CTYPE,"Spanish");
    srand(time(NULL));

    do
    {
        CLEAR;
        TITTLE;

        cout<<"Ingrese el número de sucursales: ";
        cin>>filas;

        JUMP;
        for ( i = 0; i < columnas; i++)
        {
            cout<<"Nombre del articulo "<<i+1<<": ";
            cin>>product[i];
        }
        

        JUMP;JUMP;
        for ( f = 0; f < filas; f++)
        {
            ganancias=0;
            ventas=0;
            cout<<"Sucursal No."<<f+1<<": ";JUMP;
            for ( c = 0; c < columnas; c++)
            {
                cout<<"Precio de "<<product[c]<<": ";
                cin>>tabla_ganancias[f][c];
                cout<<"Ventas de "<<product[c]<<": ";
                cin>>tabla_ventas[f][c];
                JUMP;

                ganancias+=tabla_ganancias[f][c];
                ventas+=tabla_ventas[f][c];
                
            }
            JUMP;
            total_ganancias[f]=ganancias;
            total_ventas[f]=ventas;
        }

        JUMP;
        for ( i = 0; i < columnas+1; i++)
        {
            if ((i==5)||(i==0))
            {
                cout<<"\t";
            }
            if (i<=columnas)
            {
                cout<<"\tSuc. "<<i+1;
            }
            else
            {
                "\tTOTAL";
            }
        }
        JUMP;
        for ( f = 0; f < filas; f++)
        {
            cout<<product[f];
            for ( c = 0; c < columnas; c++)
            {
                if (c==0)
                {
                    cout<<"\t";
                }
                cout<<"\t"<<tabla_ventas[f][c];
                
            }
            cout<<"\t\t"<<total_ventas[f];
            JUMP;
        }
        





        SUSPENSE;
        JUMP;
        cout<<"¿Quieres repetir el programa?";JUMP;
        cout<<"Si........................[1]";JUMP;
        cout<<"No........................[2]";JUMP;JUMP;
        cout<<"> ";cin>>opt;

    } while (opt==1);
    
    
    JUMP;
    PAUSE;
    return 0;
}