/*2.Escribir un programa que llene un arreglo de 10 números enteros aleatorios
comprendidos entre 50 y 100, copie en otro arreglo esos números multiplicados
por 0,5 y muestre ambos arreglos.*/

#include <iostream>
#include <time.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
    int vector[100],vector2[100];
    int i;
    int aleatory,size_vector=0;

    setlocale(LC_CTYPE,"Spanish");

    cout<<"Ingrese el tamaño del vector: ";
    cin>>size_vector;

    cout<<"\nIngrese "<<size_vector<<" números:\n";
    for ( i = 0; i < size_vector; i++)
    {
        cout<<">";cin>>vector[i];
    }

    system("pause");
    return 0;
}