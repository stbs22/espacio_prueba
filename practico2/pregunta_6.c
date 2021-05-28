#include "pregunta_6.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Esteban Hernández

char* comuna_mas_casos_chile(ciudad** tabla, int number){
    //no se esta trabajando con encadenamiento
    int valor = 0;
    char *mayor;
    while(tabla != NULL){
        if(tabla->casos > valor){
            valor = tabla->casos;
            mayor = tabla->comuna;
        }
        tabla = tabla->sgte;
    }
    return mayor;
}