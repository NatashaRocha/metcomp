/* Programa que calcula a exponencial de valores de x entre 0 a 2 em intervalos de 0.1 usando series de taylor e compara o valor obtido com o valor exato da exponencial. */

#include <stdio.h>
#include <math.h>

int main()
{
	int N,n;
	float x,erro;
	double serie = 0;
	printf("Serie de Taylor truncada para valores de x entre 0 e 2 em passos de 0.1.\nDigite o valor de N:\n");
	scanf("%d",&N);
	for (x = 0 ; x < 2.1 ; x += .1) {
		for (n = 0 ; n <= N ; n += 1) serie += pow(x,n)/fat(n); /* Serie de Taylor */
		erro = fabs(serie - exp(x)); /* Diferenca entre o valor obtido e o valor exato da exponencial */
		printf("Para x = %.1f:\n\n\tSerie = %f\n\tErro = %f\n\n",x,serie,erro);:
		serie = 0; /* Variavel serie foi resetada para o calculo da exponencial do proximo valor de x */}
}

/* Calculo do fatorial de um numero: */
int fat(int n)
{
	if (n < 2) return 1;
	else return n*fat(n-1);
}
