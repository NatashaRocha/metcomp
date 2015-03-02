/*
	Objetivo: Mostrar os possiveis problemas que acotecem com divisoes entre float e inteiros
	Autor: Sandra Amato	
	Data: 11/08/2008
        Modificado por Erica Polycarpo para ficar de acordo com o padrao ansi c
        Em 24/08/2009
*/

/* Inclusão da biblioteca stdio.h que permite usar os comandos
   printf e scanf, ou seja, imprimir e dar valores às variaveis */
#include <stdio.h>

/* Inicio do programa principal  */
int main()
{
   float a, b, soma;				/* Declarando as variaveis a, b e soma como reais */   
   printf("Digite os valores de a e b\n");	/* Imprime na tela a mensagem entre aspas! */
   scanf("%f  %f",&a, &b);			/* Pede os valores das variaveis a e b */
   soma = a + b;				/* Calculando o valor da variavel soma */
   printf(" A soma e' %f\n",soma);		/* Imprime o valor da variavel soma */
   return 0;
}	/* Fim do programa */
