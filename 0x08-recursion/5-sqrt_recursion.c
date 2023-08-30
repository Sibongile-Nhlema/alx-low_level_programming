#include "main.h"

int _sqrt_resursion_helper(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number
 *
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_resursion_helper(n, 0));
}

/**
 * _sqrt_resursion_helper - calculates squareroot
 * @n: number
 * @i: iteration
 *
 * Return: nothing
 */

int _sqrt_resursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1); /*condition given*/
	if (i * i == n)
		return (i); /*base case*/
	else
		return (_sqrt_resursion_helper(n, i + 1));
}
