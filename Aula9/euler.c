#include<stdio.h>
#include<math.h>

double euler(double y, double *x, double h, double (*f)(double), FILE *arquivo){
    double y0, eps = 1e-4;
    do{
        y0 = y;
        y = y0 + h*f(y0); // Metodo de Euler
        *x += h;
		fprintf(arquivo, "%.1e\t%.7lf\n", *x, y);
    } while (fabs((y-y0)/y) > eps);

    return y;
}