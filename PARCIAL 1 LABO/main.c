#include <stdio.h>
#include <stdlib.h>
#include "miBiblioteca.h"
#include "avion.h"
#define TAM_A 15
#define TAM_T 4
#define TAM_AE 5

int main()
{
    char salir = 'n';
    eAvion aviones[TAM_A];
    int nextAvionId=100;


    eAerolinea aero[TAM_AE]=
    {
        {1000, "Lan"},
        {1001, "Iberia"},
        {1002, "Norgwegian"},
        {1003, "American"},
        {1004, "Austral"},
    };

    eTipo tipos[TAM_T]=
    {
        {5000, "Jet"},
        {5001, "Helice"},
        {5002, "Planeador"},
        {5003, "Carga"},
    };


    inicializarAviones(aviones, TAM_A);
    hardcodearAviones(&nextAvionId, aviones, TAM_A, 11);

    do
    {
        switch(menu())
        {
        case 1:
            if(altaAvion(&nextAvionId, aviones, aero, tipos, TAM_A, TAM_AE, TAM_T)==1)
            {
                printf("Alta Exitosa\n");
            }
            else
            {
                printf("Alta ERRONEA\n");
            }
            break;

        case 2:
            modificarBicicleta(aviones, aero, tipos, TAM_A, TAM_AE, TAM_T);
            break;
        case 3:
            bajaAvion(aviones, aero, tipos, TAM_A, TAM_AE, TAM_T);
            break;

        case 4:

          //  mostrarUnAvion(aviones[1], aero, tipos, TAM_AE, TAM_T);
          //  mostrarAvionFila(aviones[0], aero, tipos, TAM_AE, TAM_T);
            ordenarAvionAerolineaCapacidad(aviones, TAM_A);
            mostrarAvionesCompleto(aviones, aero, tipos, TAM_A, TAM_AE, TAM_T, 1);

            break;
        case 5:
            //LISTAR AEROLINEAS
            mostrarAerolinea(aero, TAM_AE, 1);
            break;
        case 6:
            //LISTAR TIPOS
            mostrarTipo(tipos, TAM_T, 1);
            break;
        case 10:
            salir='s';
            break;
        default:
            printf("OPCION INCORRECTA \n");
            break;

        }
        system("pause");
    }
    while(salir == 'n');
    return 0;
}




