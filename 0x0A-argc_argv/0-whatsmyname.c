#include "main.h"

/**
*main - function for print program name
*@argc: execute program parmeter insert 
*@argv: execute program parameter content
*
* return: 0 success.
**/

int main(int argc, char *argv[] )
{
	if (argc == 1)
	{
		_putchar(argv[0]);
		//printf("Valor argv[0]: %s\n",argv[0]);
	}
	return (0);
}
