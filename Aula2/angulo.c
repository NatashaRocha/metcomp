#include <stdio.h>

main()
{
	int pi = 3.141592654;
	float ang, rad;
	printf("Digite o ângulo em graus:\n");
	scanf("%f",&ang);
	rad = ang*pi/180.0;
	printf("%f graus é igual a %f radianos\n",ang,rad);
}
