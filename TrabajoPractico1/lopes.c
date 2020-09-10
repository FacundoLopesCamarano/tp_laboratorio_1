#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



float calcularPromedio(int a, int b){

    float promedio;

    promedio = (float)(a+b)/2;

    return promedio;

}


int sumarNumeros(int primerNumero, int segundoNumero)
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}


int restarNumeros(int primerNumero, int segundoNumero)
{
    int resta;
    resta = primerNumero - segundoNumero;
    return resta;
}


int multiplicarNumeros(int primerNumero, int segundoNumero)
{
    int multiplicar;
    multiplicar = primerNumero * segundoNumero;
    return multiplicar;
}



int dividirNumeros(int primerNumero, int segundoNumero)
{
    int dividir;
    dividir = (float)primerNumero/segundoNumero;
    return dividir;

}




long long int factorialFunc(int num)
{
    int fact = 1;

    for( int i = 1; i <= num; i++)
   {
       fact = fact * i;
   }

   return fact;

}


int menu(int numb1,int numb2){

    char opcion;
     system("cls");

        printf("***Menu de operaciones***\n\n\n");
        printf("1. Ingresar 1er operando (A=%d) \n", numb1);
        printf("2. Ingresar 2do operando (B=%d) \n",numb2);
        printf("3. Calcular todas las operaciones \n\n");
                printf( "a) Calcular la suma (A+B) \n ");
                printf( "b) Calcular la resta (A-B) \n ");
                printf( "c) Calcular la division (A/B) \n ");
                printf( "d) Calcular la multiplicacion (A*B)\n ");
                printf( "e) Calcular el factorial (A!) \n ");
        printf("4. Informar resultados \n\n");
                printf( "a) El resultado de A+B es: r \n ");
                printf( "b) El resultado de A-B es: r \n ");
                printf( "c) El resultado de A/B es: r \n ");
                printf( "d) El resultado de A*B es: r \n ");
                printf( "e) El factorial de A es: r1 y El factorial de B es: r2 \n ");
        printf("5. Salir \n ");
        printf("Seleccione opcion:");
        fflush(stdin);
        scanf("%c", &opcion);

        return opcion;


}



