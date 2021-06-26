#include "pregunta_2.h"

//Esteban Hernández 20.471.735-4


int cantidad = 0;

int cantidad_alumnos(nodo* raiz){ 

  if(raiz->left != NULL) cantidad_alumnos(raiz->left);
  
  cantidad++;

  if(raiz->right != NULL) cantidad_alumnos(raiz->right);


  return cantidad;
}

