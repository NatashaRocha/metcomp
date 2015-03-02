#include "integral.h"

double trapezio(double (*f)(double x), double a, double b, int *n){
    double To, Tk;
    double soma;
    int i, k = 1;
    Tk = 0.5*(f(a) - f(b))*(b - a);

    do {
        soma = 0; // Resetando variavel soma
        To = Tk; // To e' T(k - 1), caso o loop se repita o ultimo Tk vira To
        for (i = 1 ; i <= (pow(2,k)-1) ; i += 2) soma += f(a + i*(b - a)/pow(2.,k));
        Tk = 0.5*To + soma*(b - a)/pow(2.,k);
        k++;
        *n += 1;
    } while (fabs((Tk-To)/To) > eps && k < kmax);

    return Tk;
}
