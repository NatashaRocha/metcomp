#include <stdio.h>
#define nmax 1000

double bissecao(double xmin, double xmax, double (*f)(double x), double eps, int n); // prototipo da funcao bissecao
double newtonraphson(double x0, double (*f)(double x), double (*df)(double x), double eps, int n); // prototipo da funcao newtonraphson
double f(double x); // prototipo da funcao f
double df(double x); // prototipo da funcao df
int tabela(double xmin, double xmax); // prototipo da funcao tabela