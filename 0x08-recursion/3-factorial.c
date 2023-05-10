#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: interger
 * Return: 1 if factorial is 0 and -1 if error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
