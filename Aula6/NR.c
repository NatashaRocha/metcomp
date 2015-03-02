/* Programa que encontra a primeira raiz de uma equacao usando o metodo de Newton-Raphson */

#include<stdio.h>
#include<math.h>

double f(double x){
    return exp(-x) - sin(M_PI*x/2.0); // Funcao f(x) que sera avaliada
}

double df(double x){
    return -exp(-x) - cos(M_PI*x/2.0)*M_PI/2.0; // Derivada de f(x)
}

int main(void){
    double x, x0, eps;
    int Nit = 1, limite;
    eps = 1e-8; // Precisao desejada (relativa)
	limite = 1e5; // Numero maximo de iteracoes

    printf("Escolha um valor de x proximo a raiz desejada:\n");
    scanf("%lf", &x0);

    if (df(x0) == 0){
	printf("Nao e possivel usar o metodo Newton-Raphson com o valor selecionado (sua derivada e igual a 0)\n");
	return 1;
    }

    /* Newton-Raphson */
    for (Nit = 1; Nit < limite; Nit++){
		x = x0 - f(x0)/df(x0);
		if (fabs((x - x0)/x) < eps) break;
		else x0 = x;
    }

    printf("Pelo metodo de Newton-Raphson descobrimos que:\n\tUma das raizes da equacao vale aproximadamente %.8lf\n", x);
    if (Nit == limite) printf("\tAtingimos a quantidade limite de iteracoes (%d) antes de encontrar um resultado com a precisao desejada.\n", Nit);
    else printf("\tO numero de iteracoes usadas foi %d\n", Nit);

    return 0;
}
