#include "3-calc.h"

int op_add(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: number
 * @b: number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_div - divides two numbers
 * @a: number
 * @b: number
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives remainer of division
 * @a: number
 * @b: number
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_mul - product of numbers
 * @a: number
 * @b: number
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - difference of numbers
 * @a: number
 * @b: number
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}
