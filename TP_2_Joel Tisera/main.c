#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#define TAM 20
char mostrarMenu(char[]);

int main()
{
    ePersona persona[TAM];
    inicializarEstados(persona, TAM);
    char opcion;

    do
    {
        opcion=mostrarMenu("\n1- Agregar persona\n2- Borrar persona\n3- Imprimir lista ordenada por  nombre\n4- Imprimir grafico de edades\n\n5- Salir\n");

        switch(opcion)
        {
        case '1':
            system("cls");
            agregarPersona(persona, TAM);
            break;
        case '2':
            system("cls");
            borrarPersona(persona, TAM);
            break;
        case '3':
            system("cls");
            printf("\nLista de personas: \nNOMBRE--EDAD--DNI\n");
            ordenarAlfabeticamente(persona, TAM);
            mostrarListaDePersonas(persona, TAM);
            break;
        case '4':
            graficoDeBarras(persona, TAM);
            break;
        }
    }
    while(opcion!=5);

    return 0;
}

char mostrarMenu(char menu[])
{
    char opcion;
    printf("%s", menu);
    fflush(stdin);
    opcion=getche();
    return opcion;
}
