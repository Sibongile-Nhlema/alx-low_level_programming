#include "main.h"

/**
 * _pow_recursion - returns value of x to power of y
 * @x: number
 * @y: number
 *
 * Return: result of power, if y < 0 then -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
