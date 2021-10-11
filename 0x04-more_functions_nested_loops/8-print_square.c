#include "main.h"

/**
 *print_square - print ## character for line
 *
 *Return: 0 success;
 **/

void print_square(int size)
{
    int i;
    int a;

    for ( i = 0; i < size; i++)
    {  
        
    for ( a = 0; a < size; a++)
    {
        _putchar(35);
    }
        _putchar('\n');  
    }
}