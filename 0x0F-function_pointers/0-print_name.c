#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return; /*return nothing*/
	}
	f(name);
}
