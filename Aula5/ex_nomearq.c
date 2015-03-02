#include <stdio.h>
//#include <string.h>
#define Nmax 5000

int main(){
  FILE *arquivo = NULL;    /* arquivo de entrada */
  char nomearqin[20];   /* nome do arquivo de entrada */
  float lista[Nmax];
  int N;

  printf ("Entre com o nome do arquivo de entrada\n");
  scanf("%s", nomearqin );
  arquivo = fopen(nomearqin,"r");
  if (arquivo == NULL) {
    printf("Nao foi possivel abrir o arquivo %s\n",nomearqin);
    return 1;
  }
  //Le o arquivo
  N=0;
  while (fscanf (arquivo,"%f",&lista[N]) != EOF && N<Nmax) N++;
  fclose(arquivo);
 
  printf("O arquivo %s tem %d linhas\n",nomearqin, N);

  return 0;
}
