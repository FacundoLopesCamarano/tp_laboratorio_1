#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lopes.h"



int main()
{
    int numb1;
    int numb2;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int fact1;
    int fact2;
    char seguir = 's';
    char confirma;
    int flagOperaciones = 0;

    do
    {


        switch (menu())
        {
        case '1':
            printf("Ingresar 1er operando: ");
            scanf("%d", &numb1);
            break;
        case '2':
            printf("Ingresar 2do operando: ");
            scanf("%d", &numb2);
            break;
        case '3':
            suma = sumarNumeros(numb1, numb2);
            resta = restarNumeros(numb1, numb2);
            multiplicacion = multiplicarNumeros(numb1, numb2);
            division = dividirNumeros(numb1, numb2);
            fact1 = factorialFunc(numb1);
            fact2 = factorialFunc(numb2);
            flagOperaciones=1;
            break;
        case '4':
            if(flagOperaciones==1)
            {
                printf("a) El resultado de %d+%d es: %d \n \n",numb1, numb2, suma);
                printf("b) El resultado de %d-%d es: %d \n \n",numb1, numb2, resta);
                if(numb2!=0)
                    {
                    printf("c) El resultado de %d/%d es: %.2f \n \n",numb1, numb2, division);
                    }
                    else
                        {
                            printf("No se puede dividir por 0");
                        }
                printf("d) El resultado de %d*%d es: %d \n \n",numb1, numb2, multiplicacion);
                printf("e) El factorial de %d es: %d y El factorial de %d es: %d \n \n ",numb1, fact1,numb2,fact2);
                system("pause");
            }
            else
            {

                printf("Primero debe calcular las operaciones \n");
                system("pause");
            }
            break;
        case '5':
            printf("confirma salida? :\n");
            fflush(stdin);
            scanf("%c", &confirma);
            if(confirma == 's')
            {
                seguir = 'n';
            }
            break;

        default:
            printf("Opcion invalida!!!\n\n");

        }

    }
    while(seguir=='s');







    return 0;
}
