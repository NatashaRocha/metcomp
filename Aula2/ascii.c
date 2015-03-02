/*************************************************************************
 * Programa "ascii.c": tem por objetivo exemplificar a correla��o entre  *
 * caracteres e seus valores ASCII.                                      *       
 * Autor:			       Data:                             *
 *************************************************************************/

#include <stdio.h>
main()		/*perceba que a fun��o "main" n�o teve seu tipo especificado
		 note igualmente a aus�ncia do "return".*/
{
        char c;  /*declara��o de uma vari�vel */
        c = '&'; /*inicializa��o da vari�vel previamente declarada */
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);  /*imprime na tela o caracter "guardado" em "c", e seu valor ASCII - perceba que "c" apresenta o mesmo valor em ambos os casos, sendo esse interpretado diferentemente conforme esteja associado a um %c ou %d*/
        c = 64;
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);
        c = 'a';
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);
        c = 'A';
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);  /*o caracter "\n" ( sim, e um �nico caracter! ) pertence a um grupo chamado "scape sequence", constitu�do de mecanismos para sinalizar determinadas a��es. No presente caso, indica um "new line" para o "printf": que os caracteres a partir de "\n" devem ser escritos em uma nova linha*/
}

/* Os compiladores "entender�o" o arranjo "/" seguido de "*" como indicativo de 
que quaisquer s�mbolos ap�s o mesmo devem ser ignorados, at� a ocorr�ncia de um 
"*" seguido imediatamente por um "/". */

/*O ASCII � um padr�o de representa��o de caracteres - a cada um deles � 
associado um n�mero ( no caso presente, inteiro na base decimal ). Para mais,
veja cap.01 da Apostila da Prof� M�nica Bahiana*/
