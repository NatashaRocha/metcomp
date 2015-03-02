/*
Programa que calcula o fatorial de um numero com uso de funcao
*/

#include <stdio.h>

int entrada(void);                 /* prototipo da funcao entrada  */
double fatorial(int n);            /* prototipo da funcao fatorial */
void saida(int n, double fat);     /* prototipo da funcao saida    */ 

int main()                         /* inicio da funcao main */
{
    double nfatorial;
    int n;    
    while(1){
      n = entrada();
      if(n<0) return 0;           /* encerra programa se n for negativo */
      nfatorial = fatorial(n);    /* chamada da funcao fatorial */
      saida(n, nfatorial);        /* chamda da funcao saida      */
    }
}

int entrada(){
    int n;
    printf("Programa para calculo de fatorial\n");
    printf("Entrada de dados. Um valor negativo encerra o programa\n"
              "Fatorial de: ");
    scanf("%d", &n);
    return n;                  /* retorna o valor de n para o programa */
}

double  fatorial(int n){          /* inicio da funcao fatorial */
   double fat=1.0;
   for (; n > 1; n--) fat *= n;
   return fat;                    /* funcao encerra com retorno do valor */
}

void saida(int n, double fat){
   printf("\n %d! = %.0f\n",n,fat); /* impressao do resultado  */
}


