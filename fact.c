#include <stdio.h>
#include <stdlib.h>
//Esto es un comentario para rellenar
//comentario extraO
#include "calcfact.h"

//Calculadora de factoriales
int main(int argc, char **argv)
{
  int numero;
  if (argc!=2)
  {
	printf("uso: %s <numero>\n", argv[0]);
        exit(-1);
  }
  numero=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", numero, calcfact(numero));
}
