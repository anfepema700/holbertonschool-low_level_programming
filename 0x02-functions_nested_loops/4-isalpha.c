#include <stdio.h>
#include <ctype.h>

/**
 **main - validate isalpha and 1 for true 0 for false
 **Returns: 0 success
 **/

int main(void)
{	
	char ch='c';

	if(isalpha(ch))
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
