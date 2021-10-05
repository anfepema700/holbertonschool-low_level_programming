#include "main.h"

/**
*print_sign - validate if number is positive negative zero
*@n: character check
*Return: 0 success + positive - negative
**/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
