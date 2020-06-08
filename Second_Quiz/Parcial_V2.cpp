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
    float peso[30][30], precio[30][30];
    float peso_vector[4], precio_vector[4];
    float total_peso=0, total_precio=0, total_total=0;
    float suma=0, extra=0, extra_pes=0;
    int filas=3, columnas=7, size=5;
    int f, c, i, j, col;

    setlocale (LC_CTYPE,"Spanish");


    CLEAR;
    cout<<"\t\t\tENVIOS UPC\n";
    cout<<"\t\t   -------------------";

    
    for ( f = 0, i = 1; f < filas; f++)
    {
        total_peso=0;
        total_precio=0;

        JUMP;JUMP;
        cout<<"Empleado "<<i<<".";i++;
        JUMP;JUMP;
        cout<<"Ingrese el peso de los paquetes (Kg):";
        JUMP;
        for ( c = 1, j = 1; c < 6; c++)
        {
            cout<<j<<". ";j++;
            cin>>peso[f][c];

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

            total_peso+=peso[f][c];
            total_precio+=precio[f][c];
        }
        peso_vector[f]=total_peso;
        precio_vector[f]=total_precio;
    }

    

    //Columna de pesos y precios para cada matriz
    for ( f = 0; f < filas; f++)
    {
        for ( c = 6; c < columnas; c++)
        {
            peso[f][c]=peso_vector[f];

            precio[f][c]=precio_vector[f];
            total_total+=precio_vector[f];
        }
    }

    //Empleado
    for ( f = 0, i=1; f < filas; f++)
    {
        for ( c = 0; c < 1; c++)
        {
            precio[f][c]=i;
            peso[f][c]=i;
            i++;
        }
    }

    JUMP;
    cout<<"    EMPLEADO:\tPESOS:\t\t\t\t\tTOTALES:";
    JUMP;
    for ( f = 0, j = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            cout<<"\t"<<peso[f][c];
        }
        JUMP;
    }

    JUMP;JUMP;
    cout<<"\t\t\t\tGANACIAS.";
    JUMP;
    cout<<"    -------------------------------------------------------------";JUMP;
    cout<<"    EMPLEADO:\tFLETE:\t\t\t\t\tTOTALES:";
    JUMP;
    for ( f = 0, j = 0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            cout<<"\t"<<precio[f][c];
        }
        JUMP;
    }

    JUMP;
    cout<<"El total ganado fue de "<<total_total<<".";
    JUMP;JUMP;
    PAUSE;
    return 0;
}