/*Programa que apresenta o maior e menor numero de cada tipo de variaveis
Autor: Sandra Amato
Data: 13/08/08 */

#include <stdio.h>		/*Inclusao da biblioteca padrao	 */
#include <limits.h>		/*Inclusao da biblioteca 'limits.h' */ 
#include <float.h>		/*Inclusao da biblioteca 'float.h' */

int main()			/*Inicio do programa */
{
				/*Impressao dos valores minimo, maximo e total da variavel do tipo char  */
  printf("CHAR_MIN = %d      \t   CHAR_MAX = %d  \t UCHAR_MAX = %u\n",
         CHAR_MIN,CHAR_MAX,UCHAR_MAX);
				/*Impressao dos valores minimo, maximo e total da variavel do tipo short */
  printf("SHRT_MIN = %d      \t   SHRT_MAX = %d  \t USHRT_MAX = %u\n",
         SHRT_MIN,SHRT_MAX,USHRT_MAX);
				/*Impressao dos valores minimo, maximo e total da variavel do tipo int */
  printf("INT_MIN  = %d  \t INT_MAX  = %d  \t UINT_MAX   = %u\n",
         INT_MIN,INT_MAX,UINT_MAX);
				/*Impressao dos valores minimo, maximo e total da variavel do tipo long */
  printf("LONG_MIN = %ld  \t LONG_MAX = %ld  \t ULONG_MAX  = %lu\n",
         LONG_MIN,LONG_MAX,ULONG_MAX);
				/*Impressao dos valores minimo, maximo e 'precisao' da variavel do tipo float */
  printf("FLT_MIN  = %g  \t FLT_MAX  = %g  \t FLT_EPSILON = %g\n",
         FLT_MIN,FLT_MAX,FLT_EPSILON);
				/*Impressao dos valores minimo, maximo e precisao da variavel do tipo short  */
  printf("DBL_MIN  = %g  \t DBL_MAX  = %g  \t DBL_EPSILON = %g\n",
         DBL_MIN,DBL_MAX,DBL_EPSILON);
				/*Impressao dos valores minimo, maximo e precisao da variavel do tipo short */
  printf("LDBL_MIN  = %Le  \t LDBL_MAX  = %Le  \t LDBL_EPSILON = %Le\n",
         LDBL_MIN,LDBL_MAX,LDBL_EPSILON); 

  return 0;
}				/*Termino do progama */
