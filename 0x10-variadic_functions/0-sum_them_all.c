#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 *
 * Return: 0 or sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned sum = 0, i;

	va_start(parameters, n);

	i = 0;
	while (i < n) 
	{
		sum += va_arg(parameters, int);
		i++;
	}

	va_end(parameters);
	return (sum);
}
