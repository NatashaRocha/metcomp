#include <stdio.h>

int entrada(){
    int n;
    printf("Programa para calculo de fatorial\n");
       printf("Entrada de dados. Um valor negativo encerra o programa\n"
              "Fatorial de: ");
       scanf("%d", &n);            /* leitura do valor de n */
       return n;                   /* retorna o valor de n para o programa */
}
