//modificado por david
#include <stdio.h>
#include <string.h>

//HOLI MARTA SALUDA
//Programa para saludar al mundo entero 

int main(int argc, char **argv) {
  printf("HO-LA\n");
  
  //Programa para saludar al mundo entero 
  //Imprimimos en pantalla "bye bye world"
  printf("bye bye world\n");
  
  if (argc > 1 && strcmp(argv[1], "en") == 0) {
    printf("hello world\n");
    //Programa chorra
  } 
  else {
    printf("Hola mundo\n");
  }
}

//Comentario de hello
