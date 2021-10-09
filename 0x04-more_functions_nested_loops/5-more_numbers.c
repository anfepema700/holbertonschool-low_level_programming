#include "main.h"

/**
*more_numbers - print 10 times numbers from 0 to 14
*
*Return: 0 success
**/
void more_numbers(void)
{
    int a=0;
    int i;
 
 while (a <=14)
    {
        for (i = 0; i <= 14; i++)
        {
            _putchar(i + '0');
        }
            _putchar('\n');
            a++;
    }
}