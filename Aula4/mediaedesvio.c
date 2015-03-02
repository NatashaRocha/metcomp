/* Programa que calcula a media e desvio padrao de uma turma, alem de quantos alunos tiveram notas em um determinado intervalo */
#include <stdio.h>
#include <math.h>

int main()
{
	int alunos = 0;
	float n;
	float media = 0;
	float desvio = - pow(media,2)*alunos/(alunos - 1);
	int dir = 0, rep = 0;

	FILE *notas = NULL;
	notas = fopen("notas.dat","r");

	while (fscanf(notas,"%f",&n) != EOF{
		fscanf (notas,"%f",  &n);
		if (n >= 7) dir++;
		if (n < 3) rep++;
		alunos += 1;
		desvio += pow(n,2)/(alunos - 1)
		media += n;
	}
	media /= alunos;
	printf("A media da turma e %.2f.\nO desvio padrao e %f.\n%d alunos passaram direto e %d alunos foram reprovados.",media,desvio,dir,rep);
	return 0;
}
