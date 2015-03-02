/* Programa que prepara uma amostra de dados para plotar um histograma no gnuplot */

#include<stdio.h>
#include<string.h>
#define Nbins 20

int main(){
    int i, hist[Nbins] = {0};
    double min, max, temp;
    double dx, centro, valor;
    FILE *amostra = NULL; // Arquivo de entrada
    char entrada[100]; // Nome do arquivo de entrada
    FILE *histograma = NULL; // Arquivo de saida

    printf("Digite os limites do histograma:\n");
    scanf("%lf %lf", &min, &max);
    /* Espera-se que seja entrado primeiro min e depois max. Caso isso nao ocorra, o codigo abaixo inverte os valores */
    if (min > max){
        temp = max;
        max = min;
        min = temp;
    }

    dx = (max - min)/Nbins; // Largura do bin

    printf("Digite o nome do arquivo de entrada:\n");
    scanf("%s", entrada);
    amostra = fopen(entrada,"r");
    if (amostra == NULL){
        printf("Arquivo %s nao foi encontrado.\n", entrada);
        return 1;
    }

    /* Definindo para qual bin pertence cada valor */
    while(fscanf(amostra, "%lf", &valor) != EOF){
        i = (valor - min)/dx;
        hist[i]++;
    }

    histograma = fopen("histograma.dat", "w");
    for(i = 0; i < Nbins; i++){
        if (i == 0) centro = min + dx/2;
        else centro += dx;
        fprintf(histograma, "%.1lf\t%d\n", centro, hist[i]);
    }

    fclose(amostra);
    fclose(histograma);
    return 0;
}
