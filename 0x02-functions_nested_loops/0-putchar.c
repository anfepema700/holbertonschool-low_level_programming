#include <stdio.h>
#include "main.h"

/**
 **main - print a _putchar
 **
 **Return: 0 on succes
 **/

int _putchar(char c)
{		
		c='-';
		return (write(1, &c, 1));
}
