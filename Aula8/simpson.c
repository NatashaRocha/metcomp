#include "integral.h"

double simpson(double (*f)(double x), double a, double b, int *n){
    double So, Sk = 0;
    double somaimp, somapar;
    int i, k = 1;

    do {
        somaimp = 0;
        somapar = 0;
        So = Sk; // So e' S(k - 1)
        for (i = 1; i <= (pow(2,k)-1); i += 2) somaimp += f(a + i*(b - a)/pow(2.,k));
        for (i = 2; i <= (pow(2,k)-2); i += 2) somapar += f(a + i*(b - a)/pow(2.,k));
        Sk = (b - a)*(f(a) + 4*somaimp + 2*somapar + f(b))/(3*pow(2.,k));
        k++;
        *n += 1;
    } while (fabs((Sk-So)/So) > eps && k < kmax);

    return Sk;
}
