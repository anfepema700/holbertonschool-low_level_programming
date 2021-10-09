#include "main.h"

/*
*print_numbers - prints the number, from 0 to 9
*
*Return: 0 success
*/

void print_most_numbers(void)
{
    int i =0;

    while (i <=9)
    {
        if (i==2 || i==4)
        {
            i++;
        }else
        {
            _putchar(i + '0');
            i++;
        }
    }
        _putchar('\n');        
}