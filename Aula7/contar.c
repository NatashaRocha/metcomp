#include <stdio.h>

void contar();

int main(){
  const int n = 10;
  int i;

  for (i=0; i < n; i++) contar(i);

  return 0;
}

void contar(){
  static int contador = 1;
  int k = 1;
  printf( "contador = %d   k = %d\n", contador, k);
  k++;
  contador++;
}

