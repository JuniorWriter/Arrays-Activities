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
    float matriz[100][100], total_kms[1000];

    int suma=0, contador=0;
    int filas, columnas=6, size;
    int f, c, i;
    int opt;

    string name[1000];
    string dias[]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sábado","Total"};

    setlocale (LC_CTYPE,"Spanish");
    srand(time(NULL));

    do
    {
        CLEAR;
        TITTLE;

        cout<<"Ingrese el número de conductores: ";
        cin>>filas;

        JUMP;
        for ( i = 0; i < filas; i++)
        {
            cout<<"Nombre del conductor "<<i+1<<": ";
            cin>>name[i];
        }
        

        JUMP;
        for ( f = 0; f < filas; f++)
        {
            suma=0;
            cout<<"Kilometros recorridos por "<<name[f]<<": ";JUMP;
            for ( c = 0; c < columnas; c++)
            {
                cout<<dias[c]<<": ";cin>>matriz[f][c];
                suma+=matriz[f][c];
                
            }
            JUMP;
            total_kms[f]=suma;
        }

        JUMP;
        for ( i = 0; i < columnas+1; i++)
        {
            if (i==6)
            {
                cout<<"\t";
            }
            
            cout<<"\t"<<dias[i];
        }
        JUMP;
        for ( f = 0; f < filas; f++)
        {
            cout<<name[f];
            for ( c = 0; c < columnas; c++)
            {
                if (c==3)
                {
                    cout<<"\t";
                }
                cout<<"\t"<<matriz[f][c];
                
            }
            cout<<"\t\t"<<total_kms[f];
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