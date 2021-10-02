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
		n = rand() - RAND_MAX/2;

if (n < 0)
		{
					printf("%d is %s\n", n, "negative");
						}
	else if (n > 0)
			{
						printf("%d is %s\n", n, "positive");
							}
		else
				{
							printf("%d is %s\n", n, "zero");
								}
			return (0);

	}
