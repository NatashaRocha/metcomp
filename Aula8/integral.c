#include "integral.h"
#define xmin -2
#define xmax 2

double f(double x);

int main(){
    double I;
    int n = 0;
    int *pn = NULL;

    pn = &n;
    I = trapezio(f,xmin,xmax,pn)/sqrt(2*M_PI);
    printf("Pelo metodo dos trapezios a integral vale aproximadamente %lf\n", I);
    printf("O numero de iteracoes usadas foi %d\n\n",*pn);
	
    *pn = 0;
    I = simpson(f,xmin,xmax,pn)/sqrt(2*M_PI);
    printf("Pelo metodo de simpson a integral vale aproximadamente %lf\n", I);
    printf("O numero de iteracoes usadas foi %d\n",*pn);

    return 0;
}

double f(double x){
    return exp(-0.5*x*x); // Funcao que sera integrada
}
