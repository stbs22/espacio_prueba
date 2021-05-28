#include "pregunta_4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Esteban Hernández

void editar_nombre(ciudad** tabla, int id_region, int id_comuna,char* nuevo_nombre){
    while(tabla != NULL){
        if(tabla->id_region == id_region && tabla->id_comuna == id_comuna ){
            tabla->comuna = nuevo_nombre;
            return;
        }
        tabla = tabla->sgte;
    }
    printf("no se ha encontrado los id para ningun dato\n");
    return;
}

