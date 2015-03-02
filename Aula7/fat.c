#include <stdio.h>
double  fatorial(int n); /*prototipo da funcao */
int main()
{
    double nfatorial;
    int n;
    n=5;
    nfatorial = fatorial(n);
    printf("%d! = %6.2f\n",n,nfatorial);
    return 0;
}

double  fatorial(int n){
   int i;
   double fat;
   if (n==0 || n==1) return 1.0; 
    
   fat = n;
   for (i = 2; i < n; i++) fat = fat * i; 
   return fat;	
}
