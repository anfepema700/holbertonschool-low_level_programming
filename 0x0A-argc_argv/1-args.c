#include "main.h"

/**
*main - print number of elements in gcc
*@argc: character checker
*@argv: character checker
*
*Return: 0 success
**/

int main(int argc, char **argv)
{
	if (argv != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
