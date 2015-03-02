/* Programa que calcula a integral definida de uma funcao pelo metodo de hit or miss */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 

double f(double x){
    return x*x*x; //*
}

int main(){
    srand(time(NULL));
    int i, N, Nhit = 0;
    double x, y;
    double xmin = 0, xmax = 1; //*
    double ymin = f(xmin), ymax = f(xmax);

    printf("Determine o numero de pontos a serem calculados:\n");
    scanf("%d", &N);

    for (i = 0; i <= N; i++){
        x = xmin + (xmax - xmin)*(double)rand()/RAND_MAX;
        y = ymin + (ymax - ymin)*(double)rand()/RAND_MAX;
        if (y <= f(x)) Nhit++;
    }

    printf("Pelo metodo de Hit or Miss:\n");
    printf("I = %f\n", (double)Nhit/N);
    printf("Resultado analitico:\nI = 0.25\n"); //*
}

/* Linhas marcadas por //* devem ser mudadas caso se deseje calcular a integral de outra funcao */