#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit to set to 1
 * @n: pointer to the number to change
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
