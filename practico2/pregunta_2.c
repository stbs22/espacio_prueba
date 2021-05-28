#include "pregunta_2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Esteban Hernández

void insertar(ciudad** tabla, ciudad* nueva_ciudad){
    //no se logró trabajar con el encadenamiento
    while(1){
        if(tabla == NULL){
            tabla->id_region = nueva_ciudad->id_region + 1; // emplear hash sumando 1
            tabla->region[50] = nueva_ciudad->region[50];
            tabla->id_comuna = nueva_ciudad->id_comuna;
            tabla->comuna[50] = nueva_ciudad->comuna[50];
            tabla->casos = nueva_ciudad->casos;
            tabla->poblacion = nueva_ciudad->poblacion;
            return;
        }
        tabla = tabla->sgte;
    }
}