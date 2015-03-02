/* Calculo do produto escalar e o cosseno do angulo entre dois vetores cujas componentes sao lidas do teclado */

#include<stdio.h>
#include<math.h>

int main(){
	int i;
	double v, v1[3], v2[3];
	double mod1, mod2;
	double prod = 0, cang;
	FILE *vetores = NULL;

	vetores = fopen("vetores.dat","r");
	if (vetores == NULL){
		printf("vetores.dat nao foi encontrado\n");
		return 1;
		}

	/* Atribuindo valores para as componentes dos vetores (a partir do arquivo.dat) */
		for (i = 0; i < 6; i++){
			fscanf(vetores,"%lf",&v);
			if (i < 3) v1[i] = v; // Define os tres primeiros valores como as componentes de v1
			else v2[i-3] = v; // Define os tres ultimos valores como as componentes de v2
		}

	for(i = 0; i < 3; i++){
	prod += v1[i]*v2[i]; // Produto escalar entre dois vetores
	mod1 += v1[i]*v1[i]; // Modulo (ao quadrado) do vetor 1
	mod2 += v2[i]*v2[i]; // Modulo (ao quadrado) do vetor 2
	}
	mod1 = sqrt(mod1);
	mod2 = sqrt(mod2);
	cang = prod/(mod1*mod2); // Calculo do cosseno do angulo entre os vetores

	printf("O produto escalar entre os vetores (%.1lf, %.1lf, %.1lf) e (%.1lf, %.1lf, %.1lf) e: %.2lf\nO cosseno do angulo entre os mesmos e: %.2lf\n", v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], prod, cang);
	return 0;
}
