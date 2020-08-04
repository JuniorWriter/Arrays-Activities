/*	Author: Andrés Felipe Galván
	Date: 15/06/2020
	Description: Vectors theme review
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <time.h>
// MACROS
#define NORMAL system("color 7")
#define ERROR system("color 4")
#define CLEAR system("cls")
#define PAUSE system("pause")
#define SUSPENSE getch();
#define JUMP cout<<"\n";
#define TITTLE cout<<"\t\t\tPRACTICA VECTORES\n\n";

using namespace std;

int main()
{
    // TODO: VARIABLES
    float vector[1000], ordered [1000], upsidedown_vector[1000]; // Arrays used in the script
    float edit, new_number;


    int range1, range2; // Ranges for random limits
    int aleatory; // Random variable
    int i, j; // Iterators for the loops, but you already know cuz it's i N' j
    int size, search; // Variables for the size of the vector and for searching in it, respectively
    int pos, temp; // Position variable for vector sorting, and 'temporal' variable for save some shit in it too

    // USER'S ELECTIONS
        int opt=0, opt2=0, opt3=0, opt4=0, fill=0; // Options for switch structure
        // MATH ELECTIONS
            int sum_opt, mult_opt, div_opt, pow_opt, prom_opt; // Same
        //END
    //END

    setlocale (LC_CTYPE,"Spanish"); // Spanish Alphabet for prompt line.
    srand(time(NULL)); // Random function
    
    // Well, that the mess starts.

    do
    { // 1st Loop for restart the whole program
        // TODO: FIRST
        
        // RESET
        int comas=0, conteo=0, amount = 0;// Reset the counters everytime the program restart.
        bool tittle_enable=false, found=false, restart=false, error=false; // Reset the booleans... for same reasons
        bool back=false, subtittle_enable=false; // Same

        // START
        NORMAL;CLEAR; 
        TITTLE;

        do // 2nd Loop for restart if there's a negative value for size
        {   
            NORMAL;
            cout<<"Ingrese el tamaño del vector: ";
            cin>>size;
            JUMP;
            if (size<1) // Validate if it's a negative value
            {
                ERROR;
                cout<<"Tamaño inválido."; // Print ERROR
                SUSPENSE;
            }
            JUMP;
            
            
        } while (size<1); // Loop while the value readed is negative
        JUMP;

        // Show vector's fill options

        do // 3rd loop for repeat this section if user select an invalid option like 0 or 3
        {   
            NORMAL;

            if (tittle_enable==true) // In case of repeat the program show the title again
            {
                CLEAR;
                TITTLE;
            }
            cout<<"¿Cómo desea llenar el vector?";JUMP;
            cout<<"-----------------------------";JUMP;
            cout<<"Números aleatorios........[1]";JUMP;
            cout<<"Llenar manualmente........[2]";JUMP;JUMP;
            cout<<"> ";cin>>fill; // Read user's option
            JUMP;

            switch (fill) 
            {
            case 1:
                //4th Loop in case the lower limit be bigger than the higher limit
                do
                {
                    // In case the user pick the random fill option ask for the number's range 
                    NORMAL;
                    cout<<"Ingrese el rango de números. ";JUMP;
                    cout<<"Desde: ";cin>>range1;
                    cout<<"Hasta: ";cin>>range2;
                    if (range1>range2) // Validate that first range is the lower than second
                    {
                        ERROR;
                        cout<<"El limite inferior debe ser menor.";JUMP; // Print Error in case that happen
                        SUSPENSE;
                    }
                    JUMP;

                } while (range1>range2); // Do it while user's input be 1st range > 2nd range

                // Show the vector
                JUMP;
                for ( i = 0; i < size; i++)
                {
                    aleatory = range1 + rand ()% ((range2+1)-range1); // Gen the vector with users range
                    vector[i] = aleatory; // Save the values in the main vector
                    ordered[i] = vector[i]; // Also save same info in the vector we'll use to order it

                    if (comas==0)
                    {
                        cout<<"VECTOR.\n"; // Print the title
                    }
                    cout<<vector[i]; // Print the vector

                    comas++; // Counter for comas and final point
                    if (comas<size)
                    {
                        cout<<", "; // While counter be lower than the vector's size print comas
                    }
                    else
                    {
                        cout<<"."; // If it gets the final term of the vector print a point
                    }
                }
                
                break;


            case 2:

                cout<<"Ingrese los valores del vector: \n"; // In case the user pick the manual fill option ask for the each number
                for ( i = 0; i < size; i++)
                {
                    cout<<"> ";cin>>vector[i];
                    ordered[i]=vector[i];
                }
                
                JUMP;
                // Show vector
                for ( i = 0; i < size; i++)
                {
                    if (comas==0)
                    {
                        cout<<"VECTOR.\n";
                    }
                    cout<<vector[i];
                    comas++;
                    if (comas<size)
                    {
                        cout<<", ";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                
                break;
            
            // Show an ERROR msg if user puts an option that isn't avalaible
            default:
                CLEAR;
                TITTLE;
                ERROR;
                cout<<"ERROR. Ingrese una optión válida.";JUMP;
                SUSPENSE;
                break;
            }

            tittle_enable=true; // Enable the tittle when the program is repeated
            
        } while ((fill>2)||(fill<1));
        JUMP;JUMP;






        // TODO: RESTART
        // Back to the principal menu result in Math operations menu options
        do
        {   // Loop for repeat the menu section if user wants to
            restart=false; // Reset the booleans
            back=false;

            if (subtittle_enable==true)
            {
                comas=0;
                JUMP;
                for ( i = 0; i < size; i++)
                {
                    if (comas==0)
                    {
                        cout<<"VECTOR.\n";
                    }
                    cout<<vector[i];
                    comas++;
                    if (comas<size)
                    {
                        cout<<", ";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
            }   


            //TODO: MAIN MENU
            //-----------------------------------------------------//
            do
            {
                
                SUSPENSE;
                NORMAL;
                JUMP;JUMP;
                cout<<"Menú.";JUMP
                cout<<"---------------------------------------";JUMP;
                cout<<"Buscar un elemento..................[1]";JUMP;
                cout<<"Ordenar el vector ascendentemente...[2]";JUMP;
                cout<<"Ordenar el vector descendentemente..[3]";JUMP;
                cout<<"Editar el vector....................[4]";JUMP;
                cout<<"Invertir el vector..................[5]";JUMP;
                cout<<"Crear nuevo vector..................[6]";JUMP;
                cout<<"Realizar Operaciones con el vector..[7]";JUMP;JUMP;

                cout<<"Salir del programa..................[8]";JUMP;
                cout<<"---------------------------------------";JUMP;JUMP;
                cout<<"> ";cin>>opt2;



                    //----------------------Ordenar vector----------------------//
                    /* int pos, temp; 
                    float ordered[1000];*/

                    //Sort algorithm
                    for ( i = 0; i < size; i++)
                    {
                        ordered[i]=vector[i];
                        pos = i;
                        temp = ordered[i];

                        while ((pos>0)&&(ordered[pos-1]>temp))
                        {
                            ordered[pos] = ordered[pos-1];
                            pos--;
                        }
                        ordered[pos]=temp;
                    }
                    //--------------------------------------------------------//



                switch (opt2)
                {
                case 1:
                    // FIXME: SEARCH THE VALUE IN THE VECTOR.
                    do
                    {
                        error = false;
                        NORMAL;
                        JUMP;
                        cout<<"BUSCAR.\n";
                        cout<<"Por posición...........[1]";JUMP;
                        cout<<"Por valor..............[2]";JUMP;
                        cout<<"> ";cin>>opt3;

                        JUMP;
                        switch (opt3)
                        {
                        case 1:

                            do
                            {
                                NORMAL;
                                JUMP;
                                cout<<"Ingrese la posición del número.";JUMP;
                                cout<<"> ";cin>>search;  
                                JUMP;

                                if ((search > size-1) || (search < 0))
                                {
                                    ERROR;
                                    cout<<"Posición inválida.";
                                    SUSPENSE;
                                }
                                else
                                {
                                    NORMAL;
                                    for ( i = 0; i <= search; i++)
                                    {
                                        if (search==i)
                                        {
                                            cout<<"En la posición ["<<search<<"] se encuentra el número "<<vector[search];
                                        }
                                        
                                    }
                                }

                            } while((search > size-1) || (search < 0));

                        break;

                        case 2:
                            do
                            {
                                cout<<"\nIngrese un valor: ";
                                cin>>search;

                                for ( i = 0; i < size; i++)
                                {
                                    
                                    if (search==vector[i])
                                    {
                                        cout<<"El número "<<vector[i]<<" se encuentra en la posición ["<<i<<"]";JUMP;
                                        found=true;
                                    } 
                                }

                                if (found==false)
                                {
                                    cout<<"El número "<<search<<" no se encuentra en el vector.";JUMP
                                }

                            }while(found==false);

                        break;
                        
                        default:
                            ERROR;
                            cout<<"ERROR.";JUMP;
                            error = true;
                            SUSPENSE;
                        }

                    } while (error==true);

                    break;

                case 2:
                    // FIXME: SORT UPWARD.
                    //Reset comas.
                    comas = 0;

                    JUMP;
                    for ( i = 0; i <size; i++)
                    {
                        if (comas==0)
                        {
                            cout<<"Orden Ascendente:\n";
                        }
                        vector[i]=ordered[i];

                        cout<<vector[i];
                        comas++;
                        if (comas<size)
                        {
                            cout<<", ";
                        }
                        else
                        {
                            cout<<".";
                        }
                    }
                    break;

                case 3:
                    //FIXME: SORT DOWNWARD.
                    //Reset comas.
                    comas = 0;
                    for ( i = 0; i < size; i++)
                    {
                        upsidedown_vector[i]=ordered[i];
                        j = i;
                        temp = upsidedown_vector[i];

                        while (j>0)
                        {
                            upsidedown_vector[j] = upsidedown_vector[j-1];
                            j--;
                        }
                        upsidedown_vector[j]=temp;
                    }


                    JUMP;
                    for ( i = 0; i < size; i++)
                    {
                        if (comas==0)
                        {
                            cout<<"Orden Descendente:\n";
                        }
                        vector[i]=upsidedown_vector[i];

                        cout<<vector[i];
                        comas++;
                        if (comas<size)
                        {
                            cout<<", ";
                        }
                        else
                        {
                            cout<<".";
                        }
                    }
                    break;

                case 4:
                    //FIXME: EDIT THE VECTOR
                    //float edit, new_number;
                    comas = 0;

                    do
                    {
                    JUMP;
                        cout<<"Editar.";
                        
                        JUMP;
                        for ( i = 0; i < size; i++)
                        {
                            if (comas==0)
                            {
                                cout<<"VECTOR.\n";
                            }
                            cout<<vector[i];
                            comas++;
                            if (comas<size)
                            {
                                cout<<", ";
                            }
                            else
                            {
                                cout<<".";
                            }
                        }
                        JUMP;JUMP;
                        cout<<"Ingresar la posición del número a cambiar: ";
                        cin>>edit;

                        if ((edit > size-1) || (edit < 0))
                        {
                            ERROR;
                            cout<<"Posición inválida.";
                            SUSPENSE;
                        }
                        else
                        {
                            for ( i = 0; i <= edit; i++)
                            {
                                if (edit==i)
                                {
                                    JUMP;
                                    cout<<"{"<<vector[i]<<"}";JUMP;
                                    cout<<"Ingrese el nuevo número: ";
                                    cin>>new_number;
                                    vector[i]=new_number;
                                    
                                }
                            }

                        }

                    } while ((edit > size-1) || (edit < 0));

                    comas = 0;
                    JUMP;
                    for ( i = 0; i < size; i++)
                    {
                        if (comas==0)
                        {
                            cout<<"VECTOR.\n";
                        }
                        cout<<vector[i];
                        comas++;
                        if (comas<size)
                        {
                            cout<<", ";
                        }
                        else
                        {
                            cout<<".";
                        }
                    }
                    break;

                case 5:
                    // FIXME: VECTOR UPSIDEDOWN
                    comas=0;
                    for ( i = 0; i < size; i++)
                    {
                        upsidedown_vector[i]=vector[i];
                        j = i;
                        temp = upsidedown_vector[i];

                        while (j>0)
                        {
                            upsidedown_vector[j] = upsidedown_vector[j-1];
                            j--;
                        }
                        upsidedown_vector[j]=temp;
                    }
                    
                    JUMP;
                    for ( i = 0; i < size; i++)
                    {
                        if (comas==0)
                        {
                            cout<<"Vector invertido.\n";
                        }
                        cout<<upsidedown_vector[i];
                        comas++;
                        if (comas<size)
                        {
                            cout<<", ";
                        }
                        else
                        {
                            cout<<".";
                        }
                    }
                    break;

                case 6:
                    // FIXME: REMAKE THE VECTOR
                    JUMP;
                    restart = true;
                    break;

                case 7:
                    // FIXME: MATH OPERATIONS
                    JUMP; 
                    restart = true;
                    break;

                case 8:
                    // FIXME: EXIT PROGRAM
                    JUMP;
                    restart = true;
                    break;

                default:
                    JUMP;
                    ERROR;
                    cout<<"ERROR. Ingrese una optión válida.";JUMP;
                    break;
                }

            } while (restart==false);
            



            //TODO: MATH MENU
            if (opt2==7)
            {
                do
                {
                    amount = 0;
                    back=false;
                    JUMP;PAUSE;
                    CLEAR;
                    NORMAL;
                    TITTLE;
                    cout<<"¿Qué operación deseas hacer?";JUMP;
                    cout<<"Suma....................[1]";JUMP;
                    cout<<"Resta...................[2]";JUMP;
                    cout<<"Multiplicación..........[3]";JUMP;
                    cout<<"División................[4]";JUMP;
                    cout<<"Promedio................[5]";JUMP;
                    cout<<"Elevar..................[6]";JUMP;JUMP;

                    cout<<"Volver..................[7]";JUMP;
                    cout<<"Salir...................[8]";JUMP;JUMP;
                    cout<<"> ";cin>>opt4;
                    switch (opt4)
                    {
                    case 1:
                        cout<<"SUMA.";JUMP;
                        cout<<"Sumarse a sí mismo..[1]";JUMP;
                        cout<<"Sumarle otro vector.[2]";JUMP;
                        cin>>sum_opt;
                        switch (sum_opt)
                        {
                        case 1:
                            for ( i = 0; i < size; i++)
                            {
                                amount += vector[i];
                            }
                            cout<<"El resultado de la suma de los terminos del vector es de "<<amount;JUMP;
                            break;

                        case 2:
                            do // 2nd Loop for restart if there's a negative value for size
                            {   
                                NORMAL;
                                cout<<"Ingrese el tamaño del vector: ";
                                cin>>size;
                                JUMP;
                                if (size<1) // Validate if it's a negative value
                                {
                                    ERROR;
                                    cout<<"Tamaño inválido."; // Print ERROR
                                    SUSPENSE;
                                }
                                JUMP;
                                
                                
                            } while (size<1); // Loop while the value readed is negative
                            JUMP;

                            // Show vector's fill options

                            do // 3rd loop for repeat this section if user select an invalid option like 0 or 3
                            {   
                                NORMAL;
                                cout<<"¿Cómo desea llenar el vector?";JUMP;
                                cout<<"-----------------------------";JUMP;
                                cout<<"Números aleatorios........[1]";JUMP;
                                cout<<"Llenar manualmente........[2]";JUMP;JUMP;
                                cout<<"> ";cin>>fill; // Read user's option
                                JUMP;

                                switch (fill) 
                                {
                                case 1:
                                    //4th Loop in case the lower limit be bigger than the higher limit
                                    do
                                    {
                                        // In case the user pick the random fill option ask for the number's range 
                                        NORMAL;
                                        cout<<"Ingrese el rango de números. ";JUMP;
                                        cout<<"Desde: ";cin>>range1;
                                        cout<<"Hasta: ";cin>>range2;
                                        if (range1>range2) // Validate that first range is the lower than second
                                        {
                                            ERROR;
                                            cout<<"El limite inferior debe ser menor.";JUMP; // Print Error in case that happen
                                            SUSPENSE;
                                        }
                                        JUMP;

                                    } while (range1 > range2); // Do it while user's input be 1st range > 2nd range

                                    // Show the vector
                                    JUMP;
                                    for ( i = 0; i < size; i++)
                                    {
                                        aleatory = range1 + rand ()% ((range2+1)-range1); // Gen the vector with users range
                                        vector[i] = aleatory; // Save the values in the main vector
                                        ordered[i] = vector[i]; // Also save same info in the vector we'll use to order it

                                        if (comas==0)
                                        {
                                            cout<<"VECTOR.\n"; // Print the title
                                        }
                                        cout<<vector[i]; // Print the vector

                                        comas++; // Counter for comas and final point
                                        if (comas<size)
                                        {
                                            cout<<", "; // While counter be lower than the vector's size print comas
                                        }
                                        else
                                        {
                                            cout<<"."; // If it gets the final term of the vector print a point
                                        }
                                    }
                                    
                                    break;


                                case 2:

                                    cout<<"Ingrese los valores del vector: \n"; // In case the user pick the manual fill option ask for the each number
                                    for ( i = 0; i < size; i++)
                                    {
                                        cout<<"> ";cin>>vector[i];
                                        ordered[i]=vector[i];
                                    }
                                    
                                    JUMP;
                                    // Show vector
                                    for ( i = 0; i < size; i++)
                                    {
                                        if (comas==0)
                                        {
                                            cout<<"VECTOR.\n";
                                        }
                                        cout<<vector[i];
                                        comas++;
                                        if (comas<size)
                                        {
                                            cout<<", ";
                                        }
                                        else
                                        {
                                            cout<<".";
                                        }
                                    }
                                    
                                    break;
                                    
                                    break;
                                
                                default:
                                    break;
                                }

                            } while ((fill>2)||(fill<1));
                        break;
                        }

                    case 2:

                        break;

                    case 3:

                        break;

                    case 4:

                        break;            

                    case 5:

                        break;

                    case 6:

                        break;    
                        
                    case 7:
                        back=true;
                        subtittle_enable=true;
                        break;

                    case 8:
                        CLEAR;
                        TITTLE;
                        cout<<"¿Estás seguro?";JUMP;
                        cout<<"Si.........[1]";JUMP;
                        cout<<"No.........[2]";JUMP;JUMP;
                        cout<<"> ";cin>>opt4;
                        break;

                    default:
                        CLEAR;
                        TITTLE;
                        ERROR;
                        cout<<"ERROR. Ingrese una opción válida.";JUMP;
                        break;
                    }
                    
                } while ((opt4<1) || (opt4>8));
            }

        } while (back==true);
        







        // TODO:
        //-------Repetir el programa-------//

        if (opt2==8)
        {
            do
            {
                JUMP;PAUSE;
                CLEAR;
                NORMAL;
                TITTLE;
                cout<<"¿Quieres salir del programa?";JUMP;
                cout<<"Si......................[1]";JUMP;
                cout<<"No......................[2]";JUMP;JUMP;
                cout<<"> ";cin>>opt;
                switch (opt)
                {
                case 1:
                    CLEAR;
                    TITTLE;
                    cout<<"¿Estás seguro?";JUMP;
                    cout<<"Si.........[1]";JUMP;
                    cout<<"No.........[2]";JUMP;JUMP;
                    cout<<"> ";cin>>opt;
                    break;

                case 2:

                    break;

                default:
                    CLEAR;
                    TITTLE;
                    ERROR;
                    cout<<"ERROR. Ingrese una optión válida.";JUMP;
                    break;
                }
                
            } while ((opt>2)||(opt<1));
        }

    } while ((opt==2)||(opt2==6));
 
    JUMP;
    PAUSE;
    return 0;
}