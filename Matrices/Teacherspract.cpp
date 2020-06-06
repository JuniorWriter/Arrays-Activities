/*	Author: 
	Date: 
	Description: Ejercicio Matriz aleatorio entre 1-10 para hallar un valor 
*/
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(void)
{
	setlocale (LC_CTYPE, "Spanish");
	srand(time(NULL));
	
	int matriz[10][10], Mres[10][10], Mmulti[10][10][10]; //declaración de las matrices
	
	int f, c, fe, ce, val;
	int p, pag;
	
	fe=-1;
	ce=-1;
	
	cout<<"Filas de la matriz max(10): "; cin>>f;
	cout<<endl;
	cout<<"Columnas de la matriz max(10): "; cin>>c;
	cout<<endl;
	
	//inicializar la Matriz con números aleatorios o al azar 
	if(f>0 && f<10)
	{
		if(c>0 && c<10)
		{
			srand(time(NULL));
			
			for(int fil=0;fil<f;fil++)//filas
			
				for(int col=0;col<c;col++)//columnas
				
					matriz[fil][col]=rand()%100; //llenando la matriz con datos aleatorios de 0 a 100
		}
		else	cout<<"Número de columnas no permitido";
	}
	else    cout<<"Número de filas no permitido";
		
	//	imprimir o mostrar la Matriz
	
			for(int fil=0;fil<f;fil++)
			{
				for(int col=0;col<c;col++)
					cout<<"\t"<<matriz[fil][col];
				cout<<endl;
			}
	
	//buscarElementoMatriz
		
	cout<<" Digite valor a buscar: ";
	cin>>val;
	
	for(int fil=0;fil<f;fil++)
			{
				for(int col=0;col<c;col++)
					if(matriz[fil][col]==val)
					{
						fe=fil;
						ce=col;
					}
			}
	
	if(fe==-1 || ce==-1) cout<<"El valor "<<val<<" no se encuentra en la matriz\n\n";
	
	else cout<<"El valor "<<val<<" se encuentra en la posición "<<"["<<fe<<"]"<<"["<<ce<<"]"<<endl;

		cout<<endl;
		cout<<"\t"<<"--------MATRIZ TRANSPUESTA-------"; 
		cout<<endl;
		for(int fil=0;fil<f;fil++)
			for(int col=0;col<c;col++)
				Mres[fil][col]=matriz[col][fil];
				for(int fil=0;fil<f;fil++)
				{
					for(int col=0;col<c;col++)
						cout<<"\t"<<Mres[fil][col];
						cout<<endl;
				}
cout<<"Página de la matriz max(10): "; cin>>p;
	cout<<endl;
	cout<<"Fila de la matriz max(10): "; cin>>f;
	cout<<endl;
	cout<<"Columna de la matriz max(10): "; cin>>c;
	cout<<endl;


//llenar una matriz de 3 dimensiones

			for(int pag=0;pag<p;pag++)
				for(int fil=0;fil<f;fil++)
					for(int col=0;col<c;col++)
							Mmulti[pag][fil][col]=rand()%100;
							
//Mostrar o escribir una matriz de 3 dimensiones
							
			for(int pag=0;pag<p;pag++)
			{
				for(int fil=0;fil<f;fil++)
				{
					for(int col=0;col<c;col++)
							cout<<"\t"<<Mmulti[pag][fil][col];
					cout<<endl;
				}
			cout<<endl;
				}
system("PAUSE");
return 0;
}
