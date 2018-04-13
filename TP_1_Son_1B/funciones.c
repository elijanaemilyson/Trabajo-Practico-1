#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/* esta funcion me sirve para validar un numero ingresado por while usando valor
maximo y minimo  */
int validoNumero(int dato, int min, int max, char mensaje[])
{
    while (dato<min || dato>max)
    {
        printf("Error: Reingrese %s: ", mensaje);
        scanf("%d", &dato);
    }

    return dato;
}


/* con esta funcion puedo sumar dos numeros y mostrarlos por printf*/
float suma(float sumando1, float sumando2)
{
    float resultado;
    resultado = sumando1 + sumando2;

    return printf("\n%.2f + %.2f = %.2f\n", sumando1, sumando2, resultado);
}

/* con esta funcion puedo restar dos numeros y mostrarlos por printf*/
float resta(float minuendo, float sustraendo)
{
    float resultado;
    resultado = minuendo - sustraendo;

    return printf("\n%.2f - %.2f = %.2f\n", minuendo, sustraendo, resultado);
}

/* funcion para multiplicar dos numeros y mostrarlos */
float multiplicacion(float multiplicando, float multiplicador)
{
    float resultado;
    resultado = multiplicando * multiplicador;

    return printf("\n%.2f * %.2f = %.2f\n", multiplicando, multiplicador, resultado);
}

/* funcion para dividir dos numeros. Especifico con un if else para el caso de que el divisor sea 0
y me señale el error de calculo */
float division(float dividendo, float divisor)
{
    float resultado;
    resultado = (float)dividendo / (float)divisor;
    if (divisor!=0)
    {
        return printf("\n%.2f / %.2f = %f\n", dividendo, divisor, resultado);
    }
    else
    {
        return printf("\nERROR: NO SE PUEDE DIVIDIR ENTRE 0\n");
    }
}

/* funcion para buscar el factorial de un numero */
int factorial(int factor)
{
    int resultado;
    if (factor==1)
    {
        return 1;
    }
    resultado = factor * factorial(factor-1);
    return resultado;
}
