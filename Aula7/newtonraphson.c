#include<stdio.h>
#include<math.h>
#include "raizes.h"

double newtonraphson(double x0, double (*f)(double x), double (*df)(double x), double eps, int n){
    int Nit = 1;
    double x;

    if (df(x0) == 0){
        printf("Nao e possivel usar o metodo Newton-Raphson com o valor selecionado (sua derivada e igual a 0)\n");
        return 1;
    }

    /* Newton-Raphson */
    for (Nit = 1; Nit < nmax; Nit++){
        x = x0 - f(x0)/df(x0);
        if (fabs((x - x0)/x) < eps) break;
        else x0 = x;
    }

    if (n == 0) return x;
    else if (n == 1) return Nit;

}