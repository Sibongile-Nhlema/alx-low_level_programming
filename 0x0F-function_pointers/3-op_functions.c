#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int op_mod(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_add(int a, int b);

/**
 * op_add - calculates sum
 * @a: int given
 * @b: int given
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference
 * @a: int given
 * @b: int given
 *
 * Return: difference between
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product
 * @a: int given
 * @b: int given
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates quotient of a and d
 * @a: int given
 * @b: int given
 *
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder
 * @a: int given
 * @b: int given
 *
 * Return: Always 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
