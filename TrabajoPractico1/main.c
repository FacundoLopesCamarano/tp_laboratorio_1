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
    int division;
    int multiplicacion;
    int factorial;
    char opcion;
    char seguir = 's';
    char confirma;
    int flagOperaciones = 0;

    do
    {
        system("cls");

        printf("***Menu de operaciones***\n");
        printf("1 Ingresar primer numero \n");
        printf("2 Ingresar segundo numero \n");
        printf("3 Calcular operaciones \n");
        printf("4 Mostrar resultados \n");
        printf("5 Salir del programa");
        printf("Ingrese opcion:");
        fflush(stdin);
        scanf("%c", &opcion);


        switch(opcion)
        {
        case '1':
            printf("Ingrese un operando: ");
            scanf("%d", &numb1);
            break;
        case '2':
            printf("Ingrese otro operando: ");
            scanf("%d", &numb2);
            break;
        case '3':
            suma = sumarNumeros(numb1, numb2);
            resta = restarNumeros(numb1, numb2);
            multiplicacion = multiplicarNumeros(numb1, numb2);
            division = dividirNumeros(numb1, numb2);
            factorial = factorialFunc(numb1);
            factorial = factorialFunc(numb2);
            flagOperaciones=1;
            break;
        case '4':
            if(flagOperaciones==1){
            printf("El resultado de %d + %d es: %d\n \n",numb1, numb2, suma);
            printf("El resultado de %d - %d es: %d\n \n",numb1, numb2, resta);
            printf("El resultado de %d * %d es: %d\n \n",numb1, numb2, multiplicacion);
            printf("El resultado de %d / %d es: %d\n \n",numb1, numb2, division);
            printf("El factorial de %d es: %d\n \n",numb1,factorial);
            printf("Eñ factorial de %d es: %d\n \n",numb2,factorial);
            system("pause");
            }
            else{

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
