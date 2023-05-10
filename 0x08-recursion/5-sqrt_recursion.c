#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 *  _sqrt_recursion_helper - checks if the input integer is negative
 * @n: interger
 * @i: iterration
 * Return: -1 if there isn't a natural num, else 0
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: interger
 * @i: iterrator
 * Return: same as prevoius function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0));
}
