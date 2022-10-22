#ifndef AEROLINEA_H_INCLUDED
#define AEROLINEA_H_INCLUDED

typedef struct{
    int id;
    char descripcion[20];
}eAerolinea;

int mostrarAerolinea(eAerolinea aero[], int tam, int clear);
int obtenerDescripcionAerolinea(int id, char descripcion[], eAerolinea aero[], int tam);
int validarIdAerolinea(int id, eAerolinea aero[], int tam);



#endif // AEROLINEA_H_INCLUDED
