#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double euler(double *y, double h, double (*f)(double x, double y));
double deriv(double v);