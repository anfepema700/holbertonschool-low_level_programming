#include "main.h"
#include <stdio.h>


/**
*is_prime_number - get prime number of given number
*@n: is a natural number
*Return: 1 if n is a prime number and 0 if not.
**/

int is_prime_number(int n)
{
	return (funauxprime(n, 3));
}

/**
*funauxprime - get the prime number
*@prime: is a natural number
*@primediv: is a natural number
*Return: 1 if n is a prime number and 0 if not.
**/

int funauxprime(int prime, int primediv)
{
	if (prime < 0)
	return (0);
	else if (prime == 1)
	return (0);
	else if (prime % primediv == 0 && primediv <= prime / 2)
	return (0);
	else if (prime % primediv != 0 && primediv > prime / 2)
	return (1);
	else
	return (funauxprime(prime, primediv + 1));
}
