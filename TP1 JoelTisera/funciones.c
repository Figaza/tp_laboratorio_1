#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
float suma(float x, float y)
{
    float suma;
    suma=x+y;
    return suma;
}
float resta(float x, float y)
{
    float resta;
    resta=x-y;
    return resta;
}
float division(float x, float y)
{
    float division;
    if(y==0)
    {
        printf("No se puede dividir por 0\n");
    }
    else
    {
        division=x/y;
        printf("La division entre A y B da %.2f \n", division);
        return division;
    }

    return 0;
}
float multiplicacion(float x, float y)
{
    float multiplicacion;
    multiplicacion=x*y;
    return multiplicacion;
}
long long int factorizacion(float x)
{
    int i=(int)x;
    long long int factor=1;
    if(x>i)
    {
        printf("No se puede sacar el factorial de un numero flotante.\n");
    }
    else
    {
        if(x<0)
        {
            printf("No se puede sacar el factorial de un numero negativo. \n");
        }
        else
        {
            for(; i>0; i--)
            {
                factor=i*factor;
            }
            printf("La factorizacion de A da: %lld \n",factor);
        }
    }
    return factor;
}
