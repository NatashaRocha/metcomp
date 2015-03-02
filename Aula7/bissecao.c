#include<stdio.h>
#include<math.h>
#include "raizes.h"

double bissecao(double xmin, double xmax, double (*f)(double x), double eps, int n){
    int Nit = 1;
    double temp, xmedio;

    if (xmin > xmax){
        temp = xmax;
            temp = xmax;
            xmax = xmin;
            xmin = temp;
    }

    if (f(xmin)*f(xmax) > 0){
        printf("O intervalo [%.2lf,%.2lf] nao pode ser avaliado.\n", xmin, xmax);
        return 1;
    }

    for (Nit = 1; Nit < nmax; Nit++){
        xmedio = (xmax + xmin)/2;
        if (fabs((xmax - xmin)/xmax) < eps) break;
        if (f(xmax)*f(xmedio) < 0) xmin = xmedio;
        else xmax = xmedio;
    }

    if (n == 0) return xmedio;
    else if (n == 1) return Nit;

}