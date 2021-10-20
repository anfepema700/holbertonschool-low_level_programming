#include "main.h"

/**
*_strlen_recursion - ceturn length of a string
*@s: character ith a string
*
*Return: 0 success
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	i = 0;
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
