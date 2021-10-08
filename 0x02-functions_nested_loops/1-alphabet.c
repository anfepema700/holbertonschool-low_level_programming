#include "main.h"

/**
*print_alphabet - Write a function that prints the alphabet
*Return: 0 success
*/

void print_alphabet(void)
{

	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
		_putchar('\n');
}
