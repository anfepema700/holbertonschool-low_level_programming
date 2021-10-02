#include <stdio.h>
/*
 *Main alphabet in lowercase, followed by a new line
 *return no imprimir q ni e
 **/
int main(void)
{
	char a= 'a';

	while (a <= 'z')
	{	
	if (a != 'q' && a != 'e')
	{
		putchar (a);
	}
		a++;
	} putchar ('\n');
	return (0);
}
