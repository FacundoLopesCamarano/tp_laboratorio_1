#include "lopes.h"
#include <stdio.h>



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




int factorialFunc(int num)
{
    int fact = 1;

    for( int i = 1; i <= num; i++)
   {
       fact = fact * i;
   }

   return fact;

}




