#include "main.h"

/**
*main - print all value send in execute
*@argc: character check
*@argv: character check
*
*Return: 0 success
**/

int main (int argc, char *argv[])
{	
	int i; 

	for ( i = 0; i <= argc && argv[i] != NULL; i++)
	{	
		_putchar(argv[i]);
		/*printf("Valor argc:[ %d ] valor argv: %s\n", i, argv[i]);*/
	}
	return (0);	
}


