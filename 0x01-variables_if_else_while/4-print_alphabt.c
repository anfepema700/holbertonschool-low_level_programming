#include <stdio.h>
/**
 **main - alphabet in lowercase, followed by a new line
 **
 **Return: 0 on success
**/
	int main(void)
	{
	char a = 'a';

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
