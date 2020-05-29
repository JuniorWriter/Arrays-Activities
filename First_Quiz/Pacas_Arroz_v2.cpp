/*Analizar la siguiente situación: Se tiene un arreglo unidimensional donde se
almacena el número total de Kilogramos de Arroz cosechados durante cada mes del
año. Se desea saber : a)El promedio anual de Kilogramos de arroz cosechados b)
¿Cuál es el total de kilogramos de arroz cosechados en el año c) Muestre los
datos de las cosechas de arroz por mes*/

#include <iostream>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{   
    float kg_arroz[12], mayor[12];
    float prom, total_arroz=0;
    int opc, meses;
	int i, j;
    int cant_mayor=0, comas=0;

	setlocale (LC_CTYPE, "Spanish");

    do
    {
        comas=0, total_arroz=0, cant_mayor=0;
        ////////////////////////////////////

        system("cls");
        cout<<"\t\t\tCOSECHA DE ARROZ\n\n\n";

	    cout<<"\nIngrese la cantidad de meses que quiere registrar: ";
        cin>>meses; //Pedir la cantidad de meses para testear más rápido.
        if ((meses>12)||(meses<1)) //TODO: Validar que sean sólo de 1-12 meses
        {
            do
            {
                system("color 4"); //Color rojo para dar la ilusión de un error
                cout<<"ERROR!. Cantidad de meses inválida.\n";
                system("pause");
                system("color 7"); //Restaurar color
                system("cls"); //Limpiar consola
                cout<<"\t\t\tCOSECHA DE ARROZ\n\n\n"; //Imprimir nuevamente el título borrado.
                cout<<"\nIngrese la cantidad de meses que quiere registrar [1-12]: ";
                cin>>meses; //Volver a pedir los meses
            } while ((meses>12)||(meses<1)); //Repetir hasta que sean meses de 1-12.
            
        }
        
        
        system("color 7");
        cout<<"-----------------------------------------------------------\n";
        cout<<"Registro de Kg de arroz.\n";
        for ( i = 0; i < meses; i++) //TODO: Recorrer el vector hasta el número de meses para que el usuario lo llene
        {
            cout<<"\nMes #"<<i+1<<": "; //Enumerar los meses como ayuda para el usuario
            cin>>kg_arroz[i];
            
            if (kg_arroz[i]<0) //TODO: Pedir cantidades desde 0
            {
                do
                {
                    cout<<"Ingrese una cantidad mayor: ";
                    cin>>kg_arroz[i];
                } while (kg_arroz[i]<0); //Repetir hasta que sea mayor a -1
                
            }
            else
            {
                total_arroz+=kg_arroz[i]; //Si es mayor a -1 sumarlo al acumulador
            }
            
        }

        prom=total_arroz/meses; //TODO: Calcular promedio

        cout<<"---------------------------------------------------\n";
        cout<<"El acumulado anual de arroz fue de "<<total_arroz<<"Kg.\n"; //Imprimir acumulado
        cout<<"El promedio anual de arroz fue de "<<prom<<"Kg.\n\n"; //Imprimir promedio

        cout<<"-Datos de cosechas por mes.\n";

        for ( i = 0, j = 0; i < meses; i++)
        {
            if (comas==0)
            {
                cout<<"| ";
            }
            comas=1;
            cout<<kg_arroz[i]; //Imprimir el vector.
            cout<<" | ";

            ////////////////////////////////////////////
            if(kg_arroz[i]>prom) //TODO: Verificar cuál mes es mayor al promedio
            {
                mayor[j]=i; //Llenar el vector "mayor".
                cant_mayor++; //Contador para medir el arreglo.
                j++; //Contador para avanzar el paso del vector.
            }
        }

        cout<<"\n\n";

        for ( i = 0; i < cant_mayor; i++) //Recorrer el vector para mostrar los números que cumplan con la condición
        {
            cout<<"\nEl mes #"<<mayor[i]+1<<" tuvo mayor cosecha que el promedio anual.\n";
        }
        
        cout<<"\n\n";
        cout<<"¿Desea repetir el programa?\n";
        cout<<"Si.....................(1)\n";
        cout<<"No.....................(2)\n\n";
        cin>>opc;
    } while (opc==1);    
	
	system("pause");
	return 0;
}
