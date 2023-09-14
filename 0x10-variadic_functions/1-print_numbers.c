#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string between nnumbers
 * @n: no of intergers passed
 * @...: variable number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	index = 0;
	while (index < n)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		index++;
	}
	printf("\n");
	va_end(nums);
}
