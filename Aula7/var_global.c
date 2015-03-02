#include <stdio.h>
int soma (int i);
int j = 5;

int main(){
  int i = 1;
  printf ("j = %d\n", j);
  printf ("k = %d\n", k);  // Erro: k ainda nao declarada
  printf ("l = %d\n", l);  // Erro: l e local em soma()
  printf ("i+j+k+l = %d\n", soma(i));
  return 0;
}

int k = 10;

int soma(int i){
  int l = 4;
  return i+j+k+l;
}  

