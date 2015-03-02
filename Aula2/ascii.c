/*************************************************************************
 * Programa "ascii.c": tem por objetivo exemplificar a correlação entre  *
 * caracteres e seus valores ASCII.                                      *       
 * Autor:			       Data:                             *
 *************************************************************************/

#include <stdio.h>
main()		/*perceba que a função "main" não teve seu tipo especificado
		 note igualmente a ausência do "return".*/
{
        char c;  /*declaração de uma variável */
        c = '&'; /*inicialização da variável previamente declarada */
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);  /*imprime na tela o caracter "guardado" em "c", e seu valor ASCII - perceba que "c" apresenta o mesmo valor em ambos os casos, sendo esse interpretado diferentemente conforme esteja associado a um %c ou %d*/
        c = 64;
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);
        c = 'a';
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);
        c = 'A';
        printf("\n a letra e' %c e seu valor ASCII e' %d\n\n",c,c);  /*o caracter "\n" ( sim, e um único caracter! ) pertence a um grupo chamado "scape sequence", constituído de mecanismos para sinalizar determinadas ações. No presente caso, indica um "new line" para o "printf": que os caracteres a partir de "\n" devem ser escritos em uma nova linha*/
}

/* Os compiladores "entenderão" o arranjo "/" seguido de "*" como indicativo de 
que quaisquer símbolos após o mesmo devem ser ignorados, até a ocorrência de um 
"*" seguido imediatamente por um "/". */

/*O ASCII é um padrão de representação de caracteres - a cada um deles é 
associado um número ( no caso presente, inteiro na base decimal ). Para mais,
veja cap.01 da Apostila da Profª Mônica Bahiana*/
