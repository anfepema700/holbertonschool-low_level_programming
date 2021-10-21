#include "main.h"

/**
*_sqrt_recursion - get the natural square root of a number
*@n: is the natural number
*Return: The natural square root
**/

int _sqrt_recursion(int n)
{
	return (funaux(n, 0));
}

/**
*funaux - function auxiliary for help execute
*@n: is the natural number
*@s: is a counter
*Return: The sqrt of a natural number
**/

int funaux(int n, int s)
{
	if (s * s == n)
	return (s);
	else if (s * s > n)
	return (-1);
	else
	return (funaux(n, s + 1));
}
