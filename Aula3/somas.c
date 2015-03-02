/* Questao 5 */

#include <stdio.h>

main()
{
	int N,n;
	float s1 = 0, s2 = 0, s3 = 0;
// Calculo para N qualquer:
	printf("Entre o valor de N: ");
	scanf("%d",&N);
	for(n = 1; n <= N; n += 1){
		s1 += 1./n;
		s2 += 1./(n*n);
		s3 += 1./(n*n + 1);}
	printf("Para N = %d:\ns1 = %.3f\ns2 = %.3f\ns3 = %.3f\n",N,s1,s2,s3);
// Zerando as funcoes:
	s1 = 0;
	s2 = 0;
	s3 = 0;
// Calculo para N = 100:
	for(n = 1; n <= 100; n += 1){
		s1 += 1./n;
		s2 += 1./(n*n);
		s3 += 1./(n*n + 1);}
	printf("Para N = 100:\ns1 = %.3f\ns2 = %.3f\ns3 = %.3f\n",s1,s2,s3);
// Zerando as funcoes:
	s1 = 0;
	s2 = 0;
	s3 = 0;
// Calculo para N = 1000:
	for(n = 1; n <= 1000; n += 1){
		s1 += 1./n;
		s2 += 1./(n*n);
		s3 += 1./(n*n + 1);}
	printf("Para N = 1000:\ns1 = %.3f\ns2 = %.3f\ns3 = %.3f\n",s1,s2,s3);
// Zerando as funcoes:
	s1 = 0;
	s2 = 0;
	s3 = 0;
// Calculo para N = 10000:
	for(n = 1; n <= 10000; n += 1){
		s1 += 1./n;
		s2 += 1./(n*n);
		s3 += 1./(n*n + 1);}
	printf("Para N = 10000:\ns1 = %.3f\ns2 = %.3f\ns3 = %.3f\n",s1,s2,s3);
}
