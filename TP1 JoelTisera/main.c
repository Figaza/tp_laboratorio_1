#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    char opcion;
    float A;
    float B;
    int flagA=0;
    int flagB=0;
    float resultado;
    long long int factor;
    while(seguir=='s')
    {
        if(flagA==0)
        {
            printf("1- Ingresar 1er operando (A = x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A = %.2f)\n", A);
        }
        if(flagB==0)
        {
            printf("2- Ingresar 1er operando (B = y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B = %.2f)\n", B);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        opcion=getche();
        switch(opcion)
        {
            case '1':
                system("cls");
                printf("Primer operando: ");
                scanf("%f", &A);
                flagA=1;
                break;
            case '2':
                system("cls");
                printf("Segundo operando: ");
                scanf("%f",&B);
                flagB=1;
                break;
            case '3':
                system("cls");
                if(flagA==0 || flagB==0)
                {
                    printf("No se han ingresado ambos numeros. \n");
                }
                else
                {
                    resultado=suma(A,B);
                    printf("La suma da %.2f \n", resultado);
                }

                break;
            case '4':
                system("cls");
                if(flagA==0 || flagB==0)
                {
                    printf("No se han ingresado ambos numeros. \n");
                }
                else
                {
                    resultado=resta(A,B);
                    printf("La resta da %.2f \n", resultado);
                }

                break;
            case '5':
                system("cls");
                if(flagA==0 || flagB==0)
                {
                    printf("No se han ingresado ambos numeros. \n");
                }
                else
                {
                    resultado=division(A,B);
                }

                break;
            case '6':
                system("cls");
                if(flagA==0 || flagB==0)
                {
                    printf("No se han ingresado ambos numeros. \n");
                }
                else
                {
                    resultado=multiplicacion(A,B);
                    printf("La multiplicacion da %.2f \n", resultado);
                }

                break;
            case '7':
                system("cls");
                if(flagA==0)
                {
                    printf("No se ha ingresado ningun numero. \n");
                }
                else
                {
                    factor=factorizacion(A);
                }
                break;
            case '8':
                system("cls");
                if(flagA==0)
                {
                    printf("No se ha ingresado el primer operando \n");
                }
                else
                {
                    factor=factorizacion(A);
                    if(flagB==0)
                    {
                        printf("No se ha ingresado el segundo operando\n");
                    }
                    else
                    {
                        resultado=suma(A,B);
                        printf("La suma da %.2f \n", resultado);
                        resultado=resta(A,B);
                        printf("La resta da %.2f \n", resultado);
                        resultado=division(A,B);
                        resultado=multiplicacion(A,B);
                        printf("La multiplicacion da %.2f \n", resultado);
                    }
                }
                break;
            case '9':
                seguir = 'n';
                break;
            default:
                system("cls");
                printf("\nIngrese un numero del menu que sea valido.\n");
                break;
        }
    }
    return 0;
}
