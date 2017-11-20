//modificado por davleorui
#include <stdio.h>
#include <stdlib.h>
//Esto es un comentario para rellenar
//comentario extraO
#include "calcfact.h"

// Calculadora de factoriales
int main(int argc, char **argv) {
  int num;
  
  if (argc!=2) {
	printf("uso: %s <nero>\n", argv[0]);
        exit(-1);
  }

  num=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", num, calcfact(num)); 
  printf ("Prueba Fran");

}
