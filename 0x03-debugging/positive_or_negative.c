#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 ** main - Determine if a random number is positive, negative or zero.
 **
 ** Return: 0 on success
 **/
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return (0);
}