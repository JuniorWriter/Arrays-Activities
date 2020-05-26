#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main ()
{
    int i = 0;
    float numero[10];
    float suma=0, resta=0, div=1;
    long double mult=1;

    //Pedimos al usuario los valores del vector
    cout<<"Ingrese 10 numeros: \n";
    for ( i = 0; i < 10; i++)
    {
        cin>>numero[i];
    }

    /////////////////////////////////////////////////////////////
    resta=numero[0]*2; 
    /*TODO: Multiplicamos el primer término del vector x2 y lo
    almacenamos en la variable resta, para no afectar la resta*/

    div=pow(numero[0],2);
    /*TODO: Elevamos el primer término del vector al cuadrado y lo
    almacenamos en la variable div, para no afectar la división*/

    ///////OPERACIONES////////
    for ( i = 0; i < 10; i++)
    {
        suma+=numero[i];
        resta-=numero[i];
        mult*=numero[i];
        div/=numero[i];
    }

    //Mostramos las operaciones en pantalla
    cout<<"\n\nSuma = "<<suma<<endl;
    cout<<"Resta = "<<resta<<endl;
    cout<<"Multiplicación = "<<mult<<endl;
    cout<<"División = "<<div<<"\n\n";    

    system("pause");
    return 0;
}