#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

int main ()
{
    int vector1[5], vector2[5],vector3[10];
    int i=0, j=0;
    
    //Leer los primeros 5 términos
    cout<<"\nIngrese 5 numeros: \n";
    for ( i = 0; i < 5; i++)
    {
        cin>>vector1[i];
        vector3[i]=vector1[i]; //Pasar los valores del vector1 al vector3 
    }

    //Leer los otros 5 términos
    cout<<"\nIngrese otros 5 numeros: \n";
    for ( j = 0; j < 5; j++, i++)
    {
        cin>>vector2[j];
        vector3[i]=vector2[j]; //Pasar los valores para las posiciones vacias
    }

    //Recorremos el vector para mostrarlo
    cout<<"\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<vector3[i]<<endl;
    }
    cout<<"\n";

    system("pause");
    return 0;
}