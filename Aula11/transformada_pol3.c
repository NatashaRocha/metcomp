#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double transformada(double a, double b, double (*inv)(double)){
    double y;
    y = a + (b-a)*(double)rand()/RAND_MAX;
    return inv(y);
}
