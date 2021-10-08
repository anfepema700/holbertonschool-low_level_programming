#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10) 
        {
                putchar(i);
        }
         /*Infinite loop incoming :( variable i don´t increment*/
        printf("Infinite loop avoided!\n");

        return (0);
}