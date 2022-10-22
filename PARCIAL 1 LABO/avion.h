#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miBiblioteca.h"
#include "aerolinea.h"
#include "tipo.h"



typedef struct{
    int id;
    int idAerolinea;
    int idTipo;
    int capacidad;
    int isEmpty;
}eAvion;


#endif // AVION_H_INCLUDED

int inicializarAviones(eAvion vecAvion[], int tamA);
int buscarLibre(int* pIndice, eAvion vecAvion[], int tamA);

int altaAvion(int* pIdAvion, eAvion vecAvion[], eAerolinea vecAerolinea[], eTipo vecTipo[], int tamA, int tamAe, int tamT);
void mostrarUnAvion (eAvion vecAvion, eAerolinea vecAerolinea[], eTipo vecTipo[], int tamAe, int tamT);
void mostrarAvionFila (eAvion vecAvion, eAerolinea vecAerolinea[], eTipo vecTipo[], int tamAe, int tamT);
int mostrarAvionesCompleto (eAvion vecAvion[], eAerolinea vecAerolinea[], eTipo vecTipo[], int tamA, int tamAe, int tamT, int clear);
int ordenarAvionAerolineaCapacidad(eAvion aviones[], int tam);

int hardcodearAviones(int* pId, eAvion vecAviones[], int tam, int cant);

int buscarAvion(int id, int* pIndice, eAvion vec[], int tam);
int modificarBicicleta(eAvion vecAvion[], eAerolinea vecAerolinea[], eTipo vecTipo[], int tamA, int tamAe, int tamT);
int menuModificacion();
int bajaAvion(eAvion vecAvion[], eAerolinea vecAerolinea[], eTipo vecTipo[], int tamA, int tamAe, int tamT);
