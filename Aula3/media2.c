#include <stdio.h>

main()
{
	int alunos = 0;
	float media = 0, n;
	printf("Entre a nota dos alunos:\n");
	while (n >= 0){
		scanf("%f",&n);
		if (n < 0) break;
		alunos += 1;
		media += n;}
	media /= alunos;
	printf("A média da turma é %.2f.\n",media);
}
