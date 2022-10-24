#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
     int id;
     char nombre[20];
     char tipo;
     float efectividad;
}eVacuna;

float aplicarAumento(float precio);
int reemplazarCaracteres(char cadena[], char caracterUno, char  caracterDos);

void hardcodearVacunas(eVacuna lista[]);
void ordenarVacunas(eVacuna lista[], int TAM);


void printVacunas(eVacuna vacuna);
void printListaVacunas(eVacuna listaVacunas[], int TAM);

#endif // FUNCIONES_H_INCLUDED
