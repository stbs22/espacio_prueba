#include "pregunta_3.h"

//Esteban Hernández 20.471.735-4

int frecuencia_de_una_nota(nodo* raiz, int nota) { 
    
    int frecuencia = 0;

    while(raiz->nota != nota){

        if(raiz->nota > nota && raiz->right != NULL) raiz = raiz->right;
        
        if(raiz->nota < nota && raiz->left != NULL) raiz = raiz->left;

        if(raiz->left == NULL && raiz->right == NULL) break;

    }

    if(raiz->nota == nota){
        
        if(raiz->down == NULL) return 1;

        while(raiz->down != NULL){
            raiz = raiz->down;
            frecuencia++;
        }
    }

    return frecuencia;
}   