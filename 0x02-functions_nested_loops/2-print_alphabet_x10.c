#include "main.h"

/**
 **print_alphabet_x10 - Write a function that prints the alphabet
 **
 **Return_ 0 success
 **/

void print_alphabet_x10(void)
{

	char letter;
	int a;

	a = 0;
	while (a < 10)
	{
		letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
		_putchar('\n');
		a++;
	}
}
