#include "pregunta_1.h"

//Esteban Hernández 20.471.735-4

int profundidad(nodo *raiz) {

    if (raiz == NULL) return 0;
    
    else {
        int p_izquierda = profundidad(raiz->left);
        int p_derecha = profundidad(raiz->right);
        int p_medio = profundidad(raiz->down);

        if (p_izquierda > p_derecha && p_izquierda > p_medio)
            return (p_izquierda + 1);

        else if( p_derecha > p_izquierda && p_derecha > p_medio)
            return (p_derecha + 1);

        else if(p_medio > p_izquierda && p_medio > p_derecha)
            return (p_medio + 1);
    }   
}

