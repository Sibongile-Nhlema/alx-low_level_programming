#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number
 *
 * Return: Factorial of number, 1 if !0, -1 on error (negative number)
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)	
		return (-1);
	else
		return (n * factorial(n - 1));
}
