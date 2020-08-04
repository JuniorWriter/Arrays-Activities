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
#define TITTLE cout<<"\t\t\tPRIMER PUNTO\n\n";
#define MATRIZ_T cout<<"\t\t\t  MATRIZ\n\n";

using namespace std;

int main()
{
    float matriz[100][100];
    float temp;
    
    int suma=0, comas=0;
    int filas, columnas;
    int f, c;
    int opt, pos;

    setlocale (LC_CTYPE,"Spanish");
    srand(time(NULL));

    do
    {
        CLEAR;
        TITTLE;
        cout<<"Ingrese el número de filas: ";
        cin>>filas;
        cout<<"Ingrese el número de columnas: ";
        cin>>columnas;

        JUMP;
        MATRIZ_T;
        for ( f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                matriz[f][c] = rand()%(10);
                cout<<"\t"<<matriz[f][c];
            }
            JUMP;
        }

        JUMP;
        cout<<"\t\t MATRIZ TRANSPUESTA\n\n";
        for ( f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                cout<<"\t"<<matriz[c][f];
            }
            JUMP;
        }
        SUSPENSE;

        



        // ACENDENTEMENTE

        // TODO: Ordenamiento por columnas
        for (f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                pos = f;
                temp = matriz[f][c];

                while ((pos>0)&&(matriz[pos-1][c] > temp))
                {
                    matriz[pos][c] = matriz[pos-1][c];
                    pos--;
                }
                matriz[pos][c]=temp;
            }
        }
        JUMP;
        cout<<"\t\t MATRIZ ORDENADA POR COLUMNAS\n\n";
        for ( f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                cout<<"\t"<<matriz[f][c];
            }
            JUMP;
        }


        

        // TODO: Ordenamiento por filas
        for (f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                pos = c;
                temp = matriz[f][c];

                while ((pos>0)&&(matriz[f][pos-1] > temp))
                {
                    matriz[f][pos] = matriz[f][pos-1];
                    pos--;
                }
                matriz[f][pos]=temp;
            }
        }
        JUMP;
        cout<<"\t\t MATRIZ ORDENADA POR FILAS\n\n";
        for ( f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                cout<<"\t"<<matriz[f][c];
            }
            JUMP;
        }


        //-----------------------------------------------------------------------------//

        SUSPENSE;
        // DESCENTEMENTE
        JUMP;JUMP;JUMP;
        cout<<"ORDEN DESCENDENTE\n\n";

        // TODO: Ordenamiento por columnas
        for (f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                pos = f;
                temp = matriz[f][c];

                while ((pos>0)&&(matriz[pos-1][c] < temp))
                {
                    matriz[pos][c] = matriz[pos-1][c];
                    pos--;
                }
                matriz[pos][c]=temp;
            }
        }
        JUMP;
        cout<<"\t\t MATRIZ ORDENADA POR COLUMNAS\n\n";
        for ( f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                cout<<"\t"<<matriz[f][c];
            }
            JUMP;
        }




        // TODO: Ordenamiento por filas
        for (f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                pos = c;
                temp = matriz[f][c];

                while ((pos>0)&&(matriz[f][pos-1] < temp))
                {
                    matriz[f][pos] = matriz[f][pos-1];
                    pos--;
                }
                matriz[f][pos]=temp;
            }
        }
        JUMP;
        cout<<"\t\t MATRIZ ORDENADA POR FILAS\n\n";
        for ( f = 0; f < filas; f++)
        {
            for ( c = 0; c < columnas; c++)
            {
                cout<<"\t"<<matriz[f][c];
            }
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