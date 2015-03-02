/* Programa para calculo do fatorial de N */

#include <stdio.h>

main()
{
	int N,i,fat = 1;
	printf("Deseja calcular o fatorial de que numero?\n");
	scanf("%d",&N);
	for (i = 1; i <= N; i += 1) fat *= i;
	printf("O fatorial de %d é %d.\n",N,fat);
}
