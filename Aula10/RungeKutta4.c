#include<stdio.h>
#include<stdlib.h>
void RungeKutta4(double *y, double x0, double h, int N,
        void (*dydx)(double x, const double *y, double *f)  )
{
    int i;
            /* fi -> derivadas usadas pelo metodo   */
    double * f0 = NULL;  // derivada no ponto inicial do intervalo
    double * f1 = NULL;  // 1a aproximacao da derivada no ponto medio
    double * f2 = NULL;  // 2a aproximacao da derivada no ponto medio
    double * f3 = NULL;  // derivada no ponto final do intervalo
            /* yTemp -> calculos intermadiarios de y */
    double * yTemp = NULL;
           /* alocacao de memoria */
    f0 = (double *) malloc( N * sizeof(double) );
    f1 = (double *) malloc( N * sizeof(double) );
    f2 = (double *) malloc( N * sizeof(double) );
    f3 = (double *) malloc( N * sizeof(double) );
    yTemp = (double *) malloc( N * sizeof(double) );
    if ( f0 == NULL || f1 == NULL || f2 == NULL ||
         f3 == NULL || yTemp == NULL ) {
      printf ("Nao foi possivel alocar memoria");
      return;
    }
          /* calculo das derivadas no ponto inicial -> f0 */
    dydx( x0, y, f0);
          /* calculo da derivada no ponto medio usando f0 -> f1 */
    for (i=0;i<N;++i) yTemp[i] = y[i] + h*f0[i]/2;
    dydx( x0+h/2, yTemp, f1);
          /* calculo da derivada no ponto medio usando f1 -> f2 */
    for (i=0;i<N;++i) yTemp[i] = y[i] + h*f1[i]/2;
    dydx( x0+h/2, yTemp, f2);
          /* calculo da derivada no ponto i+1 usando f2 -> f3   */
    for (i=0;i<N;++i) yTemp[i] = y[i] + h*f2[i];
    dydx( x0+h, yTemp, f3);
          /* calculo da derivada fRK4  */
    for (i=0;i<N;++i) y[i] = y[i] + h*(f0[i]+2*f1[i]+2*f2[i]+f3[i])/6;
          /* liberando a memoria */
    free(f0);
    free(f1);
    free(f2);
    free(f3);
    free(yTemp);
    return;
}