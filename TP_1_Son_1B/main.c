#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main ()
{
    char seguir='s';
    int opcion=0;
    float numero1=0;
    float numero2=0;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%.2f)\n", numero1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("\nIngrese la opcion: ");
        scanf("%d",&opcion);

        validoNumero(opcion, 1, 9, "opcion: ");

        switch(opcion)
        {
            case 1:
                printf("\nIngrese el primer operando: ");
                scanf("%f", &numero1);
                system("cls");
                break;
            case 2:
                printf("\nIngrese el segundo operando: ");
                scanf("%f", &numero2);
                system("cls");
                break;
            case 3:
                suma(numero1, numero2);
                system("pause");
                system("cls");
                break;
            case 4:
                resta(numero1, numero2);
                system("pause");
                system("cls");
                break;
            case 5:
                division(numero1, numero2);
                system("pause");
                system("cls");
                break;
            case 6:
                multiplicacion(numero1, numero2);
                system("pause");
                system("cls");
                break;
            case 7:
                factorial(numero1);
                printf("\nEl factorial de %d es = %d\n", (int)numero1, factorial(numero1));
                system("pause");
                system("cls");
                break;
            case 8:
                suma(numero1, numero2);
                resta(numero1, numero2);
                division(numero1, numero2);
                multiplicacion(numero1, numero2);
                factorial(numero1);
                printf("\nEl factorial de %d es = %d\n", (int)numero1, factorial(numero1));
                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }//while(seguir=='s')

    return 0;
}
