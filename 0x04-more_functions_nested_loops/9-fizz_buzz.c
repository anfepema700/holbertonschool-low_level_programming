#include "main.h"

/**
*FizzBuzz - Print 0 to 100 Fizz % 3 Buzz % 5
*
*Return: 0 success
**/

int FizzBuzz(void);


int main(void)
{
    FizzBuzz();
    return(0);
}

int FizzBuzz(void)
{
    int i;

    for ( i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            _putchar('F');
        }
        else if (i % 5 == 0)
        {
            _putchar('B');
        }
        else 
        {
            _putchar(i);
        }
    }
    return (0);
}