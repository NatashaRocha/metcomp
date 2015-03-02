#include "raizes.h"

int main(){
    double xmin,xmax;
    double nbis, xbis, nnr, nxr;

    printf("Determine os limites do intervalo no qual se encontra a raiz:\n");
    scanf("%lf %lf",&xmin,&xmax);

    tabela(xmin,xmax);

    return 0;
}