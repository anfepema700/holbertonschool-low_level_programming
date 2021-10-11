#include "main.h"

/*
*print_diagonal - print / when define system
*@n: check variable
*Return: 0 success
*/

void print_diagonal(int n)
{
    int i;
    int a;

    for (i = 0; i <= n; i++)
    {
        for (a = 0; a<=i; a++)
        {
            _putchar(' ');
        }
        _putchar('/');
        _putchar('\n');
       /*
        if (i == n)
        {
            _putchar('/');
        }
        */
    }
        

}