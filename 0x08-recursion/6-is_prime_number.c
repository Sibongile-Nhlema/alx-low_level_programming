#include "main.h"

/**
 * helper_prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 0 or -1
 */

int helper_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (helper_prime_number(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input int is prime num, 0
 * @n: interger
 * Return: prime num, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (helper_prime_number(n, n - 1));
}
