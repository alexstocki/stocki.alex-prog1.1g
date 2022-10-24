#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 5

int main()
{
    float precio = aplicarAumento(100);
    printf("Precio con aumento: %.2f\n", precio);

    char nombre[6] = "lelele";
    int reemplazos = reemplazarCaracteres(nombre, 'e', 'a');
    printf("Cantidad de veces que se reemplazo la letra E: %d\n\n", reemplazos);

    eVacuna lista[5];
    hardcodearVacunas(lista);
    printf("Antes de ordenar\n");
    printListaVacunas(lista, TAM);

    printf("\nDespues de ordenar\n");
    ordenarVacunas(lista, TAM);
    printListaVacunas(lista, TAM);
    return 0;
}
