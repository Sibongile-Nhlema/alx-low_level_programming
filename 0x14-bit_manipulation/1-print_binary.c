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
	int i;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)
	{
		if ((n & mask) == mask)
			printf("1");
		else
			printf("0");
		mask >>= 1;
	}
}
