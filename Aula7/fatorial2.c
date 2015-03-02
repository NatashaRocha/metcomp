/*
Programa que calcula o fatorial de um numero sem uso de funcao
*/

#include <stdio.h>

int main()                  /* inicio da funcao main */
{
    double nfatorial = 1.;
    int n, i;
    printf("Programa para calculo de fatorial\n");
    while(1){
       printf("Entrada de dados. Um valor negativo encerra o programa\n"
              "Fatorial de: ");
       scanf("%d", &n);                        /* leitura do valor de n */

       if(n<0) return 0;           /* encerra programa se n for negativo */

       i = n;
       nfatorial = 1.;
       for (; i > 1; i--) nfatorial *= i;      /* calculo do fatorial */
       
       printf("\n %d! = %.0f\n",n,nfatorial);  /* impressao do resultado */
    }
}

