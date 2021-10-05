#include "main.h"


/**
 **main - Write a function that prints the alphabet, in lowercase, followed by a new line
 **
 **Return_ 0 success
 **/

void print_alphabet(void)
{

	char letter;
	letter = 'a';

	while ( letter <= 'z')
	{
		_putchar(letter);
		letter++;	
	}
		_putchar('\n');
}
