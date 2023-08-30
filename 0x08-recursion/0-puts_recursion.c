#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: imputted string
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s); /*prints first letter*/
		_puts_recursion(s + 1); /*add next letter*/
	}
	else
	{
		_putchar('\n');
	}
}
