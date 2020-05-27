/*Analizar la siguiente situación: Se tiene un arreglo unidimensional donde se
almacena el número total de Kilogramos de Arroz cosechados durante cada mes del
año. Se desea saber : a)El promedio anual de Kilogramos de arroz cosechados b)
¿Cuál es el total de kilogramos de arroz cosechados en el año c) Muestre los
datos de las cosechas de arroz por mes*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    float prom,total_arroz=0;
    int opc;
	int i,j,meses,comas=0;
	float kg_arroz[12],min=1, mayor[12];

	setlocale (LC_CTYPE, "Spanish");

    do
    {
        comas=0;total_arroz=0;
        //////////////////////////

        system("cls");
        cout<<"\t\t\tCOSECHA DE ARROZ\n\n\n";

	    cout<<"\nIngrese la cantidad de meses que quiere registrar: ";
        cin>>meses;
        if ((meses>12)||(meses<1))
        {
            do
            {
                system("color 4");
                cout<<"ERROR!. Cantidad de meses inválida.\n";
                system("pause");
                system("color 7");
                cout<<"\nIngrese la cantidad de meses que quiere registrar [1-12]: ";
                cin>>meses;
            } while ((meses>12)||(meses<1));
            
        }
        
        
        system("color 7");
        cout<<"-----------------------------------------------------------\n";
        cout<<"Registro de Kg de arroz.\n";
        for ( i = 0, j = 1; i < meses; i++, j++)
        {
            cout<<"\nMes #"<<j<<": ";
            cin>>kg_arroz[i];
            
            if (kg_arroz[i]<1)
            {
                do
                {
                    cout<<"Ingrese una cantidad mayor a 0.";
                    cin>>kg_arroz[i];
                } while (kg_arroz[i]<1);
                
            }
            else
            {
                total_arroz+=kg_arroz[i];
            }
            
        }

        prom=total_arroz/meses;

        cout<<"---------------------------------------------------\n";
        cout<<"El acumulado anual de arroz fue de "<<total_arroz<<"Kg.\n";
        cout<<"El promedio anual de arroz fue de "<<prom<<"Kg.\n\n";

        cout<<"-Datos de cosechas por mes.\n";
        for ( i = 0; i < meses; i++)
        {
            cout<<kg_arroz[i];
            comas++;
            if (comas<meses)
            {
                cout<<" | ";
            }
            else
            {
                cout<<".";
            }

            ////////////////////////////////////////////
            if(kg_arroz[i]>prom)
            {
                mayor[i]=i;
            }
        }

        for ( i = 0; i < meses; i++)
        {
            if (mayor[i]==i)
            {
                cout<<"\n\nEl mes #"<<mayor[i]+1<<" tuvo mayor cosecha que el promedio anual.\n";
            }
            
        }
        
        cout<<"\n\n\n";
        cout<<"¿Desea repetir el programa?\n";
        cout<<"Si.....................(1)\n";
        cout<<"No.....................(2)\n";
        cin>>opc;
    } while (opc==1);
    
	
    
	
	system("pause");
	return 0;
}
