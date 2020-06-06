/*	Author: Andrés Felipe Galván
	Date: XX/0X/2020
	Description: Se quiere controlar el número de habitantes de un edificio
    con 6 pisos y 4 puertas (A, B, C, y D) en cada piso. Realizar un programa
    que pida al usuario que introduzca el número de habitantes de cada puerta del
    edificio. El programa debe arrojar los siguientes datos: Número de habitantes
    tiene por cada piso y de todo el edificio.
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
//shortcuts
#define ERROR system("color 4")
#define CLEAR system("cls")
#define PAUSE system("pause")
#define SPACE cout<<"\t";
#define JUMP cout<<"\n";

using namespace std;

int main()
{
    int edificio[6][4];
    int pisos=6, doors=4;
    int p, d;
    char i;
    int habitantes_pisos[6]={0}, habitantes_edificio=0;

    setlocale (LC_CTYPE,"Spanish");

    CLEAR;
    cout<<"\t\tAPARTAMENTOS DELUXE\n\n";
    cout<<"Control de habitantes.";

    //TODO: Ingreso de habitantes en cada piso y puerta.
    for ( p = 0; p < pisos; p++)
    {
        cout<<"\n\nPISO "<<p+1<<". \n"; // Indicar el piso.
        for ( d = 0, i = 'A'; d < doors, i <= 'D'; d++, i++)
        {
            cout<<"Puerta "<<i<<": "; // Indicar la puerta
            cin>>edificio[p][d];

            habitantes_pisos[p]+=edificio[p][d];
            habitantes_edificio+=edificio[p][d];
        }
    }

    JUMP;SPACE;
    //Mostrar la puerta
    for ( i = 'A'; i <= 'D'; i++)
    {
        cout<<"\t"<<i;
    }
    cout<<"\tTOTAL";
    cout<<"\n--------------------------------------------------------\n";

    //TODO: Mostrar la matriz organizada
    for ( p = 0; p < pisos; p++)
    {
        cout<<"      |\nPISO "<<p+1<<"|\t";
        for ( d = 0; d < doors; d++)
        {
            cout<<"\t"<<edificio[p][d];
        }
        cout<<"\t  "<<habitantes_pisos[p];
        JUMP;
    }    

    cout<<"\n\nEl número de habitantes del edificio es de "<<habitantes_edificio;
    JUMP;JUMP;
    PAUSE;
    return 0;
}