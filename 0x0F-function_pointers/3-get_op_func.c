#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - chooses the right function for operation
 * @s: operator
 * Return: function pointer of operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	}

	int i = 0;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
