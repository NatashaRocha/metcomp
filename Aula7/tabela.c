#include <stdio.h>
#include "raizes.h"

int tabela(double xmin, double xmax){
    double xbis, nbis, xnr, nnr, eps;

    printf("\t\t\tBissecao\t\t\tNewton-Raphson\n");
    printf("Precisao\ttentativas\txraiz\t\ttentativas\txraiz\n");

    for (eps = 1e-4 ; eps >= 1e-10 ; eps *= 1e-1){
        xbis = bissecao(xmin,xmax,f,eps,0);
        nbis = bissecao(xmin,xmax,f,eps,1);
        xnr = newtonraphson(xmin,f,df,eps,0);
        nnr = newtonraphson(xmin,f,df,eps,1);
        printf("%.0e\t\t%.0lf\t\t%.10lf\t\t%.0lf\t%.10lf\n",eps,nbis,xbis,nnr,xnr);
    }
}