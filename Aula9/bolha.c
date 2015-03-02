#include <stdio.h>
#include <math.h>

double euler(double v0, double *t0, double h, double (*f)(double), FILE *arquivo);
double dv(double v);

int main(){
	FILE *saida = fopen("bolhateste.dat","w+");
    double vlim, t = 0;
	double *pt = &t;
    double h0 = 1.e-7;

    vlim = euler(0, pt, h0, dv, saida);
	printf("O tempo e a velocidade limite para um passo de %.0e s sao respectivamente:\n", h0);
	printf("%.0e s e %lf mm/s.\n\n", *pt, vlim);

    double h = h0, v = 0;
    do {
		*pt = 0;
		v = euler(0, pt, h, dv, saida);
        h /= 5.;
    } while (fabs(v-vlim)/v > 1e-5);

	saida = fopen("bolha.dat","w+");
	euler(0, pt, h, dv, saida);

    printf("O passo necessario para atingir a convergencia na velocidade limite e' %.1e s.\n",h);
    return 0;
}
