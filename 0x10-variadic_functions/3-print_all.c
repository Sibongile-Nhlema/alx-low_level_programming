#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format)
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
		}
		if (*format)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
