/* Programa que encontra a primeira raiz de uma equacao usando o metodo da bissecao */

#include<stdio.h>
#include<math.h>

double f(double x){
    return exp(-x)-sin(M_PI*x/2.0); // Funcao f(x) que sera avaliada
}

int main(void){
    double xmin, xmax, temp, xmedio, eps;
    int Nit = 1, limite;
    eps = 1.e-8; // Precisao relativa desejada
	limite = 1000; // Numero maximo de iteracoes
	
    printf("Entre valores para xmin e xmax, respectivamente:\n");
    scanf("%lf %lf", &xmin, &xmax);
	/* Espera-se que seja entrado primeiro xmin e depois xmax. Caso isso nao ocorra, o codigo abaixo inverte os valores */
	if (xmin > xmax){
        temp = xmax;
        xmax = xmin;
        xmin = temp;
    }

    if (f(xmin)*f(xmax) > 0){
		printf("O intervalo [%.2lf,%.2lf] nao pode ser avaliado.\n", xmin, xmax);
		return 1;
    }

    /* Bissecao */
    for (Nit = 1; Nit < limite; Nit++){
	    xmedio = (xmax + xmin)/2;
	    if (fabs((xmax - xmin)/xmax) < eps) break;
	    if (f(xmax)*f(xmedio) < 0) xmin = xmedio;
	    else xmax = xmedio;
    }

    printf("Pelo metodo da bissecao descobrimos que:\n\tUma das raizes da equacao vale aproximadamente %.8lf\n", xmedio);
    if (Nit == limite) printf("\tAtingimos a quantidade limite de iteracoes (%d) antes de encontrar um resultado com a precisao desejada.\n", Nit);
    else printf("\tO numero de iteracoes usadas foi %d\n", Nit);

    return 0;
}
