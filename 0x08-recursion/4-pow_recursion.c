#include "main.h"

/**
*_pow_recursion - pow at function that pow two number
*@x: character with value of x
*@y: character with value of y
*
**Return: 0 success, -1 n>1, potencia with execute ok
**/

int _pow_recursion(int x, int y)
{
	int potencia;

	if (y < 0)
	{
	return (-1);
	}
	else if (y <= 1)
	{
	return (1);
	}
	else
	{
		potencia = x * _pow_recursion(x, y - 1);
	}
	return (potencia);
}
