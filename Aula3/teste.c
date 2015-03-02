#include <stdio.h>
#include <math.h>

int fatorial (int n) {
if (n < 2)
return 1;
else
return n*fatorial(n-1);
}

int main() {
int x, i, n;
double ex=0;
printf("\nInforme o valor de x e o número de termos: ");
scanf("%d %d", &x, &n);
for (i=0; i<=n; i++)
ex += pow(x,i)/fatorial(i);
printf("\nSérie de Taylor com %d termos\ne^%d = %f\n", n, x, ex);
return 0;
}
