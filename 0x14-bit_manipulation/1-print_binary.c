#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of number
 * @n: unsigned long int.
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	if (!printed)
		{
			putchar('0');
		}
}
