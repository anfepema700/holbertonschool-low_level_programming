#include <stdio.h>

int main(void)
{
	int val=1;

	if(val<0)
	{
		putchar('-');
	}
	else if(val>0)
	{
		putchar('+');
	}
	else
	{
	putchar('0');
	}
	putchar('\n');
	return (0);
}
