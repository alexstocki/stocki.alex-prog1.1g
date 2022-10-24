#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"


float aplicarAumento(float precio){
    float aumento = (precio * 5) / 100;
    float precioFinal = precio + aumento;

    return precioFinal;
}

int reemplazarCaracteres(char cadena[], char caracterUno, char  caracterDos){
    int i = 0, contador = 0;

    do{
        if(cadena[i] == caracterUno){
            cadena[i] = caracterDos;
            contador++;
        }
        i++;
    }while(cadena[i] != '\0');

    return contador;
}

void ordenarVacunas(eVacuna lista[], int TAM){
    eVacuna auxVacuna;
    if(lista != NULL && TAM > 0){
        for(int i=0; i<TAM-1; i++){
            for(int j=i+1; j<TAM; j++){
                if(lista[i].tipo == lista[j].tipo){
                if(lista[i].efectividad < lista[j].efectividad){
                    auxVacuna = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxVacuna;
                }
                } else if(lista[i].tipo > lista[j].tipo){
                    auxVacuna = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxVacuna;
               }
            }
        }
    }
}

void hardcodearVacunas(eVacuna lista[]){
    lista[0].id = 1;
    strcpy(lista[0].nombre, "Pfizer");
    lista[0].tipo = 'c';
    lista[0].efectividad = 90.50;

    lista[1].id = 2;
    strcpy(lista[1].nombre, "China");
    lista[1].tipo = 'd';
    lista[1].efectividad = 79.99;

    lista[2].id = 3;
    strcpy(lista[2].nombre, "Moderna");
    lista[2].tipo = 'a';
    lista[2].efectividad = 92.50;

    lista[3].id = 4;
    strcpy(lista[3].nombre, "Sputnik");
    lista[3].tipo = 'c';
    lista[3].efectividad = 78.88;

    lista[4].id = 5;
    strcpy(lista[4].nombre, "Ultra");
    lista[4].tipo = 's';
    lista[4].efectividad = 90.01;
}

void printVacunas(eVacuna vacuna){
    printf("%d\t%s\t%c\t%.2f\n",vacuna.id, vacuna.nombre, vacuna.tipo, vacuna.efectividad);
}

void printListaVacunas(eVacuna listaVacunas[], int TAM){
    printf("Id\t\tNombre\tTipo\tEfectividad\n\n");
    for(int i=0; i<TAM; i++){
        printVacunas(listaVacunas[i]);
    }
}

