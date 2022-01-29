#include "main.h"

/**
*_puts - print a string follo new line. 
*@str: variable check
*return: 0 success
**/

void _puts(char *str)
{
    int i;

   for (i = 0; *(str + i) !='\0'; i++)
    {
        _putchar(str[i] + '0');    
    }
        _putchar('\n');
}
