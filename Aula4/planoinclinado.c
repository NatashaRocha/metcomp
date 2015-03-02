#include <stdio.h>
#include <math.h>

int main()
{
	float m, mie, mic, h, theta; // Variaveis fornecidas
	float a, l, t, grau; // Variaveis calculadas
	float g = 9.8;
	FILE *valores = NULL;

	valores = fopen("planoinclinado.dat","r");
	if (valores == NULL){
		printf("planoinclinado.dat nao foi encontrado.\n");
		return 1;
	}

	fscanf(valores, "%f %f %f %f", &m, &mie, &mic, &h);
	float angmax = atan(mie)*180/M_PI;
	printf("\nAngulo em que o corpo sai do repouso: %.1f graus\n\n",angmax);

	printf("Angulo(graus)\tTempo(s)\n");

	for (theta = 0; theta <= M_PI/2; theta += M_PI/18){
		grau = theta*180/M_PI; // Conversao do angulo em radianos para graus
		/* Corpo em movimento */
		if (cos(theta)*mie < sin(theta)){
			a = g*(sin(theta) - cos(theta)*mic); // Aceleracao resultante
			l = h/sin(theta); // Distancia percorrida pelo corpo
			t = sqrt(2*l/a);
			printf("%.1f\t\t%.3f\n", grau, t);
		}
		/* Corpo em repouso */
		else printf("%.1f\t\t-----\n", grau);
	}

	return 0;
}