/*
Programa com uso de funcao com transferencia de array
*/
#include <stdio.h>
#define n 3                    /* definicao da dimensao do array */

void inicializa (double a[], int m);       /* prototipo da funcao inicio */

int main(){                 /* inicio da funcao main, do tipo int */
   double r[n];
   int i;
   printf("Antes: \n");
   for (i = 0; i < n; i++) printf("r[%d] = %f \n", i, r[i]);
   inicializa(r, n);                    /* chamada da funcao inicio */
   printf("Depois: \n");
   for (i = 0; i < n; i++) printf("r[%d] = %f \n", i, r[i]);
   return 0;                      /* valor de retorno da funcao main */
}
void inicializa (double a[], int m){        /* inicio da funcao inicio */
  int i;
  for (i = 0; i < m; i++) a[i] = i;        /* definicao do array a */
}
