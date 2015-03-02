/* Programa para descobrir o maior numero em uma lista de 3 numeros */

#include <stdio.h>

main()
{
	int x;
	int a,b,c;
	printf("Escolha 3 números:\n");
	scanf("%d %d %d",&a,&b,&c);
	x = a;
	if (b > x) x = b;
	if (c > x) x = c;
	printf("O maior número é %d\n",x);
}
