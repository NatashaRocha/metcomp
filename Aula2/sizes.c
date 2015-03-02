/*************************************************************************
 * Programa "sizes.c": tem por objetivo mostrar o espaço de memória      *
 * reservado para as variáveis dos tipos inteiro ( normal, longo, curto )*
 * e real ( idem ).                                                      *
 * Autor:			       Data:                             *
 *************************************************************************/

#include <stdio.h>  	
main()
{
        printf("um inteiro tem %ld bytes\n",sizeof(int));  
        printf("um inteiro longo  tem %ld bytes\n",sizeof(long));
        printf("um inteiro curto  tem %ld bytes\n",sizeof(short));  
        printf("um  real  tem %ld bytes\n",sizeof(float));
        printf("um  real  duplo tem %ld bytes\n",sizeof(double));  
}

