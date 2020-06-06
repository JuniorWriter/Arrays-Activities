/*	Author: Andrés Felipe Galván
	Date: 06/06/2020
	Description: Que  lea 15  números  por  teclado,  los  copie en  una  matriz
    y multiplique  cada elemento por 2 y muestre la matriz resultante.
*/
    
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
//shortcuts
#define ERROR system("color 4")
#define CLEAR system("cls")
#define PAUSE system("pause")
#define SPACE getch();
#define JUMP cout<<"\n";

using namespace std;

int main()
{
    int matriz[100][100], vector[100], size;
    int suma=0, comas=0;
    int filas, columnas, id=0, raiz_int;
    int f, c, i;
    float raiz;

    setlocale (LC_CTYPE,"Spanish");

    //TODO: ENTRADA:
    //Pedirle al usuario la cantidad de números que desea ingresar. 
    cout<<"Cuantos números desea ingresar: ";
    cin>>size; // Almacenar en la variable para redimencionar tanto el vector como la matriz

    JUMP;cout<<"Ingrese "<<size<<" números: \n"; // Leer n cantidad de números
    for ( i = 0; i < size; i++)
    {
        cout<<"> ";cin>>vector[i]; // Almacener los números en un vector de un tamño dado por el usuario
    }
    JUMP;
    

    //TODO: PROCESO:
    // Sacar la raiz a la cantidad de números.
    raiz = sqrt(size);
    raiz_int=raiz; // La parte entera de la raiz la almacenamos en otra variable.

    /* A la parte decimal de la raiz le restamos la parte entera y si el resultado es 0
       es un cuadrado perfecto para saber si se puede hacer una matriz simétrica.
    */
    if (raiz-raiz_int==0) 
    {
        filas=raiz; //Le asignamos los valores a la fila y la columna.
        columnas=raiz;
    }
    else //Si no se puede hacer una matriz simétrica procedemos a hacer el proceso de hallar los factores de la variable size.
    {
       for ( i = size-1; i > 1; i--) //Ciclo para hacer las divisiones de manera automática.
        {
            if (size%i==0) // Si el residuo de la división es 0 quiere decir que es factor de ese número.
            {
                //Sólo nos dá dos números, entonces para darle uno a las filas y otro a las columnas...
                id++; // Creamos un identificador para separar los dos números.
                if (id==1)
                {
                    columnas=i; //El primero (el más grande) va para las columnas.
                }
                else
                {
                    filas=i; //El segundo (el más pequeño) va para las filas.
                } 
            }  
        } 
    }

    //Si no se puede crear una matriz con la cantidad de números la hacemos de una fila.
    if (id<1)
    {
        filas = 1;
        columnas = size;
    }
    

    //TODO: SALIDA:
    // Recorremos la matriz...
    cout<<"\n\t\tMATRIZ.\n";
    for ( f = 0, i=0; f < filas; f++)
    {
        for ( c = 0; c < columnas; c++)
        {
            matriz[f][c]=vector[i]*2;i++; //Los valores del vector los mostramos organizados en la matriz
            cout<<"\t"<<matriz[f][c];
        }
        JUMP;
    }
    
    JUMP;
    PAUSE;
    return 0;
}