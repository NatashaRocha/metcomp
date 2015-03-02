#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double transformada(double a, double b, double (*inv)(double));
double rejeicao(double a, double b, double max, double (*f)(double));
double f(double x); // Distribuicao a ser avaliada
double inv(double x);

int main(){
    double seed = 234;
    srand(seed);
    double a = 0, b = 3, sum = 0, sum2 = 0, media, x, dx;
    int Nbin = 20, i, j, Ns = 5000; // Nbin = numero de bins Ns = numero de eventos
    int *bin = NULL;
    dx = (b - a)/Nbin; // Tamanho do bin
    bin = (int *) malloc(Nbin*sizeof(int)); // Alocacao de memoria para o histograma
    if (bin == NULL){
        printf("Nao foi possivel alocar memoria para o histograma.\n");
        return 1;
    }

    printf("Resultado analitico:\n");
    printf("\tMedia = %f\n", 2.4);
    printf("\tVariancia = %f\n\n", sqrt(.24));

    /* Transformada */
    FILE *histt = fopen("hist_transformada.dat","w+");
    if (histt == NULL){
        printf("Nao foi possivel abrir o arquivo hist_transformada.dat.\n");
        return 1;
    }
    for (i = 0; i < Nbin; i++) bin[i] = 0; // Zerando os valores de bin
    for (i = 0; i <= Ns; i++){
        x = transformada(0, 1, inv);
        j = (int)((x - a)/dx);
        bin[j]++;
        sum += x; // Primeiro momento
        sum2 += x*x; // Segundo momento
    }
    for (i = 0; i < Nbin; i++){ // Salvando dados do histograma em um arquivo
        x = a + i*dx + 0.5*dx;
        fprintf(histt, "%lf\t%lf\n", x, bin[i]/(Ns*dx));
    }
    printf("Metodo da transformada:\n");
    printf("\tMedia = %f\n", media = sum/(double)Ns);
    printf("\tVariancia = %f\n\n", sqrt(sum2/(double)Ns - media*media));
    fclose(histt);

    sum = 0;
    sum2 = 0;

    /* Rejeicao */
    FILE *histr = fopen("hist_rejeicao.dat","w+");
    if (histr == NULL){
        printf("Nao foi possivel abrir o arquivo hist_rejeicao.dat.\n");
        return 1;
    }
    for (i = 0; i < Nbin; i++) bin[i] = 0; // Zerando os valores de bin
    for (i = 0; i <= Ns; i++){
        x = rejeicao(a, b, 1.3, f);
        j = (int)((x - a)/dx);
        bin[j]++;
        sum += x; // Primeiro momento
        sum2 += x*x; // Segundo momento
    }
    for (i = 0; i < Nbin; i++){ // Salvando dados do histograma em um arquivo
        x = a + i*dx + 0.5*dx;
        fprintf(histr, "%lf\t%lf\n", x, bin[i]/(Ns*dx));
    }	
    printf("Metodo da rejeicao:\n");
    printf("\tMedia = %f\n", media = sum/(double)Ns);
    printf("\tVariancia = %f\n", sqrt(sum2/(double)Ns - media*media));

    return 0;
}

double f(double x){
    double C = 4./81.;
    return C*x*x*x;
}

double inv(double x){
    return pow(81*x,0.25);
}