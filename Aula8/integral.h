#include <stdio.h>
#include <math.h>

#define eps 1.e-6
#define kmax 20

double trapezio(double (*f)(double x), double a, double b, int *n);
double simpson(double (*f)(double x), double a, double b, int *n);