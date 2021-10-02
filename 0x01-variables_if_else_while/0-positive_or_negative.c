#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main positivo, negativo o si es 0 el valor de la variable n
 * return resultado de validación. 
 */

int main(void)
{
	int n;
       	srand(time(0));
	n = rand()-RAND_MAX/2;
	if(n>0){
	printf("El número es positivo:  %d",n);
	}else if (n==0){
	printf("el número es negativo: %d",n);
	}else{
	printf("El número es negativo: %d",n);
	}
return (0);
}
