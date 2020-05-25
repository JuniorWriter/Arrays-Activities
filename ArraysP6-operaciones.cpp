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
    float numero[10];
    float suma=0, resta=0, div=1;
    long double mult=1;

    cout<<"Ingrese 10 numeros: \n";
    for (int i = 0; i < 10; i++)
    {
        cin>>numero[i];
        suma+=numero[i];
        resta-=numero[i];
        mult*=numero[i];
        div/=numero[i];
    }

    cout<<"\n\nSuma = "<<suma<<endl;
    cout<<"Resta = "<<resta<<endl;
    cout<<"Multiplicación = "<<mult<<endl;
    cout<<"División = "<<div<<"\n\n";    

    system("pause");
    return 0;
}