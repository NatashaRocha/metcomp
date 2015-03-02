#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 

void grade2d(double *x, double *y); // Deslocamento na direcao norte, sul, leste ou oeste
void uniforme2d(double *x, double *y); // Deslocamento em qualquer direcao em 2D
void uniforme3d(double *x, double *y, double *z); // Deslocamento em qualquer direcao em 3D

int main(){
	srand(time(NULL)); // Semente muda dependendo do horario
	int i, j; // Contadores
	int Npassos = 1, Npassosmax = 1000, Nexp;
	double x = 0, y = 0, z = 0;
	double dist, media;

	/* Definindo numero de experiencias e arquivo de output */
	char arquivo[16] = {'\0'};
	printf("Defina o numero de experiencias:\n");
	scanf("%d", &Nexp); // Limite 99999 (por causa do nome do arquivo de saida)
	sprintf(arquivo, "passeio%d.dat", Nexp); // Define nome do arquivo como algo do tipo passeio100.dat
	FILE *passeio = fopen(arquivo, "a"); // Dados serao adicionados ao fim do arquivo

	do{
		media = 0;
		for (i = 1; i <= Nexp; i++){
			for (j = 0; j < Npassos; j++) grade2d(&x, &y); // Essa linha deve ser alterada para mudar o tipo de deslocamento!
			dist = sqrt(x*x + y*y + z*z); // Distancia final de um experimento
			x = 0;
			y = 0;
			z = 0;
			media += (double)dist/Nexp;
		}
		fprintf(passeio, "%d\t\t%lf\n", Npassos, media); // Imprime Npassos x media no arquivo
		Npassos++;
	} while (Npassos <= Npassosmax);

	printf("\nDados foram salvos em passeio%d.dat\n", Nexp);
	return 0;
}

void grade2d(double *x, double *y){
	int direcao = rand() % 4;
	if (direcao == 0) *y += 1; // Norte
	if (direcao == 1) *y -= 1; // Sul
	if (direcao == 2) *x += 1; // Leste
	if (direcao == 3) *x -= 1; // Oeste
}

void uniforme2d(double *x, double *y){
	double theta = 2*M_PI*(double)rand()/RAND_MAX;
	*x += cos(theta);
	*y += sin(theta);
}

void uniforme3d(double *x, double *y, double *z){
	double phi = 2*M_PI*(double)rand()/RAND_MAX;
	double g = -1 + 2*(double)rand()/RAND_MAX;
	double theta = acos(g);
	*x += cos(phi)*cos(theta);
	*y += sin(phi)*sin(theta);
	*z += cos(theta);
}