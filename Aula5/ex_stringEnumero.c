#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
  const double PI = acos(-1.);
  FILE *graf=NULL;
  char saida[10];
  double area, volume;
  float R;
  for (R = 1; R <=4; R++){
    sprintf(saida, "Resultado%1.f.txt", R);
    graf = fopen(saida,"w");
    area = 4 * PI * R * R;
    volume = 4./3 * PI * R* R*R;
    fprintf(graf,"%6.2lf     %6.2lf\n",area, volume);
  } 
 return 0;
}
   
