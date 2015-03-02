/* Nome: Natasha Monteiro da Rocha */

#include <stdio.h>
#include <math.h>

int main()
{
	float R, H;
	printf("Digite o raio e a altura do cilindro, respectivamente:\n");
	scanf("%f %f",&R,&H);
		//Calculo do volume do cilindro:
	float V = M_PI*pow(R,2)*H;
	printf("Seu volume é %.2f\n",V);
		//Calculo da soma das areas da superfície:
	float A = 2*M_PI*R*(R + H);
	printf("Sua área total é %.2f\n",A);
		//Calculo do raio da esfera de mesmo volume:
	float r = pow(3*V/(4*M_PI),0.333333);
	printf("O raio de uma esfera de volume %.2f (igual ao do cilindro) e %.2f\n",V,r);
	return 0;
}
