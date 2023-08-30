#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: imputted string
 *
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{ /*reverse of task 0 code*/
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
