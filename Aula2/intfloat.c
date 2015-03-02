/*
	Objetivo: Mostrar os possiveis problemas que acotecem com divisoes entre float e inteiros
	Autor: Sandra Amato	
	Data: 11/08/2008
*/

#include <stdio.h>

main()
{
	int a, b, c;		
	float cf;		
	float bf = 3.99;	
        float x, y;		
	
	a = 2;		
	b = 3.99;	
        
	printf("a = %d   b = %d  \n", a, b);	  
	
	c = a/b;	
	printf("c = %d\n", c);	
	
	c = c+2;	
	printf("c = %d\n", c);	
	
	cf = c/3;	 
	printf("cf = %f\n", cf);	
	
	cf = c/3.0;	 
	printf("cf = %f\n", cf);	
	
	cf = a/bf;	
	printf("cf = %f\n", cf);	
	
	x = a + b *2;	
	printf("x = %f\n", x);		
	
        y = 34/5/2;	
	printf("y = %f\n", y);		

        y = 34/(5/2);	
	printf("y = %f\n", y);		
		
}
