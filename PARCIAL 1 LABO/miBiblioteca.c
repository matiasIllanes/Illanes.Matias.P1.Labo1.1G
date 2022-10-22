#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miBiblioteca.h"
int menu()
{
    int opcion;
    system("cls");

    printf(" *** ABM SERVICIO DE VUELOS ***\n");
    printf("1- Alta Avion\n");
    printf("2- Modificar Avion\n");
    printf("3- Baja Avion\n");
    printf("4- Listar Aviones\n");
    printf("5- Listar Aerolineas\n");
    printf("6- Listar Tipos\n");
    printf("7- Listar Destinos\n");
    printf("8- Alta Vuelo\n");
    printf("9- Listar Vuelos\n");
    printf("10- Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    system("cls");

    return opcion;
}



int getIntValid(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo)
{
    int num;
    int todoOk=0;
    if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL)
    {

        printf("%s", mensaje);
        while(scanf("%d",&num)!=1 || num<minimo || num>maximo)
        {
            fflush(stdin);
            printf("%s", mensajeError);
            printf("%s", mensaje);
        }
        *pResultado = num;
        todoOk=1;
    }
    return todoOk;
}
int getIntValidMin(int* pResultado, char* mensaje, char* mensajeError, int minimo){
    int num;
    int todoOk=0;
    if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL)
    {

        printf("%s", mensaje);
        while(scanf("%d",&num)!=1 || num<minimo)
        {
            fflush(stdin);
            printf("%s", mensajeError);
            printf("%s", mensaje);
        }
        *pResultado = num;
        todoOk=1;
    }
    return todoOk;


}

int getFloatValid(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo)
{
    float num;
    int todoOk=0;

    if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL)
    {
        printf("%s", mensaje);
        while(scanf("%f",&num)!=1 || num<minimo || num>maximo)
        {
            fflush(stdin);
            printf("%s", mensajeError);
            printf("%s", mensaje);
        }
        *pResultado = num;
        todoOk=1;
    }
    return todoOk;
}


int getCharValid(char* pCaracter, char* mensaje, char* mensajeError, char caracterA, char caracterB)
{
    int todoOk=0;
    char caracter;
    if(pCaracter!=NULL && mensaje!=NULL && mensajeError!=NULL)
    {
        printf("%s", mensaje);
        fflush(stdin);
        scanf("%c", &caracter);
        *pCaracter = caracter;
        while(caracter!= caracterA && caracter!= caracterB)
        {
            printf("%s", mensajeError);
            printf("%s", mensaje);
            fflush(stdin);
            scanf("%c", &caracter);
            *pCaracter = caracter;
        }

        todoOk=1;
    }

    return todoOk;
}


int getString(char string[], char mensaje[], int tam)
{
    char auxString[1000];
    int todoOk=0;
    if (string != NULL && mensaje != NULL)
    {
        printf("%s",mensaje);
        fflush(stdin);
        scanf("%[^\n]", auxString);
        while (strlen(auxString) > tam)
        {
            printf("Reingrese: ");
            fflush(stdin);
            scanf("%[^\n]", auxString);
        }
        strcpy(string, auxString);
        todoOk=1;
    }
    return todoOk;
}

int getEntero(char mensaje[])
{
    int numeroIngresado;
    printf("%s", mensaje);
    scanf("%d", &numeroIngresado);
    return numeroIngresado;
}

float getFlotante(char mensaje[])
{
    float numeroIngresado;
    printf("%s", mensaje);
    scanf("%f", &numeroIngresado);
    return numeroIngresado;
}

char getCaracter(char mensaje[])
{
    char caracterIngresado;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &caracterIngresado);
    return caracterIngresado;
}
