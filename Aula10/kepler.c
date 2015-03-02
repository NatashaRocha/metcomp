#include<stdio.h>
#include<math.h>

void ds(double t, const double *s, double *ds);
void RungeKutta4(double *y, double x0, double h, int N, void (*dydx)(double x, const double *y, double *f));
void kepler();

int main(){
	char again;
	do{
		kepler();
		printf("Deseja recalcular para um passo diferente? (y/n)\n");
		scanf(" %c", &again);
	} while (again == 'y');

	return 0;
}

void kepler(){
	double s[4] = {0};
	/* s[0] = x
	   s[1] = Vx
	   s[2] = y
	   s[3] = Vy */

	/* Condicoes iniciais */
	s[0] = 1.496e11;
	s[3] = 2.97e4;
	double t = 0, tmax = 31557600, h; // tmax = 1 ano (em segundos e considerando que um ano tem aproximadamente 365.25 dias)

	printf("Entre com o valor do passo desejado, em segundos (86400 para 1 dia, 3600 para 1 hora, 60 para 1 minuto): ");
	scanf("%lf", &h);

	/* Escolha do arquivo que contera os resultados */
	FILE *resultado = NULL;
	if (h == 86400) resultado = fopen("kepler_dia.dat","w+");
	if (h == 3600) resultado = fopen("kepler_hora.dat","w+");
	if (h == 60) resultado = fopen("kepler_minuto.dat","w+");
	else if (h != 86400 && h != 3600 && h != 60) resultado = fopen("kepler_passo.dat","w+");

	do{
		fprintf(resultado, "%.0lf\t\t%lf\t\t%lf\t\t%lf\t\t%lf\n", t, s[0], s[2], s[1], s[3]);
		t += h;
		RungeKutta4(s, t, h, 4, ds);
	} while (t < tmax);
}