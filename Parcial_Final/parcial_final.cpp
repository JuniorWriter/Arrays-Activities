/*	Author: Andrés Felipe Galván
	Date: XX/0X/2020
	Description: En un restaurante de 2 pisos hay 8 mesas en cada piso.
     Cada día a la hora del almuerzo las personas llegan a ocupar una
     mesa que puede ser de 1 hasta 6 personas por mesa. El administrador
     desea saber en algún momento cual mesa está libre, cuantas personas
     hay en cada mesa, cuantas personas se encuentran en cada piso y el
     promedio de personas por piso. Desearía ordenar las mesas en cada
    piso por el número de ocupantes en la mesa.
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
#define TITTLE cout<<"\t\t\tRESTAURANTE\n\n";
#define MATRIZ_T cout<<"\t\t  TABLAn\n";

using namespace std;

int main()
{
    int matriz[100][100], total_clients[1000], mesa_libre[1000];

    int suma=0, contador=0;
    int filas=2, columnas=8, size;
    int f, c, i;
    int opt;

    string name[1000];

    setlocale (LC_CTYPE,"Spanish");
    srand(time(NULL));

    do
    {
        NORMAL;
        CLEAR;
        TITTLE;  

        JUMP;
        for ( f = 0; f < filas; f++)
        {
            suma=0;
            cout<<"PISO "<<f+1<<". ";JUMP;
            cout<<"Número de comensales.";JUMP;
            for ( c = 0; c < columnas; c++)
            {
                do
                {
                    NORMAL;
                    cout<<"Mesa "<<c+1<<": ";
                    cin>>matriz[f][c];
                    if ((matriz[f][c]>6)||(matriz[f][c]<0))
                    {
                        ERROR;
                        cout<<"Límite de personas para una mesa.";JUMP;
                        SUSPENSE;
                    }
                    else
                    {
                        suma+=matriz[f][c];
                    }
                } while ((matriz[f][c]>6)||(matriz[f][c]<0));

            }
            JUMP;
            total_clients[f]=suma;
        }

        JUMP;
        for ( i = 0; i < columnas+1; i++)
        {
            if (i==0)
            {
                cout<<"\t";
            }
            
            if (i<columnas)
            { 
                cout<<"\tMesa "<<i+1;
            }
            else
            {
                cout<<"\t\tTOTAL";
            }
        }
        JUMP;
        
        for ( f = 0; f < filas; f++)
        {
            cout<<"PISO"<<f+1;
            cout<<"\t";
            for ( c = 0; c < columnas; c++)
            {
                cout<<"\t"<<matriz[f][c];
                
            }
            cout<<"\t\t"<<total_clients[f];
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