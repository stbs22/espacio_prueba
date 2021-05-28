#include "pregunta_3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Esteban Hernández

void borrar(ciudad** tabla, int id_region, int id_comuna){
    int i = 0;
    while(tabla != NULL){
        if(i == 0) {
            if(tabla->id_region == id_region && tabla->id_comuna == id_comuna ){
                ciudad** temp = (struct ciudad*) malloc(sizeof(struct ciudad));
                temp = NULL;
                temp->sgte = tabla-sgte;
                free(tabla);
                return;
            }
            i = 1;
        }
        if(tabla->sgte->id_region == id_region && tabla->sgte->id_comuna == id_comuna ){
            free(tabla->sgte);
            tabla->sgte = tabla->sgte->sgte;
            return;
        }
        tabla = tabla->sgte;
    }
    printf("no se ha encontrado los id para ningun dato\n");
    return;

}