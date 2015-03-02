/*
Programa com uso de funcao
*/

#include "usaFatorial.h"

int main()                         /* inicio da funcao main */
{
    double nfatorial;
    int n;
    while(1){
      n = entrada();              /* chamda da funcao entrada */
      if(n<0) return 0;           /* encerra programa retornando o valor 0 */
      nfatorial = fatorial(n);    /* chamada da funcao fatorial */
      saida(n, nfatorial);        /* chamada da funcao saida */
    }
}
