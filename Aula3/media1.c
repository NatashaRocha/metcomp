#include <stdio.h>

main()
{
	int n,i;
	float media = 0, nota;
	printf("Entre o número de alunos: ");
	scanf("%d",&n);
	printf("Digite a nota dos %d alunos:\n",n);
	for (i = 1; i <= n; i += 1){
		scanf("%f",&nota);
		media += nota;}
	media = media/n;
	printf("A média da turma é %.2f.\n",media);
}
