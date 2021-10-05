#include <stdio.h>
#include <ctype.h>


/**
 **main - Write a function that checks for lowercase character.
 **Returns: 0 success
 **/

int main(void)
{	
	char ch='c';

	if (islower(ch))
	{
	putchar('1');
	}
	else
	{
	putchar('0');
	}
	putchar('\n');
	return (0);
}
