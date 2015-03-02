/* Programa serie de taylor para cos(x) */
#include <stdio.h>
#include <math.h>

main()
{
	float x, cos;
	int i, N, n;
	n = 0

	for (i = 1; i <= N; i += 1){
		cos += pow(-1,n/2)*pow(x,n)/fat(n);
		n += 2
	}
}

/* Calculo do fatorial de um numero: */
int fat(int n)
{
	if (n < 2) return 1;
	else return n*fat(n-1);
}
