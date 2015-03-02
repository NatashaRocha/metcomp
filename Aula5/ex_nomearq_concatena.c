#include <stdio.h>
#include <string.h>
#define Nmax 5000

int main(){
  FILE *fpin = NULL;    /* arquivo de entrada */
  FILE *fpout = NULL;   /* arquivo de saida */
  char nomearqin[20];   /* nome do arquivo de entrada */
  char nomearqou[40];   /* nome do arquivo de saida */
  const char dat[] = ".dat";/* extensao do arquivo de entrada */
  const char ord[] = ".out";
  float lista[Nmax];
  int N;

  printf ("Entre com o nome do arquivo de entrada\n");
  scanf("%s", nomearqin );
  strcpy ( nomearqou, nomearqin);
  strcat ( nomearqin, dat);
  strcat ( nomearqou, ord);
  fpin = fopen(nomearqin,"r");
  if (fpin == NULL) {
    printf("Nao foi possivel abrir o arquivo %s\n",nomearqin);
    return 1;
  }
  //Le o arquivo
  N=0;
  while (fscanf (fpin,"%f",&lista[N]) != EOF && N<Nmax) N++;
  fclose(fpin);
 
  /*
  Fazer alguma coisa

  */


  fpout = fopen(nomearqou,"w");
  if (fpout == NULL) {
    printf("Nao foi possivel abrir o arquivo %s\n",nomearqou);
    return 2;
  }

  /*
    Escreve alguma coisa no arquivo  
  */
  fprintf(fpout,"O arquivo de entradas tem %d linhas\n",N);

  fclose(fpout);

    
  return 0;
}
