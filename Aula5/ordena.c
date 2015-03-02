/* Programa que ordena uma lista de numeros */

#include<stdio.h>
#include<string.h>
#define Nmax 1000

int main(){
	char arqi[100], arqo[100];
	float numeros[Nmax], temp;
	int n, N = 0, i = 0, j = 0; // N é a quantidade total de números
	FILE *entrada = NULL;
	FILE *saida = NULL;

	printf("Digite o nome do arquivo que deve ser ordenado (deve ser no formato *.entrada):\n");
	scanf("%s", arqi);
	entrada = fopen(arqi,"r");

	if (entrada == NULL){
		printf("Arquivo %s nao foi encontrado.\n", arqi);
		return 1;
	}

	/* Definindo nome do arquivo de saida */
	strncpy(arqo, arqi, strlen(arqi) - 7); // Copia nome do arquivo de entrada sem o final (entrada)
	strcat(arqo, "saida");  // Adiciona saida ao nome do arquivo
	saida = fopen(arqo,"w");

	while (fscanf(entrada,"%f",&numeros[i]) != EOF && N<Nmax){
		i++;
		N++; // Colocando números do arquivo em uma lista
	}
	for (i = 0; i < N; i++){
		for (j = i + 1; j < N; j++){
			if (numeros[i] > numeros[j]){
				temp = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = temp;
			}
		}
	}
	
	printf("%s\n",arqo);
	for (i = 0; i < N; i++) fprintf(saida,"%f\n",numeros[i]);

	return 0;
}