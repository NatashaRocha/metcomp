#include<stdio.h>
#include<math.h>

double f(double x){
    return exp(-x) - sin(M_PI*x/2.0); // Funcao f(x) que sera avaliada
}

double df(double x){
    return -exp(-x) - cos(M_PI*x/2.0)*M_PI/2.0; // Derivada de f(x)
}
