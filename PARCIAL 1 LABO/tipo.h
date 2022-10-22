#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED
typedef struct{
    int id;
    char descripcion[20];
}eTipo;

int mostrarTipo(eTipo tipo[], int tam, int clear);
int obtenerDescripcionTipo(int id, char descripcion[], eTipo tipo[], int tam);
int validarIdTipo(int id, eTipo tipo[], int tam);



#endif // TIPO_H_INCLUDED
