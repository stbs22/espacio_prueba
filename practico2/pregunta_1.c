#include "pregunta_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Esteban Hernández

ciudad** crear_tabla_hash(int n){
    //no se logró trabajar con el encadenamiento
    int i = 0;
    struct ciudad *item = (struct ciudad*) malloc(sizeof(struct ciudad));
    struct ciudad **tablaHash[n] = (struct ciudad*) malloc(sizeof(struct ciudad)); 
    while(i < n){
        tablaHash[i]->id_region = NULL;
        tablaHash[i]->region[50] = NULL;
        tablaHash[i]->id_comuna = NULL;
        tablaHash[i]->comuna[50] = NULL;
        tablaHash[i]->casos = NULL;
        tablaHash[i]->poblacion = NULL;
        i++;
        if(i != n) tablaHash[i-1]->sgte = NULL;
    }
    return tablaHash;
}