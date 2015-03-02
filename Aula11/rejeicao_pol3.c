#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double rejeicao(double a, double b, double max, double (*f)(double)){
    double x, y;
    do {
        x = a + (b-a)*(double)rand()/RAND_MAX;
        y = max*rand()/RAND_MAX;
    } while (y > f(x));
    return x;
}
