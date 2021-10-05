#include "main.h"

int main(void)
{
	char output[]="_putchar\n";
	int a = 0;

	for (a = 0; a < 9 ; a++)
	{
		putchar(output[a]);
	}
	return (0);
}
