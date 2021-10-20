#include "main.h"

/**
*factorial - get the factorial for a give number.
*@n: character with number operated
*
*Return: 0 success -1 for fail
**/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
