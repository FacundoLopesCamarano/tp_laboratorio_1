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
    char opcion;
    char seguir = 's';
    char confirma;

    do
    {


        printf("Ingrese un operando: ");
        scanf("%d", &numb1);
        printf("Ingrese otro operando: ");
        scanf("%d", &numb2);


        printf("***Menu de operaciones***\n");
        printf("a Calcular Suma \n");
        printf("b Calcular Resta \n");
        printf("c Calcular Division \n");
        printf("d Calcular Multiplicacion \n");
        printf("e Calcular Factorial \n");
        printf("f Salir del programa\n");
        printf("Ingrese opcion:");
        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
        case 'a':
            suma = sumarNumeros(numb1,numb2);
            printf("El resultado de la suma es: %d\n ", suma);
            break;
        case 'b':
            resta = restarNumeros(numb1, numb2);
            printf("El resultado de la resta es: %d\n ", resta);
            break;
        case 'c':
            if(numb2!=0)
            {
                division = (float)dividirNumeros(numb1,numb2);
                printf("El resultado de la division es: %.2f\n", division);
            }
            else
            {
                printf("No se puede dividir por 0\n");
            }
            break;
        case 'd' :
            multiplicacion = multiplicarNumeros(numb1,numb2);
            printf("El resultado de la suma es: %d\n", multiplicacion);
            break;
        case 'e':
            break;
        case 'f':
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
