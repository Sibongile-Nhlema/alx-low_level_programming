#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - checks if prime number
 * @n: number
 *
 * Return: 1 if true, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2)); /*primes only have 2 factors*/
}

/**
 * is_prime_helper - checks if num is prime
 * @n: number
 * @i: iterator
 *
 * Return: 1 of prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
