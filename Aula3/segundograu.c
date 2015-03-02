/* Programa para calculo das raizes de uma equacao do segundo grau */

#include <stdio.h>
#include <math.h>

main()
{
	float A,B,C,raiz1,raiz2; //Para raizes complexas raiz2 sera a parte imaginaria
	printf("Digite os coeficientes da equacao (a, b e c, respectivamente):\n");
	scanf("%f %f %f",&A,&B,&C);
	if (A == 0) printf("Como a = 0, a equacao escolhida nao e do segundo grau.\n",A,B,C);
	else if (B*B - 4*A*C > 0) {
		raiz1 = (-B + sqrt(B*B - 4*A*C))/(2*A);
		raiz2 = (-B - sqrt(B*B - 4*A*C))/(2*A);
		printf("a = %.2f\nb = %.2f\nc = %.2f\nA equacao possui 2 raizes reais: %.2f e %.2f\n",A,B,C,raiz1,raiz2);}
	else if (B*B - 4*A*C == 0) {
		raiz1 = -B/(2*A);
		raiz2 = raiz1;
		printf("a = %.2f\nb = %.2f\nc = %.2f\nA equacao possui 1 raiz real: %.2f\n",A,B,C,raiz1);}
	else {
		raiz1 = -B/(2*A);
		raiz2 = sqrt(-(B*B - 4*A*C))/(2*A);
		printf("a = %.2f\nb = %.2f\nc = %.2f\nA equacao possui 2 raizes complexas: %.2f + i(%.2f) e %.2f - i(%.2f)\n",A,B,C,raiz1,raiz2,raiz1,raiz2);}
}
