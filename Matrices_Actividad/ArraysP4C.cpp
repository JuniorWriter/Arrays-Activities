/*	Author: Andrés Felipe Galván
	Date: 02/06/2020
	Description: Que rellene una matriz con 20 números y luego busque un número concreto.
*/

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <wchar.h>
//shortcuts
#define ERROR system("color 4")
#define WHITE system("color F")
#define PAUSE system("pause")
#define SPACE getch();
#define RANDOM rand()%100
#define JUMP cout<<"\n";

using namespace std;

int main()
{
    int matriz[100][100];
    int filas, columnas;
    int f, c;
    int opc;
    int buscar, bus_f, bus_c, encontrar=0;

    srand(time(NULL));
    setlocale (LC_CTYPE,"Spanish");

    cout<<"Ingrese el número de filas: ";
    cin>>filas;JUMP; //5

    cout<<"Ingresa el número de columnas: ";
    cin>>columnas;JUMP; //4

    cout<<"\t\t   MATRIZ.";JUMP;
    for ( f = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            matriz[f][c]=RANDOM;
            cout<<"\t"<<matriz[f][c];
        }
        JUMP;
    }
    
    //Buscar término por posición o por valor.
    cout<<"\n\n\nBUSCAR.\n";
    cout<<"Por posición...........(1)\n";
    cout<<"Por valor..............(2)\n\n";
    cout<<"> ";cin>>opc;

    JUMP;
    switch (opc)
    {
    case 1:

        do
        {
            cout<<"\nIngrese la posición de la matriz. ";
            cout<<"\nFila: ";cin>>bus_f;
            cout<<"Columna: ";cin>>bus_c;
            JUMP;

            if ((bus_f > filas) || (bus_c > columnas))
            {
                ERROR;
                cout<<"Posición inválida.";
            }
            else
            {
                WHITE;
                for ( f = 0; f < filas; f++)
                {
                    for ( c = 0; c < columnas; c++)
                    {
                        if ((bus_f==f) && (bus_c==c))
                        {
                            cout<<"En la posición ["<<bus_f<<"]["<<bus_c<<"] se encuentra el número "<<matriz[bus_f][bus_c];
                        }
                    }
                }
            }
        }while((bus_f > filas)||(bus_f<0) || (bus_c > columnas)||(bus_c<0));

    break;

    case 2:

        do
        {
            cout<<"\nIngrese un valor: ";
            cin>>buscar;

            for ( f = 0; f < filas; f++)
            {
                for ( c = 0; c < columnas; c++)
                {
                    if (buscar==matriz[f][c])
                    {
                        cout<<"El número "<<matriz[f][c]<<" se encuentra en la posición ["<<f<<"]["<<c<<"]\n";
                        encontrar=1;
                    }
                    
                }
            }
            if (encontrar==0)
            {
                cout<<"El número "<<buscar<<" no se encuentra en la matriz.";JUMP
            }

        }while(encontrar==0);

    break;
    
    default:
        system("cls");
        ERROR;
        cout<<"ERROR.";JUMP;
    break;
    }

    JUMP;
    PAUSE;
    return 0;
}