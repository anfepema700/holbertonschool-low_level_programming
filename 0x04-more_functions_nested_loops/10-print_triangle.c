#include "main.h"

/**
 *
 * 
 **/


void print_triangle(int size)
{
    int i;
    int a;
    
    if (size==0)
    {
        _putchar('\n');
    } 
    else
    {
    for ( i = 0; i <= size; i++)
    {
        for (a = size ; a >= 0; a--)
        {
              if (i >= a)
                {
                    _putchar(35);
                }
                else
                {
                    _putchar(' ');
            }
        }
            _putchar('\n');        
    }
    }
}