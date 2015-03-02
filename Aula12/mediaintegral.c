/* Programa que calcula a integral definida de uma funcao pelo metodo da media */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 

double f(double x){
    return x*x*x; //*
}

int main(){
    srand(time(NULL));
    int i, N;
    double xmin = 0, xmax = 1; //*
    double x, media = 0;

    printf("Determine o numero de pontos a serem calculados:\n");
    scanf("%d", &N);

    for (i = 0; i <= N; i++){
        x = xmin + (xmax - xmin)*(double)rand()/RAND_MAX;
        media += (double)f(x)/N;
    }

    printf("Pelo metodo da media:\n");
    printf("I = %f\n", (xmax - xmin)*media);
    printf("Resultado analitico:\nI = 0.25\n"); //*
}

/* Linhas marcadas por //* devem ser mudadas caso se deseje calcular a integral de outra funcao */